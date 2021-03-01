#define  _CRT_SECURE_NO_WARNINGS 1
/*
#include<stdio.h>

void print(char* str)
{
	pritnf("%s\n", str);
}
int main()
{
	void(*p)(char*) = print;//将print函数的地址传给p
	(*p)("hellow  word");
	return 0;
}

*/







/*
//数组指针——指向数组的指针
//函数指针——指向函数的指针——存放函数地址的一个指针
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int arr[10] = { 0 };
	int(*p)[10] = &arr;
	//arr
	//printf("%d\n",Add(a,b))
	printf("%d\n", Add(a, b));
	//&函数名 和 函数名都是函数的地址
	printf("%p\n",&Add);//函数是有地址的
	printf("%p\n", Add);
	int(*pa)(int, int) = Add;//pa是函数指针
	printf("%d\n",(*pa)(2,3));
	return 0;
}

*/






/*
//二级指针传参 
void test(int** p)
{
}
int main()
{
	int *ptr;
	int** pp = &ptr;
	test(&ptr);
	test(pp);
	int* arr[10];
	test(arr);//指针数组也可以
	return 0;
}

*/





/*
//一级指针传参
void test1(int* p)
{}
void test2(char* p)
{}
int main()
{
	int a = 10;
	int* p1 = &a;
	test1(&a);//ok
	test1(p1);//ok
	char ch = 'w';
	char* pc = &ch;
	test2(&ch);
	test2(pc);
	return 0;
}
*/




/*
//二维数组传参
void test(int arr[3][5])//ok
{}
void test1(int arr[][5])//ok 行可以省略，列不能省略
{}
//void test2(int arr[3][])//NO 列不能省略
{}
void test3(int* arr)//NO 这样写不对
{}
void test4(int**  arr)//NO 这样写不对
{}
void test5(int(*arr)[5])//OK
{}
int main()
{
	int arr[3][5] = { 0 };
	test(arr);//二维数组传参
	test1(arr);
	test2(arr);
	test3(arr);
	test4(arr);
	return 0;
}

*/




/*
int main()
{
	//字符数组
	char ch = 'w';
	char* p = &ch;
	const char* p2 = "abcdef";
	//指针数组——数组——存放指针的数组
	int* arr[10];
	//数组指针
	int* p3; //整型指针——指向整型的指针
	char* p4;//字符指针——指向字符
	int arr2[5];//数组
	int(*pa)[5] = &arr2;//取出数组的地址，pa就是一个数组指针

	return 0;
}
*/