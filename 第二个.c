#define _CRT_SECURE_NO_DEPRECATE

/*
#include<stdio.h>
int main()
{
	char arr[5] = { 0 };//5个字符
	scanf("%s",arr);//输出超出5个字符如何处理
	//scanf函数输入字符串不会考虑输入为几个字符，不检测是否超出数组的容量
	printf("%s\n",arr);
	return 0;

}
*/

/*
int main()
{
	//未声明的标识符
//extern 用来声明外部符号；
	extern  int  a;
	printf("%d\n",a);
	return 0;
}
*/






/*
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("sum = %d\n",a + b);
	return 0;
}
*/


/*
int main()
{
	int a = 0;
	int b = 0;
	//scanf("%d %d", &a, &b);//& 取地址符号
	int sum = a + b ;
	printf("%d\n",sum);
	printf("%d\n",a + b);
	return 0;
}
/*
#include <stdio.h>
//int num2 = 20;//全局变量—定义在代码块之外的变量
int main()
{
	int a = 20;
	//int num = 10;//局部变量—定义在代码块之内的变量
	//局部变量与全局变量可以一致，但尽量保持不一致，容易误会产生BUG
	//当全局变量的名字与局部变量的名字一致时，局部变量优先；
	printf("%d\n",a);
	return 0;
}
*/