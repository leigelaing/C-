#define  _CRT_SECURE_NO_WARNINGS 1
/*
#include<stdio.h>
#include<string.h>
//结构体：自己创造出来的一种类型；
struct book
{
	char name[20];//C语言设计
	short price;//55

};//注意分号
int  main()
{
	//利用结构体类型创建一个该类型的结构体变量
	struct book  b1 = {"C语言设计",55};
	printf("书名：%s\n", b1.name);
	printf("价格：%d\n", b1.price );
	//name不能直接改，只能通过库函数进行改
	strcpy(b1.name, "C++");//shring  copy_字符串拷贝——库函数—
	b1.price = 65;
	printf("修改后的价格：%d\n", b1.price);
	struct book*  p = &b1;
	//.结构体变量 . 成员
	//-> 结构体指针 -> 成员


	printf("%s\n",p->name );
	printf("%d\n", p->price );


	//利用p打印出书名和价格
	printf("%s\n", (*p).name);
	printf("%d\n", (*p).price);
	return 0;
}
*/





/*
int  main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(int*));
	//以上输出全部为4；
	double d = 3.14;
	double* b = &d;
	*b = 5.5;    // *b == d
	printf("%lf %lf\n",*b,d);
	printf("%d\n",sizeof(b));  //b中存放的是地址，大小与地址线位数有关；
	return 0;
}

*/



/*
int main()
{
	int a = 10; //4个字节
	int* p = 0;
	p = &a;
	*p;//*——解引用操作符
	//有一种变量是用来存放地址的——指针变量
	printf("%p\n", &a);
	return 0;
}
*/








/*

//#define 定义标识符常量
//#define MAX 100
//#define 定义宏——带参数


//函数方式
int MAX(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
//宏的定义
#define MAX1(x,y) (x > y? x : y)

int main()
{ 
	int a = 10;
	int b = 20;
	//函数
	int max = MAX(a,b);
	printf("%d\n",max);
	//宏的方式
	int max1 = 0;
	max1 = MAX1(a, b);
	//max = (a > b? a : b);
	printf("%d\n", max1);

	return 0;
}

*/





/*
//static修饰函数
//也改变了函数的作用域——说法不准确
//static 修饰函数改变函数的链接属性
//函数具有外部链接属性与内部链接属性

//声明外部函数
extern int ADD(int, int);//声明外部函数
int main()
{
	int a = 10;
	int b = 20;
	int sum = ADD(a,b);
	printf("%d\n", sum);
	return 0;
}
*/