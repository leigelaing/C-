#define  _CRT_SECURE_NO_WARNINGS 1
/*
#include<stdio.h>
#include "game.h"
void game()
{
	//�׵���Ϣ�洢�������ף�
	//1.���úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };  //11 * 11

	//2.�Ų���׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//��ʾ����
	//DisplayBoard(mine,ROW,COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//ɨ��
	Find_Mine(mine,show,ROW,COL);
}
void menu()
{
	printf("*************************************\n");
	printf("***********  1.play   ***************\n");
	printf("***********  0.exit   ***************\n");
	printf("*************************************\n");
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
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
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}

*/
