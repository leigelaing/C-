#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




/*
int main()
{
	int i = 0;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (i = 0; i < 12; i++)//指针越界访问
	{
		printf("hehehe\n");
		arr[i] = 0;
	}
	return 0;
}


*/

/*
int main()
{
	int a, b, c;
	a = 5;
	c = ++a;
	b = ++c, c++, ++a, a++;//逗号表达式最后一个算是为整个逗号表达式的结果
	b = a++ + c;
	printf("a = %d  b = %d c = %d ", a, b, c);
	return 0;
}
*/










/*
int i ;//全局变量——不初始化——默认为0
int main()
{
	i--;
	//-1
	//10000000000000000000000000001
	//11111111111111111111111111110
	//11111111111111111111111111111
	if (i > sizeof(i))//sizeof()-计算变量/类型所占内存的大小——结果永远为大于等于0的无符号数；
	
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}


*/






/*
int main()
{
	int a = 0x11223344;
	char* pc = (char*)&a;//每次访问一个字节
   //int型4个字节   11223300;
	*pc = 0;
	printf("%x\n", a);
	return 0;
}
*/






/*
//结果为0 0 3 4 5；
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	//arr是首元素地址，原数组为int整型的数组，
	//现在将int型的数组转化为short型，每次只能访问两个字节，
	//循环后一共访问int型时的前两个字节
	short* p = (short*)arr;
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		//
		*(p + i) = 0;//每次跨两个字节
	}
	//将数组打印出来
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/









/*
//交换两个数组元素
int main()
{
	int arr1[] = { 1, 3, 5, 7, 9 };
	int arr2[] = { 2, 4, 6, 8, 10 };
	int tmp = 0;
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);//两个数组长度一样，根据谁求长度都是Ok的
	for (i = 0; i < sz; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
		printf("%d  ", arr1[i]);
		printf("%d  ", arr2[i]);

	}

	

}
*/








/*
//倒叙一个数数组
void  Reverse(int arr[],int sz)
{
    int left = 0;
	int right = sz - 1;
	
	while(left < right)
	{
	int tmp = arr[left];
	arr[left] = arr[right];
	arr[right] = tmp;
	left++;
	right--;
	
	}
	

}

*/





/*
//打印数组函数
void  print(int arr[],int sz)
{
	int  i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", arr[i]);
	}
}

*/

/*

//局部变量与全局变量的问题
int main()
{
	{
		int a = 0;
	}
	printf("%d\n", a);
	return 0;
}

*/
