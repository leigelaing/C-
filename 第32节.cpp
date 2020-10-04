#include<stdio.h>
void Print(char* str)
{
	printf("%s\n",str);
}
 int main()
 {
	void (*p)(char*) = Print;
    (*p)("雷葛亮");
    return 0;
 }










/*
int Add(int x,int y)
{
  int z = 0;
  z = x + y;
  return z;
}
int main()
{
    int a = 10;
	int b = 20;
	//%arr与arr结果一致
    printf("%p\n",Add(a,b));//%p打印地址，函数是有地址的
	printf("%p\n",Add);
	printf("%p\n",&Add);
	//&函数名与函数名都是函数的地址
	int (*pa)(int,int) = Add;
	printf("%d\n",(*pa)(2,3));
	return 0;
}
*/





/*
void test(int **p)
{

}
int main()
{
    int* ptr;
	int**pp = &ptr;
	test(&ptr);
	test(pp);
   int* arr[10];//
	test(arr);//指针数组
	return 0;
}
*/










/*
void test1(int* p)
{

}
int main()
{
    int a = 10;
	int* p1 = &a;
    test1(&a);//ok
    test1(p1);//ok
	char ch = 'w';
	char* pc = &ch;
	test2(&ch);//ok
	test2(pc);//ok
	return 0;
}
*/







/*
void test(int arr[3][5])
{}
void test(int arr[][5])//行可以省略
{}
void test(int arr[3][])//列不能省略
{}
void test(int arr[][])//列不能省略，行可以省略
{}
void test3(int* arr)//二维数组首地址为第一行
{}
void test4(int** arr)//数组的地址不能放入二级指针中
{}
void test5(int(*arr)[5])//ok
{}
int main()
{
    int arr[3][5] = {0};
	test(arr);//二维数组传参
	test1(arr);
    test2(arr);
    test3(arr);
    test4(arr);
    test5(arr);
	return 0;
}
*/





/*
{
    //字符指针
	char* ch = 'w';
	char* p = &ch;
	const char* p2 = "abcdef";
	//指针数组—数组—存放指针的数组
	int* arr[10];//指针数组
	char* ch [5];
	//数组指针
	//int* p3；//整型指针—指向整型的指针
	//char* p4；//字符指针—指向字符的
	int arr2[5];//数组
	int (*pa)[5] = &arr2; //取出数组的地址，pa为数组指针
	return 0;
}
*/