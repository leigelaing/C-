#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
int main()
{
	int aa[2][5] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int* ptr1 = (int*)(&aa + 1);
	//&aa+1代表跳过整个二维数组，
	
	int* ptr2 = (int*)(*(aa + 1));
	//aa + 1  aa代表第一行的数组地址，加1  指向第二行的首元素，*(aa+1) =aa[1]
	
	pritnf("%d %d", *(ptr1 - 1), *(ptr2 - 1));
	//都走回来一个int的距离
	return 0;
}
*/








/*
int main()
{
	int a[5] = { 5, 4, 3, 2, 1 };

	//5 4 3 2 1 
	int* ptr = (int*)(&a + 1); // &a + 1  数组的地址加 1 跳过整个数组   
	//强制类型int* 转换 代表ptr指向最后一个元素后面的地址，
	printf("%d %d", *(a + 1), *(ptr - 1));
	//在往回跳一个int*  的指针指向1
    //答案：是4,1
	return 0;
}
*/





/*
int  main()
{

   int (*       (*p)[10]    )(int*)


   int (*     (*F)(int,int)     )(int)
   
   int (*F)(int,int)
   

   int(*(*F)(int,int))_err
   
   
   *(*F)(int,int)(int)_err

	int *fun(int a, int b);//函数声明

	int (*)fun(int a, int b);//err
	
	int( *fun)(int a, int b);//函数指针
	
	(int *) fun (int a, int b);////函数声明
	return 0;
}

*/



/*
int  main()
{
	//申请空间
	int* p = (int*)malloc(10 * sizeof(int));
	
	//使用空间
	//********
	
	//释放空间
	free(p);
	return 0;
}

*/



/*
跳水问题 
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{

					}
				}
			}
		}
	}
	return 0;
}
*/

