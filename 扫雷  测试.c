#define  _CRT_SECURE_NO_WARNINGS 1
/*      1.������       2.�Ų���   */

#include"game.h"
void  menu()
{
	printf("********************************\n");
	printf("*******   1. play     **********\n");
	printf("*******   2. exit     **********\n");
	printf("********************************\n");
}
void  game()
{
	//�׵���Ϣ�洢
	//1.���ú��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };//11+11
	//2.�Ų���׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//��ӡ����
	DisplayBoard(mine, ROW, COL);
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�����������������룡\n");
			break;

		}
	} while (input);
}
int main()
{
	test();
	return 0;
}