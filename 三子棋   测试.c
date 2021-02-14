#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("************************************\n");
	printf("****  1.play    2. exit ************\n");
	printf("************************************\n");
}
//游戏的整个算法实现
void game()
{
	char ret = 0;
	//数组存放走出的棋盘信息
	char board[ROW][COL] = { 0 };//没开始游戏，每个框全部为空格
	//初始化棋盘
	Initboard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	//下棋
	while (1)
	{
		//玩家下棋
		PlayMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret = '*')
	{
		printf("玩家赢\n");
	}
	else if (ret = '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>：");
		scanf("%d",&input );
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏！\n");
			break;
		default:
			printf("选则错误！请重新选则\n");
			break;
		}
	} while (input);
}
int  main()
{
	test();
	return 0;
}