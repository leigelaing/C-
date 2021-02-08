#define  _CRT_SECURE_NO_WARNINGS 1

/*
# include <stdio.h>
//猜数字游戏：
//1.电脑会生成一个随机数
//2.猜数字
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
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
		case 2:
			printf("退出游戏！\n");
		default:
			printf("输入有误！\n");
		}
	} while (input);
	   return 0;
}

*/











/*
int  main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	for (a = 1; a < 10; a++)
	{
		for (b = 1; b <= a; b++)
		{
			c = a * b;
			printf("%d * %d = %-2d  ", a, b, c);//%-2d打印输出值为两位
			if (a == b)
				printf("\n");
		}
	}
	return 0;
}

*/





/*
//求10个整数中最大值
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int max = arr[0];
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i < sz;i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return 0;
}

*/






/*
//1/1 - 1/2 + 1/3 -1/4      +1/100 方法二
int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum = sum + flag * 1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}
*/



/*
//1/1 - 1/2 + 1/3 -1/4      +1/100
int  main()
{
	int  i = 0;
    double  sum = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 != 0)
		{
			sum = sum + (1.0 / i);
		}
	    else if (i % 2 == 0)
		{
			sum = sum - (1.0 / i);
		}
	}
	printf("%lf\n", sum);
	return 0;
}
*/




/**
//1-100之间一共出现了多少的9
int main()
{
	int count = 0;
	for (int i = 1; i <= 100;i++)
	{
		if (i % 10 == 9)
			count++;
	    if (i / 10 == 9)
			count++;
	}
	printf("%d\n", count);
	return 0;
}
*/