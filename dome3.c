#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
//柔性数组









/*
struct S1
{
	int n;
	int arr[10];
};
struct S2
{
	int n;
	int arr[];//未知大小的——柔性数组成员——数组的大小是可以调整的
	//如何调整大小
};
struct S
{
	int n;
	int arr[0];//也OK
};
int main()
{
	struct S s;
	printf("%d\n", sizeof(s));//大小是4字节，结构体包含柔性数组时，柔性数组不在空间内计算
	//如何为数组开辟空间
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));//5*sizeof(int) 为arr{}开辟的空间
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;//0,1,2,3,4
	}
	//增加空间
	struct S* ptr = realloc(ps, 44);
	if (ptr != NULL)
	{
		ps = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//释放
	free(ps);
	ps = NULL;
	return 0;
}
*/





/*
//经典面试题
void Test(void)
{ 
	char *str = (char *)malloc(100); 
	strcpy(str, "hello");   
	
	free(str);  //free释放str指向的空间后，并不会把str置为空
	//str = NULL;
	if (str != NULL)
	{
		strcpy(str, "world");   
		printf(str);
	}
}
int main()
{
	Test();
	return 0;
}


*/









/*
void GetMemory(char** p, int num) 
{ 
	*p = (char *)malloc(num); 
}
void Test(void)
{ 
	char *str = NULL; 
	GetMemory(&str, 100);  
	strcpy(str, "hello"); 
	printf(str);
	//忘记释放动态开辟的内存，导致内存泄露
}
int  main()
{
	Test();
	return 0;
}

*/






/*

//非法访问内存
//这个题是   返回栈空间的地址的问题
char * GetMemory(void)
{ 
	char p[] = "hello world"; //数组没函数内部数组，运行完后就销毁
	return p; //p返回的是地址，原来数组的首元素地址，但数组销毁了，地址还在
} 
void Test(void)
{
	char *str = NULL;
	str = GetMemory(); //函数将数组的首元素地址返回给 str  
	printf(str); //str中放的是p的地址  虽然后地址，但里面放的什么，无法知道
	//最后结论为随机值  
}
int main()
{
	Test();
	return 0;
}
//同类型问题
int* test()
{
	int a = 10;//栈区
	return &a;
}
int main()
{
	int* p = test();//a变量已经销毁
	*p = 20;//非法访问
	return 0;
}

//修改方法：将静态区地址返回
int* test()
{
	static int a = 10;//static 修饰后问题就不一样了，a转移位置放置在静态区  不会销毁  问题也就解决了
	return &a;
}
int main()
{
	int* p = test();//a变量已经销毁
	*p = 20;//非法访问
	return 0;
}

//这样写也是OK的  原因是：返回的是 堆空间的地址
int* test()
{
   int* ptr = malloc(100);//是在堆区的空间，虽然ptr销毁，但同时将地址给了p  不影响
   return ptr;
}
int main()
{
  int* p = test();
    return 0;
}
*/
