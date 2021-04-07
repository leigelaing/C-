#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
struct student
{
	int num;
	char name[32];
	float  score;

}stu;//stu 叫结构体变量名









/*
//打印菱形
//   *
//  ***
// *****
//  ***
//   *
int main()
{
	int line = 0;
	scanf("%d", &line);
	//打印上半部分
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		    printf("\n");
	}
	//打印下半部分
	for (i = 0; i < line-1; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j <=i ; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j <2*(line-1-i)-1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/




/*
//水仙花数，求出0—100000之间的水仙花数
//水仙花数指的是三位数


//本代码求自幂数   

int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//判断i是否为水仙花数（自幂数）
		//1.计算i的位数—n位数
		int n = 1;//数无论如何都是一位数  所以初始值为1
		int tmp = i;
		int sum = 0;
		while (tmp /= 10)
		{
			n++;
		       //i = i/10
		}
			//123/10   n++   商不为零 n++计数
			//12/10   n++
		//2.计算i的每一位的n次方之和  sum
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}
		//3.比较i == sum
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

*/





/*
//求Sn = a+aa+aaa+aaaa+aaaaa的前五项之和，其中a为一个数字
int main()
{
	int a = 0;
	int n = 0;
	int sum = 0;
	scanf("%d %d", &a, &n);
	int i = 0;
	int ret = 0;
	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + 2;
		sum = sum + ret;
	}
	printf("%d\n", sum);
	return 0;
}
*/




/*
#include<string.h>
#include<assert.h>
//写一个函数逆序字符串的内容
void reverse(char* str)//str 指向  a
{
	assert(str);//这个意思不清楚
	int len = strlen(str);//使用shrlen函数求出字符串大小
	char* left = str;//首元素地址
	char* right = str + len - 1;//  最后一个元素的元素地址
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char  arr[256] = { 0 };
	//gets函数，读取一行内容
	gets(arr);
	//scanf函数遇见空格就不读取输入值了
	//scanf("%s ", arr);//abcdef  ——fedcba
	//逆序函数
	reverse(arr);
	printf("%s\n",arr);
	return 0;
}
*/




/*
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5 };
	int* p = arr;//arr代表首元素地址
	//*(p + 2) == p[2] == > *(arr + 2) == arr[2]
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	
	int* ptr1 = (int*)(&aa + 1);
	//&aa  是取出整个二维数组的地址，加1跳过整个二维数组，然后再将数组强制类型转换为int* 
	int* ptr2 = (int*)(*(aa + 1));
	//首先aa代表第一行的数组名，加1 等于跳过一整行，再将地址强制类型转换为int*型
	printf("%d %d\n", *(ptr1 - 1), *(ptr2 - 1));
	//*(ptr1 - 1)  等于将ptr1指向往回指向一个int型，结果是指向10；
	//*(ptr2 - 1)  等于ptr2此时指向6，然后再减一指向5，最后结果就是5 
	return 0;
}

*/








/*
int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;     //int(*)[4]—————————————int(*)[5]
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);

	return 0;
}

*/
