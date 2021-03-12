#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>
//offsetof  宏学习



//模拟实现offsetof

#define   OFFSETOF(struct_name,member_name)  (int)  &(((struct_name*)0)->member_name)

struct S
{
	char c1;
	int a;
	char c2;
};
int main()
{
	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, c2));
	return 0;
}







/*
struct S
{
	char c1;
	int a;
	char c2;
};
int main()
{
	printf("%d\n", offsetof(struct S, c1));
	printf("%d\n", offsetof(struct S,a));
	printf("%d\n", offsetof(struct S, c2));
	return 0;
}

*/



/*
#pragma  once //以下代码只定义一次
int ADD(int x, int y);
*/






/*
//防止代码重复包含
#ifndef  __TEST__H__  //如果没有定义
#define __TEST__H__ //下面来定义，定义了就不要再定义
int ADD(int x, int y);
#endif
#define  __TEST__H__

*/



/*
#define  DEBUG  0
int main()
{
#if defined(DEBUG)  //如果DEBUG定义了，参与编译，不然不参与  注意只要定义就好不论值
	printf("哈哈");
#endif
//一样的写法
#ifdef DEBUG  
	printf("哈哈");
#endif
//相反的写法
#if !defined(DEBUG)  //相反情况
	printf("hehe");
#endif

#ifndef DEBUG     //加n刚好相反  
	printf("哈哈");
#endif


	return 0;
}

*/





/*
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = 0;
#if  1 == 1   
		printf("呵呵 \n");
#elif 2 == 1
		printf("hah\n ");
#else  
		printf("heihei`\n ");
#endif
	}
	return 0;
}
*/







/*
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = 0;
#if  0   //为0   不打印                   非零  打印
		printf("%d ", arr[i]);
#endif
	}
	return 0;
}

*/


/*
#define  DEBUG
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = 0;
#ifdef  DEBUG      //如果DEBUG定义了，代码参与编译，否则不
		printf("%d ", arr[i]);
#endif
	}
	return 0;
}

*/











/*

宏不好的一面  就是宏  没调用使用一次  就会将宏所有原代码在程序中放置一次，这样如果宏代码定义很长 这样就会
有很对冗余代码   而函数不会出现这个问题




//函数
int Max(int x, int y)
{
	return (x > y ? x : y);
}

//宏
#define MAX(X,Y)   ((X)>(Y)?(X):(Y))   //宏传递过程不管参数类型问题， 但函数在这方面有要求   
//例如  此函数无法计算double类型数据，宏可以
int  main()
{
	int a = 10;
	int b = 20;

	int max = Max(a, b);
	printf("%d\n", max);
	int max = MAX(a, b);
	printf("%d\n", max);
	//函数无法精确计算
	//函数在调用的时候，会有函数调用和返回的开销
	//而宏在预处理阶段就完成了替换
	//没有函数调用和返回的开销
	int c = 3.0f;
	int d = 4.0f;
	int max = Max(c, d);
	printf("%d\n", max);

	return 0;
}

*/






/*
#pragma pack(4)  //编译选项，表示4字节对齐  平台：VS 2013   。语言：C语言
int main(int atgc,char* argv[])
{
	struct tagTest1
	{
		short a;
		
		char d;
		
		long b;  
		
		long c;
	};
	struct tagTest2
	{
		long b;

		short c;

		char d;

		long a;
	};
	struct tagTest3
	{
		short c;

		long b;

		char d;

		long a;
	};
	struct tagTest1  stT1;
	struct tagTest1  stT2;
	struct tagTest1  stT3;
	printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
	return 0;
}
#pragma pack()



*/









/*
typedef struct
{
	int a;
	//0-3    4
	char b;
	//4   1
	//5要浪费
	short c;  //6-7   2 
	//不浪费
	short d;//8-9   2
	//10-11
}B;

int main()
{
	printf("%d\n", sizeof(B));
	return 0;
}
*/









/*
#define  MAX(x,y)  ((x)>(y)?(x):(y))
int main()
{
	int a = 10;
	int b = 11;
	int max = MAX(a++, b++);
	//替换：int MAX  ((a++)>(b++)?(a++):(b++));
	printf("%d\n", max);//12
	printf("%d\n", a);//11
	printf("%d\n", b);//13
	return 0;
}
*/





/*
int main()
{
	int a = 10; 
	int b = a + 1;
	int b = ++a;//带有副作用 因为a也发生变化
	return 0;
}
*/




/*
int Add(int x, int y)
{
	return x + y;
}
*/