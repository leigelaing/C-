#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
/*
//memset——内存设置
int main()
{
	char arr[10] = "";
	memset(arr, '#', 10);//10代表字节
	return 0;
}
*/




/*
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 1, 2, 3, 4, 5 };
	int ret = memcmp(arr1, arr2, 8);//8代表的字节
	printf("%d\n", ret);
	return 0;
}

*/












/*
//memmove函数的模拟实现
//   dest < src ——只能前->后 换
//dest > src && dest <src+count  ——只能后->前 换
//dest > src+count  前后都行
void* my_memmove(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	//方法二
	if (dest < src || dest>(char*)src + count)
	{
		//前->后
	}
	else
	{
		//后->前
	}





	
	
	//方法一
	/*
	if (dest < src)
	{
		//前->后
		while (count--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		//后 -> 前
		*((char*)dest + count) = *((char*)src + count);//注意将int4字节变为1字节，然后count进来先 -- 
		//然后 进来刚好指向需要的那个字节
	}
	
	return ret;
}
*/








/*
struct S
{
	char name[20];
	int age;
};
//模拟实现memcpy
void* my_memcpy(void* dest, const void* src, size_t num)//size_t C语言中规定为无符号整型
{
	//实现原理：将每个指针强制类型转换为char* 类型  然后每一个字节都进行单字节拷贝
	
	void* ret = dest;//记录一下初始地址位置
	assert(dest != NULL);//判断不是空指针
	assert(src != NULL);
	while (num--)//数组一共多少字节，每次拷贝一个字节，然后直到拷贝到num==0为止，while循环等于0时为假，不再拷贝
	{
		//void* 类型的指针不能进行加减运算，必须先强制类型扎转换为char* ，++ 先运行，再强制类型转换
		
		*(char*)dest = *(char*)src; //先强制类型转换，然后然后再解引用操作，Ok了
		++(char*)dest;
		++(char*)src;
	}
	    return ret;
		
}
//本程序需要实现的的是将 12345 拷贝在 34567 中
//实际是没有办法实现的memcpy不处理重叠问题
//C语言标准：
//memcpy 只要处理 不重叠的内存拷贝就可以
//memmove 处理重复内存拷贝

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[10] = { 0 };
	//arr1中的数字拷贝到arr2中
	memcpy(arr2,arr1,sizeof(arr1));
	return 0;
}

*/





/*
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	my_memcpy(arr+2, arr,20);//
	//memmove();//处理内存重叠的情况

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/



/*
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[50] = { 0 };
	int i = 0;
	my_memcpy(arr2, arr1, sizeof(arr1));
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}



*/





/*
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 0 };
	struct S arr3[] = { { "张三",20 }, { "李四",30 } };
	struct S arr4[] = { 0 };
	memcpy(arr4, arr3, sizeof(arr3));//arr3拷贝到arr4 中
	memcpy(arr2, arr1, sizeof(arr1));//arr1拷贝到arr2 中
	strcpy(arr2, arr1);
	return 0;
}
*/






/*
//strlen函数的实现
int main()
{
	int len1 = strlen("abcdef"); //字符串是有\0的  strlen 函数见到\0就停止基数，\0不计算在内
	char arr[] = { 'a','b','c','d','e','f'};//数组中的单个字符是没有\0  strlen 函数无法计数没结果为随机值
	int len2 = strlen(arr);
	printf("%d\n", len1);
	printf("%d\n", len2);
	return 0;
}
*/