#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//'1' - '0' = 1(����1)
//'3' - '0' = 3(����3)
//�ַ����ּ�ȥ0 == ��Ӧ����
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';//��Ŀ��������Χ��8�����ֵ���ַ����֣��������� ��ȥ 8���ַ���0�� ��ȥһ������

}

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;       
		//1-9֮�������  rand�������ɵ��������0-327֮�䣨���飩
		//һ������ģ9 ģ�Ľ����0-8֮���ټ�1 ����Ϊ0-9
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}

}
void Find_Mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	//9 * 9
	printf("�������Ų��׵�����>:");
	scanf("%d %d", &x, &y);
	while (win <row*col - EASY_COUNT)
	{
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����Ϸ�
			//1.����
			if (mine[x][y] == '1')
			{
				printf("ɵ�ƣ���ը����\n");
				DisplayBoard(show, row, col);//��ʾ����
				break;
			}
			//������
			else
			{
				//����x��y��Χ�м�����
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row,col);
				break;
			}
		}
		else
		{
			printf("��������겻�Ϸ���\n");
		}
		if (win == row*col - EASY_COUNT)
		{
			printf("���׳ɹ���\n");
			DisplayBoard(mine, row, col);
		}
	}

}