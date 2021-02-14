
/*
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//以下两种情况数组名并非首元素地址
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//情况一：sizeof（数组名）——数组名表示整个数组，sizeof（数组名）计算的是整个数组的大小，单位是字节
	printf("%p\n", arr);
	printf("%p\n", arr+1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	//情况二：&数组名，数组名代表整个数组，&数组名，取出的是整个数组的地址
	return 0;
}
*/




/*
//本程序证明数组名为首元素地址
int main()
{
	int arr[] = {1,2,3,4,5,6};
	//printf("%p\n", arr);
	//printf("%p\n", arr[0]);
	//printf("%d\n", *arr);//打印出结果为1 证明arr指向首元素
	return 0;
}
*/







/*
void bubble_sort(int arr[],int sz) //int arr[]传入的不是整个数组，而是首元素地址本质上等与int* arr
{
	//确定冒泡排序的趟数
	int i = 0;
	//  错误代码，并注明了原因      int sz = sizeof(arr) / sizeof(arr[0]);//sizeof(arr)等于首元素的地址，（&arr[0]）int 首元素的地址为4
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1 	//优化时添加的	int flag = 1 //假设这一趟冒泡排序的数据已经有序
	   //每一趟冒泡排序
		int j = 0;
		for (int j = 0; j < sz - 1 - i; j++)//9个元素比较8次，8个元素比较7次，一次类推
		{
			if (arr[j] < arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//本趟排序的数字其实不完全有序
			}
		}
		if (flag == 1)
		{
			break;   //Break用于结束for循环与switch，if 如果在循环中，也可以结束循环
		}
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//对arr进行排序，排成降序
	//arr数组传参，我们对arr数组进行传参，
	//实际传递过去的是arr数组首元素的地址（&arr[0]）
	
	bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/

