#include<stdio.h>
#include <string.h>
void add(int* p)
{
  (*p)++ ; //一定要记得给*p加括号，因为不加括号是给p++，而加上括号是（*p）++；
}

int main()
{
  int  num = 0; 
  add(&num);
  printf("num = %d\n",num);
  add(&num);
  printf("num = %d\n",num);
  add(&num);
  printf("num = %d\n",num);
 return 0;
}








/* 
int binary_search(int arr[],int k,int sz)  
	 //这个地方看上去是给形参传入了数组，实际为数组arr首元素的地址
	 //实际上本位置写的arr[],是一个指针
{
  int left = 0;
  int right = sz - 1;

  while(left <= right)
  {
   int mid = (left + right)/2;  //中间元素下标
    if(arr[mid] < k)
  {
     left = mid + 1; 
  }
    else if(arr[mid] > k)
  {
     right =mid - 1;
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
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int ret = binary_search(arr,k,sz);
	if(ret == -1)
	{
	printf("找不到\n");
	}
	else
	{
	printf("找到了:%d\n",ret);
	}

  return 0;
}
//二分查找：在一个有序数组中查找具体的某个数
//如果找到了返回，这个数的下标，找不到返回-1
*/







/*int   is_leap_year( int y)
{
   if((y%4==0&&y%100!=0) ||(y%400==0))
   {
	   return 1;
   }
   else
   {
       return 0;
   }
}
int main()
{
   int year = 0;
   for(year=1000;year<=2000;year++)
   {
     if(1 == is_leap_year(year))    //返回1是闰年，不是返回0；
	 {
	 printf("%d  ",year);
	 }
   }
  return 0;
}

*/







/*is_prime(int n)
{
  int j = 0;
  for(j=2;j<n;j++)//for(j=2;j<=sqrt(n);j++) //找到2到n-1的数字去试数，这样如果等于0那就不是素数，
  {
  if(n%j == 0)
  
	  return 0;
  }
   if(j == n)
	  return 1;//是素数返回1，不是素数返回0
}
int main()
{
  int i = 0;
  for(i=100;i<=200;i++)
  {
  if(is_prime(i) == 1)
  {
	  printf("%d\n",i);
  }
  }
  return 0;
} 
*/




/*  
 void swap2(int*pa,int*pb)//函数不需要加返回值，前面加void 
{
    int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
  int a = 10;
  int b = 20;
  printf("a = %d  b = %d\n ",a,b);
  return 0;
}
*/










/*{
int a = 10;
int* pa = &a;//pa为指针变量
*pa = 20;   //解引用操作
printf("%d\n",a); 
return 0;
}
*/



/*{
  char arr1[] = "bit";   //bit 后面还隐藏有\0;//\0为字符串的结束标志，后面的内容不再打印；
  char arr2[20] = "#########";  //函数将\0也拷贝了；
  strcpy(arr2,arr1);
  printf("%s\n",arr2);
	return 0;

}
//代码意思将arr1中的内容放在arr2中；
//strlen - strlen-string  length-字符串长度有关
//strcpy - string-copy   copy  -字符串拷贝  
//memset  -  memory  -内存    set- 设置






/*int add(int x,int y)
{
  int z = 0;
  z = x + y; 
  return z;
}
int main()
{
  int a = 10;
  int b = 20;
  int sum = add(a,b);
  printf("sum = %d\n",sum);


  return 0;
}
*/