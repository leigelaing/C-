#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>
struct S
{
	char c1;
	int a;
	char c2;
};
#define OFFSETOF(struct_name,member_name)(int)&(((struct_name*)0)->member_name)
//(struct_name*)0 将0强制类型转换为struct_name*
//(struct_name*)0  —>指向成员变量  的地址  最后解引用操作

int main()
{
	struct S s;
	printf("%d\n", offsetof(struct S, c1));// offsetof是一个宏
	printf("%d\n", offsetof(struct S, a));
	printf("%d\n", offsetof(struct S, c2));
	return 0;

}