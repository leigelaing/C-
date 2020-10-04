#include<stdio.h>
int main()
{
    int arr1[] = {1,2,3,4,5};
	int arr2[] = {2,3,4,5,6};
	int arr3[] = {3,4,5,6,7};
    int* parr[] = {arr1,arr2,arr3};
	return 0;
}







/*
{
   int a = 10;
   int b = 20;
   int c = 30;
   int d = 40;
   int* arr[4] = {&a,&b,&c,&d};
   int i = 0;
   for(i = 0;i < 4;i++)
   {
    printf("%d \n",*(arr[i]));
   }
   return 0;
}
*/





/*
//指针数组  是数组
int main()
{
	int arr[10] = {0};//整型数组
	char ch[5] = {0};//字符数组
	int*  parr[4];//存放整型指针的数组——简称指针数组
	char* pch[5];  //存放字符指针的数组——简称指针数组
	return 0;
}
*/










/*
int main()
{
   char str1[] = "hello bit.";
   char str2[] = "hello bit.";
   char* p1 = "hello bit.";
   char *p2 = "hello bit.";
   if( p1 == p2)    //p1 == p2正确，常量字符串因为相同，在内存中只存一份，所以首元素地址相同
   {
	   printf("hehe\n");
   }
   else
   {
	   printf("haha\n");
   }
   if(str1 ==str2)    //str1不等于str2原因首元素地址不可能相同。
   {
	   printf("hehe\n");
   }
   else
   {
	   printf("haha\n");
   }
	return 0;
}
*/






/*
int main()
{
   const char* p = "abcdef";//"abcdef"是一个常量字符串
	*p = 'W';//不能将a换位w,是错的
	printf("%c\n",*p);//p中存a的地址，*p放着a
	printf("%s\n",p);
	return 0;
}
*/




/*{
    //char ch = 'w';
	//char* pc = &ch;
	char arr[] = "abcdef";
	char* pc = arr;  //数组名为首元素的地址；
	printf("%s\n",arr);
	printf("%s\n",pc);
	return 0;
}
*/







/*
void test(int arr[])
{
 int sz = sizeof(arr)/sizeof(arr[0]);
 printf("%d\n",sz);
}

int main()
{
    int arr[10] = {0};
	test(arr);
	return 0;
}
*/