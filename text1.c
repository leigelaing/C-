#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>







/*
#define CAT(x,y)  x##y
int main()
{
	int Class84 = 2019;
	//printf("%d\n",Class84);
	printf("%d\n", CAT(Class, 84));
	//用宏翻译过来
	//printf("%d\n", CAT(Class##84));
	//printf("%d\n", CAT(Class84));
	return 0;
}
*/






/*
//结果:the value of a is 10
//     the value of b is 20
//宏约定大写
#define PRINT(x)  printf("the value of "#x" is %d\n",x)

int main()
{
	int  a = 10;
	int b = 20;
	PRINT(a);
	//printf("the value of ""a"" is %d\n", a);   替换后的效果

	PRINT(b);
	return 0;
}
*/






/*
//printf可以自动合并字符串
int main()
{
	printf("hellow  world\n");
	printf("hellow " " world\n");
	printf("hel ""low"  "world\n");
	return 0;
}

*/




/*
void print(int a)
{
	printf("the value of a is %d\n", a);
}
int main()
{
	int a = 10;
	int b = 20;
	//printf("the value of a is %d\n", a);
	printf(a);
	printf(b);//  把输出结果中的a 变为 b   但函数做不到  必须找 宏
	return 0;
}


*/


/*
#define  MAX 100
#define   DOUBLE(x)  ((x)+(x))   //注意加括号的问题
int main()
{
	int a = 5;
	int ret = 10 * DOUBLE(MAX + MAX);//先调用，然后再进行宏
	//int ret = 10 * a + a == 55
	printf("%d\n", MAX);
	printf("%d\n", ret);
	return 0;

}
*/

/*
//用宏结果输出100  
#define   DOUBLE(x)  ((x)+(x))   //注意加括号的问题
int main()
{
	int a = 5;
	int ret = 10 * DOUBLE(a);
	//int ret = 10 * a + a == 55
	printf("%d\n", ret);
	return 0;

}


*/



/*

#define SQUARE( x )  (x)* (x)     //SQUARE是平方的意思
//带括号为了安全
int main()
{
	int ret = SQUARE(5);
	//int ret = 5 * 5;
	printf("%d\n", ret);
	int  ret = SQUARE(5 + 1);
	pritnf("%d\n", ret); //5 + 1 * 5 + 1    按照顺序计算  结果11    宏只传参不做运算   
	//要想得到整体结果  （x）*（x）    就可以

	return 0;
}

*/






/*
#define MAX 100;
int main()
{
	int a = MAX;  
	;                   //#define  后面加;  相当于后面加空语句
	printf("%d\n",MAX);
	printf("%d\n",a);
	return 0;
}

*/







/*
#define MAX 100
#include <stdio.h>
#define  MAX 100
#define STR "哈哈"
#define reg  register
#define do_forever for(;;)
int main()
{
	do_forever;//死循环替换
	reg int a;
	register int  a;//预定义替换了
	int  max = MAX;
	int mag = 100;
	printf("%d\n", max);
	printf("%s\n", STR);
	return 0;
}

*/




/*
//VC编译器不遵循ANSI C  
int main()
{
	printf("%d\n", __STDC__);
	return 0;
}
*/








/*
//预定义符号
int main()
{
	printf("%s\n", __FILE__);
	printf("%d\n", __LINE__);
	printf("%s\n", __DATE__);
	printf("%s\n", __TIME__);

	//写日志文件
	int arr[10] = { 0 };
	int i = 0;
	FILE* pf = fopen("log.txt", "w");
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
		fprintf(pf, "file:%s  line:%d   date: %s  time: %s  i = %d\n",
			__FILE__, __LINE__, __DATE__, __TIME__);//在记事本打来  .txt 就能看见结果 
		printf("%s\n",__FUNCTION__ );//打印函数名
	
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d  ", arr[i]);
	}



	return 0;
}

*/






/*
extern   int Add(int x, int y);//函数声明
int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	int arr[10] = { 0 };
	printf("%d\n", c);



	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d  ", arr[i]);
	}
	return 0;
}

*/

