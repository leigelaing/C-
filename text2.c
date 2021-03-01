#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>







/*
int main()
{
	int arr[10] = { 1, 2, 3,  4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	int* p = arr;
	for (i = 0; i < 10;i++)
	{
		pritnf("%d ", p[i]);
		pritnf("%d ", *(p + i));
		pritnf("%d ", *(arr + i));
		pritnf("%d ", arr[i]);//arr[i] == *(arr+i) == *(p + i) == p[i]
	}
	return 0;
}

*/







/*
参数是指针的形式
void print2(int (*p)[5],int x,int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ",(*(p + i))[j]);//p + i跳过行，*（p+i）找到一行     
		    pritnf("%d ",*(*(p+i)+j));
		    pritnf("%d ",*(p[i]+j));
			pritnf("%d ",p[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
	print2(arr, 3, 5);//arr数组名就是首元素地址
	//把arr想象成一维数组  arr代表第一行的地址，而不是一个元素的地址
	return 0;
}
*/






/*
//打印二维数组内容    参数是数组的形式
void print1(int arr[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

}
int main()
{
	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
	print1(arr,3,5);
	return 0;
}
*/










/*
//数组指针的用法
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int(*pa)[10] = &arr;//pa是数组指针 
	int* p = arr;
	int j = 0;
	for (j = 0; j < 10; j++)
	{
		printf("%d\n", *(p + j));
	}




	int i = 0;
	//写法一
	for (i = 0; i < 10; i++)
	{
		printf("%d  ", (*pa)[i]);
	}

	//写法二
	for (i = 0; i < 10; i++)
	{
		printf("%d  ", *(*pa+i)); //*pa == arr 因为pa是一个数组指针，*pa是一个解引用过程（int pa[10] = arr） 
	}


	return 0;
}
*/







/*
int  main()
{
	//数组指针——指针指向元素类型为char
	char arr[5];
	char (*pa)[5] = &arr;
	
	//数组指针——指针指向的数组的元素类型是char*
	char* arr[5];
	char* (*pa)[5] =  &arr;
	//pa——指针变量名
	//（*pa）——说明pa是指针
	//pa指向的数组是5个元素的
	//pa指向的数组的元素类型是char*
	return 0;
}

*/




/*
//数组指针 ——  实际为指针
int main()
{
	int* p = NULL;//p是整型指针——指向整形的指针——可以存放整形的地址
	char* pc = NULL;//pc是字符指针，指向字符的指针——可以存放字符的地址
		//数组指针——指向数组的地址——存放数组的地址
	    //int arr[10] = {0};
	    //arr——代表首元素的地址
	    //&arr[0]——代表首元素的地址
	    //&arr——数组地址
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int(*p)[10] = &arr;//数组的指针要存起来
	//上面的p就是数组指针
	//注意不能写成int*p[10] = &arr;因为从运算符的结合性来看，首先进行数组结合，最后才进行指针结合 因此要先带括号
	return 0;
}
*/



