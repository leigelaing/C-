#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<windows.h>

//经典面试题










/*
//改正二
char*  GetMemory(char* p)
{
   p = (char *)malloc(100);
   return p;
}
void Test(void)
{
char *str = NULL;
  str = GetMemory(&str);
strcpy(str, "hello world");
printf(str);


free(str);
str = NULL;
}
int main()
{
Test();
return 0;
}
*/




/*
   改正一
void GetMemory(char **p) 
{
	*p = (char *)malloc(100); 
} 
void Test(void) 
{ 
	char *str = NULL; 
	GetMemory(&str);
	strcpy(str, "hello world");  
	printf(str);


	free(str);
	str = NULL;
}
int main()
{
	Test();
	return 0;
}
*/

/*
//结果是程序崩溃
//存在内存泄露的问题
//因为str以值传递的形式给p
//p是GetMemory函数的形参，只在函数内部有效，等GetMemory函数返回之后，动态开辟的空间尚未释放，并且无法找到，所以造成内存泄露
void GetMemory(char *p)//p中存放的是str的值  str为NULL  所以p中为NULL
{
	p = (char *)malloc(100);//将malloc开辟的空间的首地址给了p 此时p中存放首地址，
}
void Test(void)
{ 
	char *str = NULL;  
	GetMemory(str);  //函数运行结束，p变量销毁，什么狗屁都没有
	strcpy(str, "hello world");
	//str依旧为空指针，将hello world拷贝在空指针中
	//空指针不是有效地址，不指向有效的空间
	//此时程序崩溃，因为hello world 非法访问空间了
	printf(str);
}
int main()
{
	Test();

	//举例
	char* str = "abcdef";
	printf("%s\n", str);
	
	//以下两种写法都OK
	printf(str);
	printf("abcdef");

	return 0;
}

*/









/*
int main()
{
	//1.对NULL指针的解引用操作
	int* p = malloc(40);
	//首选对p进行相关判断
	*p = 10;//malloc开辟空间失败，对NULL指针解引用操作
	
	//2.对动态开辟空间的越界访问
	int* p = (int*)malloc(40);//10个bit
	if (p == NULL)
	{
		return 0;
	}
	//越界访问
	int i = 0;
	for (i = 0; i <= 10; i++)
	{
		*(p + i) = i;
	}
	free(p);
	p = NULL;


	//3对非动态开辟内存使用free释放
	int a = 10;
	int *p = &a;
	//对非动态开辟内存使用free释放
	free(p);
	p = NULL;


	//4.使用free释放动态开辟内存的一部分
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return 0;
	}
	int i = 0;
	for (i = 0; i < 10;i++)
	{
		*p++ = i;//这样写代码，p已经发生变化不再指向刚开始的地址，如果使用free 你释放的是那段空间，
		//此时确认出问题了
	}
	//回收空间
	free(p);
	p = NULL;



	//5.对同一块内存空间的多次释放，
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return 0;
	}
	//使用……
	//释放
	free(p);
	p = NULL;
	//……
	free(p);





	//6.动态开辟内存忘记释放（内存泄露）
	while (1)
	{
		malloc(1);
		Sleep(1000);
	}


	return 0;
 }
 */




/*
int main()
{
	int* p = (int*)malooc(40);
	if (p == NULL)
	{
		return 0;
	}
	//使用
	int* p2 = realloc(p, 80);
	if (p2 != NULL)
	{
		p = p2;
	}

	//realloc函数实现 malloc功能
	//realloc函数直接开辟空间
	int* p = realloc(NULL, 40);//等价于malloc(40);




	return 0;
}

*/













/*
int main()
{
	//a是在栈区开辟的空间，free只能给堆区开辟的空间进行释放  所以代码错误
	int a = 10;
	int*p = &a;
	*p = 20;
	free(p);
	p = NULL;
	return 0;
}
*/