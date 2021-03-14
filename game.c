#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

/*
//goto语句
int main()
{

	printf("hello  world\n");
	goto again;
	printf("傻逼\n");
again:
	printf("你好\n");

	return 0;
}

*/





/*
//猜数字游戏
//1.电脑会生成一个随机数
//2猜数字
void game()
{
	//1.生成一个随机数
	int ret = 0;
	int guess = 0;
	//拿时间戳来设置随机数的生成起始点
	//time_t time(time_t* time)库函数  
	
	//时间戳
	//当前计算机时间 - 计算机的起始时间（1970.1.1.0：0：0） = （*****）秒
	ret = rand()%100+1;//%100+1 为了生成的数字是0-100之间的数字
	//rand库函数  作用生成随机数
	printf("%d\n", ret);
	//2.猜数字
	while (1)
	{
		printf("请猜数字>:");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了,王李阳嫁给我了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了，想不想娶王李阳\n");
		}
		else
		{
			printf("猜对了，你可以娶王李阳了\n");
		}

	}
}
void menu()
{
	printf("*********************************\n");
	printf("***   1.paly      2.exit     ****\n");
	printf("*********************************\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>:");
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
			printf("选择错误！\n");
			break;
		}
	} while (input);
	return 0;
}
*/