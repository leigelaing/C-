#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<assert.h>










//strcmp库函数学习
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	//比较
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;//相等
		}
		str1++;
		str2++;
	}
	if (*str1 > *str2)
		return 1;//大于
	else
		return -1;//小于
}
int main()
{
	char* p1 = "abcdef";
	char* p2 = "abcdef";
	int ret = my_strcmp(p1, p2);
	printf("ret = %d\n", ret);
	return 0;
}











/*
int main()
{
	char* p1 = "abcdef";//p1存放的是a的地址
	char* p2 = "sqwer";//p2存放的是s的地址
	
	//if ("abcdef" == "sqwer")//不能这样比较两个字符串，实际比较的是a与s的地址，永远不会相等
	int ret = strcmp(p1, p2);
	//strcmp 如何比较字符串是否相等，原理是两个字符串，一对一对进行比较，比较的是对应字符的ASCII值，
	//如果一对相同继续比较下一对，第一个ASCII值大于第二个返回大于0的数字 第一个ASCII值小于第二个返回小于0的数字 
	//都遇到\0并且前面的都相等，返回0 ;
	if (strcmp(p1, p2) > 0)
	{
		pritnf("p1 >p2\n ");
	}
	else if (strcmp(p1, p2) == 0)
	{
		pritnf("p1 == p2\n ");
	}
	else if (strcmp(p1, p2) < 0)
	{
		pritnf("p1 < p2\n ");
	}
	return 0;
}
*/
