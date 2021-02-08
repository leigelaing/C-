#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		printf("一个\n");
		break;
	case 2:
		printf("二个\n");
		break;
	case 3:
		printf("三个\n");
		break;
	}
	return 0;
}







/*
int main()
{
	int a = 0;
	printf("输入数字；");
	scanf("%d",&a);
	switch (a)
	{
	case 1:
		printf("就玩这个！\n");
		break;
	case 2:
		printf("退出游戏！\n");
		break;
	default:
		printf("选择错误！\n");
		break;
	}
	return 0;

}
*/







/*
void game()
{
	printf("猜数字！");
}
void menu()
{
	printf("*******************************\n");
	printf("******1.play  0.exit     ******\n");
	printf("*******************************\n");
}
int main()
{
	int input = 0;
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("选择错误！\n");
			break;
		}
	return 0;
}

*/












/*
void game()
{
	printf("猜数字！\n");
}
void menu()
{
	printf("************************************\n");
	printf("*****1.开始游戏！ 2.结束游戏！******\n");
	printf("************************************\n");
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("输入数字：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入有误！\n");
			break;
		}
	} while (input);
	return 0;
}
*/