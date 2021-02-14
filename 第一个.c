/*
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[3][4] = { {1,2,3},{4,5} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
			
			printf("%d  ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}


*/


/*
int main()
{
	int arr[3][4] = { 1, 2, 3 , 4, 5 };
	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };//这样初始化为了换行
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };//一维数组根据值确认大小Ok
	int arr[][] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };//二维数组不行
	int arr[][] = { { 1, 2, 3, 4, 5 }, { 6, 7, 8, 9 } };//二维数组不行
	int arr[3][] = { { 1, 2, 3, 4, 5 }, { 6, 7, 8, 9 } };//不行
	int arr[][4] = { {1, 2, 3, 4 }, { 5, 6, 7, 8 }};//行可以省略，列不可以省略

	return 0;
}

*/





/*
int  main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d] = %p\n",i, &arr[i]);
	}
	return 0;
}

*/



/*
//一维数组的使用
int main()
{
	/*
	char arr[] = "abcdef"; //[a][b][c][d][e][f][\0]
	//printf("%d\n", arr[3]);
	int i = 0;
	int len = strlen(arr);
	for (i = 0; i < (int)strlen(arr); i++)//strlen返回值为无符号整型数，需要强制了类型转换
	{
		printf("%d\n", arr[i]);//打印出对应ASCII值
		printf("%c\n", arr[i]);//打印字符
	}
	
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
*/





/*
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%d\n", sizeof(arr1));//4
	printf("%d\n", sizeof(arr2));//3
	printf("%d\n", strlen(arr1));//3
	printf("%d\n", strlen(arr2));//见到\0才会停止，所以输出值为随机值
	return 0;
}
*/










/*
int main()
{
	//创建一个数组存放整型——10个
	
	/*
	int arr[10] = {1,2,3};//不完全初始化，剩余未初始化的元素为0；
	char arr2[5] = {'a','b'};//ok
	char arr2[5] = { 'a',98 };//ok   98为b的ASCII值为98
	char arr3[5] = "ab";//a b  \0	
    
	char arr4[] = "abcdef"; 
	printf("%d\n", sizeof(arr4));
	//sizeof是计算arr4所占空间的大小
	//7个元素——char7*1=7；
	printf("%d\n", strlen(arr4));
   //shrlen求字符串长度——“\0”之前的字符会计算在内，\0不会计算在内
	//int n = 5;
   //char ch[n]  //必须是常量表达式
	return 0;
}
*/