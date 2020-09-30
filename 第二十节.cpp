#include<stdio.h>
int main()
//指针数组—数组—存放指针的数组
//数组指针—指针—
{
   int a = 10;
   int b = 20;
   int c = 30;
   //int* pa = &a;
   //int* pb = &b;
   //int* pc = &c;
   //整型数组—存放整型
   //字符数组—存放字符
   //指针数组—存放指针
   int* arr2[3] = {&a,&b,&c};//指针数组
   int i = 0;
   for(i = 0;i < 3;i++)
   {
   printf("%d\n",arr2[i]);
   }
   return 0;
}





/*
{
    int a = 10;
    int* pa = &a;//一级指针
	int* * ppa = &pa;//二级指针
	int* * * pppa = &ppa;//三级指针
	return 0;
}
*/






/*
{
	int arr[10] = {0};
	printf("%d\n",arr);//地址—首元素的地址
	printf("%d\n",arr + 1);
	printf("%d\n",&arr[0]);
    printf("%d\n",&arr[0] + 1);
	printf("%d\n",&arr);//不是首元素的地址
	printf("%d\n",&arr + 1);
	return 0;
}
//在绝大多数arr数组名代表首元素的地址
//以下两种情况arr不是首元素的地址
//1.&arr—&数组名——数组名不是首元素的地址数组名表示整个数组—&数组名——取出的地址是整个数组的地址
//2.sizeof(arr)_sizeof(数组名)—数组名表示整个数组—sizeof（数组名）计算整个数组的大小
*/








/*
int my_shrlen(char* str)
{
  char* start = str;
  char* end = str;
  while(*end != '\0')
  {
     end++;
  }
  return end - start;
}

int main()
{
   //strlen_求字符串长度；
	//递归—模拟实现了strlen—计数器的方式1，递归的方式2；
	//
	char arr[] = "bit";
	int len = my_shrlen(arr);
	printf("%d\n",len);
	return 0;
}
*/





/*{
	char ch[5] = {0};
    int arr[10] = {0,1,2,3,4,5,6,7,8,9,10};
	printf("%d\n",&arr[9] - &arr[0]);//指针减去指针得到的是中间元素的个数；
    printf("%d\n",&arr[9] - &arr[0]);//结果-9；
	printf("%d\n",&arr[9] - &ch[0]);//必须为同一个空间地址，这是错误写法；
	return 0;
}
*/