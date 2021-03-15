#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//数组名是首元素地址
	//1.sizeof（数组名）——数组名表示整个数组
	//2.&数组名 ——数组名表示整个数组



	//一维数组 
	int a[] = {1,2,3,4}; 
	printf("%d\n",sizeof(a));//16
	printf("%d\n",sizeof(a+0));//4  数组名表示首元素地址 a+0代表首元素地址
	printf("%d\n",sizeof(*a));//4  数组名是首元素地址，*a是首元素
	printf("%d\n",sizeof(a+1)); //4  首元素地址加1  第二个元素地址，依旧是4
	printf("%d\n",sizeof(a[1]));// 4
	printf("%d\n",sizeof(&a)); // 4  取出的是数组的地址没有错，但地址依旧是地址  所以4个字节
	printf("%d\n",sizeof(*&a)); //16  （* &a）  &a取出数组的地址，解引用是整个数组元素  所以16
	printf("%d\n",sizeof(&a+1));//4  &a + 1  整体数组地址加1 后的地址但依据是地址  答案：4   &a依旧代表首元素地址
	printf("%d\n",sizeof(&a[0]));//4  取出第一个元素地址
	printf("%d\n",sizeof(&a[0]+1));//4  第二个元素的地址
	
	


	//字符数组
	char arr[] = {'a','b','c','d','e','f'};
	printf("%d\n", sizeof(arr));// 6   arr是数组大小
	printf("%d\n", sizeof(arr+0));//4   第一个元素地址 
	printf("%d\n", sizeof(*arr));//1  arr是首元素地址  *arr就是首元素
	printf("%d\n", sizeof(arr[1]));//1 第二个元素
	printf("%d\n", sizeof(&arr));// 4 arr是整个数组的地址 依旧是4
	printf("%d\n", sizeof(&arr + 1));//&arr是着整个数组的地址 +1 跳过整个数组后的地址 所以4
	printf("%d\n", sizeof(&arr[0] + 1));//第二个元素的地址 依旧是4



	printf("%d\n", strlen(arr));//随机值 单字符数组没有\0
	printf("%d\n", strlen(arr + 0));//随机值  与上面理由相同
	printf("%d\n", strlen(*arr));//*arr  首元素地址解引用  是首元素  值为a  strlen(a),ASCII 值为97 作为一个地址，这样非法访问的
	printf("%d\n", strlen(arr[1]));//与上面的理由一样
	printf("%d\n", strlen(&arr)); //随机值  取出的是整个数组的地址   没有\0
	printf("%d\n", strlen(&arr + 1));//随机值 整个数组的地址加1 跳过整个数组
	printf("%d\n", strlen(&arr[0] + 1));//随机值 第一个元素地址加1 依旧为随机值
	
	
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n", sizeof(&arr)); 
	printf("%d\n", sizeof(&arr + 1)); 
	printf("%d\n", sizeof(&arr[0] + 1));
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
	printf("%d\n", strlen(*arr)); 
	printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr)); 
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));
	
	
	char *p = "abcdef";
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(p + 1));
	printf("%d\n", sizeof(*p)); 
	printf("%d\n", sizeof(p[0]));
	printf("%d\n", sizeof(&p));
	printf("%d\n", sizeof(&p + 1));
	printf("%d\n", sizeof(&p[0] + 1));
	printf("%d\n", strlen(p)); 
	printf("%d\n", strlen(p + 1));
	printf("%d\n", strlen(*p)); 
	printf("%d\n", strlen(p[0]));
	printf("%d\n", strlen(&p));
	printf("%d\n", strlen(&p + 1));
	printf("%d\n", strlen(&p[0] + 1));
	//二维数组
	int a[3][4] = {0}; 
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(a[0][0])); 
	printf("%d\n",sizeof(a[0]));
	printf("%d\n",sizeof(a[0]+1));
	printf("%d\n",sizeof(*(a[0]+1)));
	printf("%d\n",sizeof(a+1));
	printf("%d\n",sizeof(*(a+1)));
	printf("%d\n",sizeof(&a[0]+1));
	printf("%d\n",sizeof(*(&a[0]+1)));
	printf("%d\n",sizeof(*a));
	return 0;
}