#include<stdio.h>
void print1(int arr[3][5],int x,int y)
{
    int i = 0;
    int j = 0;
    for(i = 0;i < x;i++)
	{
       for(j = 0;j < y;j++)
	   {
	     printf("%d ",arr[i][j]);
	   }
	   printf("\n");
	}
}
void print2(int(*p)[5],int x,int y)
{
  int i = 0;
     for(i = 0;i < x;i++)
	 {
          int j = 0;
		  for(j = 0;j < y;j++)
		  {
			  printf("%d ",p[i][j]);
			  printf("%d ",*(p[i] + j));
		      printf("%d ",*(*(p + i)+j));
			  printf("%d ",*(p + i)[j]);
		  }
		  printf("\n");
	 }
}
int main()
{
	int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	print1(arr,3,5);
	print2(arr,3,5);
	int arr3[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;

	int *p = arr3;
	      for(i = 0;i < 10;i++ )
		{
	       printf("%d",*(p + i));//p为首元素的地址
           printf("%d",*(arr + i));
		    printf("%d",arr[i]);//arr[i] == *(arr + i)  == *(p + i) == p[i]
		}
	return 0;
}













/*
int main()
{
     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	 int *p = arr;
	 int i = 0;
	 for(i = 0;i < 10;i++)
	 {
	    printf("%d",*(p+i));
	 }
	return 0;
}
*/







/*
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int(*pa)[10] = &arr;
	int i = 0;
	for(i = 0;i < 10;i++)
	{
	 printf("%d\n",*(*pa+i));//*pa=arr——arr为首元素的地址，(*pa+i)相当于每个元素的地址，然后再解引用
	}

	return 0;
}
*/






/*
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int(*pa)[10] = &arr;
	int i = 0;
	for(i = 0;i < 10;i++)
	{
	 printf("%d\n"(*pa)[i]);//*pa 等价于arr
	}
	return 0;
}

*/





/*
{
   char* arr[5];  //字符指针数组
   char(*pa)[5] = &arr;
	return 0;
}
*/



/*
{
     int* p = NULL; //整型指针——指向整型的指针—可以存放整型的地址
     char* pc = NULL; //字符指针——指向字符的指针——可以存放字符的地址
	                  //数组指针——指向数组的指针——可以存放数组的地址
     int  arr[10] = {0};
	 //arr——首元素的地址
	 //&arr[0] ——首元素的地址
	 //&arr——数组的地址
	 int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	 int(* p)[10] = &arr;//数组的地址存放起来
    //上面的p就是数组指针
	 return 0;
}
*/