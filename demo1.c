#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>






/*
//题目描述
//不使用累计乘法的基础上，通过位移运算（<<）实现2的n次方的计算
//多组输入，每行输入整数n（0 <= n < 31）
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		printf("%d\n", 1 << n);  //将1右移几位就是几的2次方
	}
	return 0;
}
*/







/*
//题目描述
//输入一行数字，出生日期包括  年月日中间没有分隔符
//三行  第一行为出生年份，第二行为月份，第三行为日期，输出时如果月份或者天数为1为时补零 
int main()
{
	int y = 0;
	int m = 0;
	int d = 0;
	scanf("%4d %2d %2d", &y, &m, &d);
	printf("%d\n", y);
	printf("%02d\n", m);//"%02d\n"  不够用0填充  域宽为2 
	printf("%02d\n", d);
	return 0;
}

*/





/*
//转换以下ASCII码对应的字符并输出他们
//73,32,99,97,110,32,100,111,32,105,116,33
int main()
{
	char arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
	int i = 0;
	for (i = 0; i < 12; i++)
	{
		printf("%c", arr[i]);
	}
	return 0;
}

*/




/*
//输入一个字符，该字符构成三角金字塔
//例：1
//     1 
//    1 1
//   1 1 1
int main()
{
	//输入
	char n = 0;
	scanf("%c", &n);
	//输出
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		//打印一行  先打印空格  再打印字符
		int j = 0;
		for (j = 0; j <5-1-i ; j++)
		{
			printf(" ");
		}
		//打印1
		for (j = 0; j <= i; j++)
		{
			printf("%c ",n);//注意%d  后面有个空格
		}
		printf("\n");
	}
	return 0;
}
*/








/*
//从键盘任意输入一个字符，判断是否为字母
//多组输入，每行输入包括一个字符
int main()
{
	int ch = 0;
	//getchar函数获取不到字符时  输入的是EOF（end  of file 值为 -1）  
	while ((ch = getchar()) != EOF)
	{
		//判断字母
		if ((ch >= "A"&&ch <= "Z") || (ch >= "a"&&ch <= "z"))
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
		//清理\n
		getchar();
	}
	return 0;
}

*/





/*
//依次输入一个学生的学号，以及三科成绩
//输出看代码
int main()
{
	int num = 0;
	float a = 0.0;
	float b = 0.0;
	float c = 0.0;
	scanf("%d;%f, %f, %f ",&num,&a, &b, &c);
	printf("%d;%.2f, %.2f, %.2f ", num, a, b, c);// %.2f输出结果为2位小数
	return 0;
}
*/




/*
//printf函数有返回值，写程序输出Hello world  的返回值
//printf函数返回值是整型，返回的是字符的个数
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//结果是  4321


	//方法二
	printf("\n %d \n", printf("Hello world!"));

	//方法一
   int ret = printf("Hello world!");
   printf("\n");
   printf("%d\n", ret);
   return 0;
}

*/




/*
//写一个十六进制数ABCDEF，输出十进制  所占域宽为15
int main()
{
	//域宽 ：域宽就是前面有几个空格，2个域宽是一个空格
	printf("%d\n", 15);
	printf("%4d\n", 15);
	printf("%15d \n", 0XABCDEF);//注意16进制数前面加0X
	//printf可以使用格式控制串"%md" 输出域宽为m的十进制整数
	return 0;
}
*/




/*
//sizeof—— 操作符
int a = 10；
sizeof（int）
sizeof（a）

int main()
{

	printf("The size of short is %d bytes.\n",sizeof(short));
	printf("The size of int is %d bytes.\n", sizeof(int));
	printf("The size of long is %d bytes.\n", sizeof(long));
	printf("The size of long long is %d bytes.\n", sizeof(long long));
	return 0;
}

*/




/*
int main()
{
//    \t   tab  水平制表符     \040 ——\ddd    d是8进制数字
//以32作为ASCII码值代表的字符

	printf(" v     v\n  v   v\n    v\n ");

	printf("v     v\n");
	printf("  v   v\n");
	printf("    v\n");
	return 0;
}

*/




/*
输出：practice makes perfect!
//在线OJ方式刷题
#include<stdio.h>
int main()
{
	printf("practice makes perfect!");
	return 0;
}
*/