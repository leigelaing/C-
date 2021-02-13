#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//编写函数不允许创建临时变量，求字符串长度


//函数方法
/*
int  my_strlen(char* str)//str存放的是第一个字符的地址
{
	int count = 0;
	while (*str != "\0")
	{
		count++;//记录字符串个数
		str++;//让指针自己往后走
	}
	return count;
}
*/




/*
//递归方法
int  my_strlen(char* str)
{
	if (*str != '\0') //str 中存放第一个字符的地址
		return 1 + my_strlen(str + 1);//str+1变为第二个地址，不断加1返回
	else
	      return 0;
}
//大事化小
// my_strlen("bit")
// 1+my_strlen("it")
//1+1+my_strlen("t")
//1+1+1+my_strlen("\0")
//1+1+1+0

int main()
{
	char arr[] = "bit";
	//int len = strlen(arr);//方法一
	int len = my_strlen(arr);//方法二使用函数
	//my_strlen(arr)  arr是数组 数组传参    传入的不是整个数组而是首元素的地址
	printf("len = %d\n", len);
	return 0;
}
*/




/*
//接受一个整型值（无符号），按照顺序打印它的每一位；
void  print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d\n",n%10);
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	//递归：函数自己调用自己的意思
	print(num);
	return 0;
}

*/













/*
//主函数自己递归调用自己
int main()
 {
	printf("hehehe");
	main();     
	return 0;
}
*/





/*
#include"Add.h"
#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
*/