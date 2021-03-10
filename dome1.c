#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>














/*
int main()
{
	//这个代码的问题在于，只分配了5个int型的空间，然而循环的需要放入10个元素，
	//因此是对动态开辟的内存的越界访问
	int* p = (int*)malloc(5 * sizeof(int));
	if (p == NULL)
	{
		return 0;
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
	}
	free(p);
	p = NULL;
	return 0;
}
*/





//动态内存管理
/*
int main()
{
	//1.malloc函数有可能返回空指针，所以会出现对空指针的解引用操作
	int* p = (int*)malloc(40);
	
	*p = 0;//err

	//这样会出现的问题是，万一malloc函数开辟空间失败了，p就会被赋值为NULL
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	free(p);
	p = NULL;
	return 0;
}


*/




/*
//realloc  作用调整动态开辟内存空间的大小
int main()
{
	int* p = (int*)malloc(20);

	if (p == NULL)
	{
		printf("%s\n", streeror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	    //就是在使用malloc开辟的20个字节空间
		//假设这里20个字节不能满足我们的使用了
		//希望我们能够有40个字节的空间
		//这里就可以使用realloc来调整动态开辟的内存
		
		
		
		//   realloc  使用的注意事项
		//1.如果p指向的空间之后有足够的空间可以追加，则直接追加，然后返回p
		//2.如果p指向的空间之后没有足够的空间可以追加，则reallo函数会重新找一个新的内存区域
		//开辟一块满足需求的空间，并把原来内存中的数据拷贝过来，释放旧的内存空间，最后返回新开辟内存空间的地址
		//3.所以得用一个新的变量来接受realloc函数的返回值
	}
	int* ptr = realloc(p, INT_MAX);
	if (ptr != NULL)
	{
		p = ptr;
		int i = 0;
		for (i = 5; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d\n", *(p2 + i));
		}
	}
	int i = 0;
	for (i = 5; i < 10; i++)
	{
		 *(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", *(p2 + i));
	}
	//释放内存
	free(p);
	p = NULL;
	return 0;
}
*/





/*
calloc库函数学习
int main()
{
	//malloc(10*sizeof(int));
	int * p = (int*)calloc(10,sizeof(int));
	if (p == NULL)
	{
		//打印错误原因的一个方式
		printf("%s\n", streeror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d\n", *(p + i));
		}
		//释放空间
		//free函数是用来释放动态开辟的空间的
		free(p);
		p = NULL;
	return 0;
}
*/





/*
//malloc和free   库函数的学习
int main()
{
	//向内存申请10个整型的空间
	int* p = (int*)malloc(10 * sizeof(int));
	
	if (p == NULL)
	{
		//打印错误原因的一个方式
		printf("%s\n", streeror(errno));
	}
	else
	{
		//正常使用空间
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d\n", *(p + i));
		}
	}
	//当动态申请的空间不再使用的时候
	//就应该还给操作系统
	free(p);//free释放了这段空间但p依旧有能力找到那段空间
	p = NULL;//因此将p设为空指针
	return 0;
}

*/





/*
struct S
{
	char name[20];
	int age;
};
int main()
{
	int n = 0;
	scanf("%d ", &n);
	struct S arr[50];//50个struct S类型的数据
	//30   不够
	//60——浪费
	struct S arr[n];//数组不能为变量
	return 0;
	//C语言可以创建变长数组—C99标准可以这样增加  但一致无法普及使用
	//gcc编译器 支持C99标准
	//


}
*/
