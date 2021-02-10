#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//写一个函数，每调用一次这个函数，就会将num加1


int main()
{
	return 0;
}











/*
#include<string.h>
/*
   二分查找：
   在一个有序数组中查找具体的某个数
   如果找到返回下标，如果没有找到返回-1

int binary_search(int arr[],int k,int sz)//本质上arr是一个指针
{
	int left = 0;
	int right = sz - 1;
	while (left<= right) //相等时还有最后一个元素需要比较
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	         return -1;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr)/sizeof(arr[0]);//数组元素个数
	int ret = binary_search(arr,k,sz);//arr传递过去的是arr数组首元素的地址；
	if (ret == -1)
	{
		printf("找不到！\n");
	}
	else
	{
		printf("下标为：%d\n", ret);
	}
	return 0;
}
*/







/*
int is_leap_year(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
		return 1;
	else
		return 0;
}
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (1 == is_leap_year(year))
			printf("%d  ", year);
	}
	return 0;
}

*/






/*
//函数实现判断素数
int is_prime(int n)
{
	int a = 0;
	for (a = 2; a < n; a++)//	for (a = 2; a <= sqrt(n); a++)
	{
		if (n % a == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int i = 0;
	for (i = 100; i <= 200;i++)
	{
		if (is_prime(i) == 1)
			printf("%d\n", i);
	}
	return 0;
}


*/







/*
int  get_max(int x, int y)//形参出了函数就会自动销毁
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 10;
	int b = 20;
	int c = get_max(a, b);
	int d = get_max(a, get_max(a, b));//函数调用函数
	int e = get_max(100, 300 + 1);
	printf("%d\n", c);

	return 0;
}

*/






/*
//无法实现两个数字的更换
当实参传给形参的时候，形参实际上为实参的一份临时拷贝
对形参的修改不会实参的值
void Swap(int x, int y)
{
	int tem = 0;
	tem = x;
	x = y;
	y = tem;
}
int  main()
{
	int a = 10;
	int b = 20;
	Swap(a, b);
	printf("a = %d  b = %d\n", a, b);
	return 0;
}
*/





/*
//可以实现两个数字的更换
void Swap(int* x, int* y)
{
	int tem = 0;
	tem = *x;
	*x = *y;
	*y = tem;
}
int  main()
{
	int a = 10;
	int b = 20;
	Swap(&a,&b);
	printf("a = %d  b = %d\n", a, b);
	return 0;
}
*/




/*
int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);//将arr数组中前5个更换为  *  
	printf("%s\n", arr);
	return 0;
}
//memset
//memory——内存   set——设置
*/