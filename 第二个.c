#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"第三个.h"   //自己写的头文件用双引号
// 函数的声明
// int Add(int, int);//Add(int x, int y);两种声明方式都行

int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
//函数的调用
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}

/*
//函数的定义
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
*/








/*
//结果为4321  
//原因：printf函数返回值为字符的个数：43 两个 2  一个 
int main()
{
	printf("%d\n", printf("%d", printf("%d", 43)));
	return 0;
}
*/




/*
int main()
{
	int len = 0;
	
	
	len = strlen("abc");
	printf("%d\n", len);

	printf("%d\n", strlen("abc"));  //函数的链式访问
	return 0;
}
*/