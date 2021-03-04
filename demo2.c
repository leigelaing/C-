#define  _CRT_SECURE_NO_WARNINGS 1
/*
#include<stdio.h>
#include<string.h>
struct stu
{
	char name[20];
	int age;
};
//用年龄排序
int cmp_structstu1(const void* e1, const void* e2)
{
	return((struct stu*)e1)->age - ((struct stu*)e2)->age;
	
}
//用名字进行排序（比较名字就是比较字符串不能用> < =）
//比较名字就是比较字符串
//比较字符串不能用> < =  用strcmp函数
int cmp_structstu2(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name , ((struct stu*)e2)->name);

}
void test3()
{
	struct stu s[3] = { { "zhangsan", 23 }, { "lisi ", 43 }, { "wangwu", 12 } };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_structstu1);
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%f   ", s[j]);
	}

}
*/

/*
int cmp_float(const void* e1, const void* e2)
{
	//比较两个浮点型值
	if (*(float*)e1 == *(float*)e2)
		return 0;
	else if (*(float*)e1 > *(float*)e2)
		return 1;
	else
		return -1;
}
void test2()
{
	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%f   ", f[j]);
	}
}
int main()
{
	test2();
	test3()
}
*/
