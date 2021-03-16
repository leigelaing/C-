#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//'1' - '0' = 1(数字1)
//'3' - '0' = 3(数字3)
//字符数字减去0 == 对应数字
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';//将目标坐标周围的8个左边值（字符数字）加起来， 减去 8个字符‘0’ 减去一个不行

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
	//打印列好
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
		//1-9之间的数字  rand生成生成的随机数是0-327之间（待查）
		//一个数字模9 模的结果在0-8之间再加1 正好为0-9
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
	printf("请输入排查雷的坐标>:");
	scanf("%d %d", &x, &y);
	while (win <row*col - EASY_COUNT)
	{
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//坐标合法
			//1.彩雷
			if (mine[x][y] == '1')
			{
				printf("傻逼，被炸死了\n");
				DisplayBoard(show, row, col);//显示棋盘
				break;
			}
			//不是雷
			else
			{
				//计算x，y周围有几个雷
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row,col);
				break;
			}
		}
		else
		{
			printf("输入的坐标不合法！\n");
		}
		if (win == row*col - EASY_COUNT)
		{
			printf("排雷成功！\n");
			DisplayBoard(mine, row, col);
		}
	}

}