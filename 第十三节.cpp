#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,6,7};
	printf("%p\n",arr);  //数组名就是首元素地址
	//但两个例外数组名就不是首元素地址
	
    int sz = sizeof(arr) / sizeof(arr[0]);
    //第一种情况 sizeof(数组名)——数组名表示整个数组   sizeof(数组名)计算的是整个数组的大小，单位是字节；
	//第二种情况 &数组名，数组名代表整个数组，&数组名取出的是整个数组的地址；
	printf("%p\n",arr[0]);
	printf("%p\n",arr[0] + 1);
	printf("%p\n",arr);
    printf("%p\n",arr + 1);
	//以上两个输出的是首元素的地址，就是第一个元素的起始地址
	printf("%p\n",&arr);
	printf("%p\n",&arr + 1);
	//取出的数组的地址，代表意思是从首地址开始，取出整个元素的地址
  return 0;
}






/*
void bubble_sort(int arr[],int sz)
//确定冒泡排序的趟数；
{
  int i = 0;
  for(i=0;i < sz - 1; i++)
  //每一趟冒泡排序
  {
    int flag = 0;//假设这一趟要排序的数据已经有序，
    int j = 0;
	for(j=0;j<sz - 1 - i;j++)
	{
	 if(arr[j] > arr[j + 1])
	 {
	 int tmp = arr[j];
	 arr[j] =  arr[j + 1];
     arr[j + 1] = tmp;
	 flag = 0；//本趟排序的数据其实不完全有序，
	 }
	}
       if(flag = 0)
	    {
	      break;   
		 }
  }
}

int main()
{
 int arr[] = {9,8,7,6,5,4,3,2,1,0};//对arr进行排序，排成升序
 int i = 0;
 int sz = sizeof(arr) / sizeof(arr[0]);
 bubble_sort(arr,sz);//冒泡排序函数
 //arr是数组，我们对数组 arr 进行传参；实际上传的是首元素的地址
  for(i = 0;i<sz;i++)
 {
	  printf("%d ",arr[i]);
 }
 return 0;
}
//if语句不能与break结合使用，当if语句放在循环中是可以使用break
*/





/*
{
	int arr[3][4] = {{1,2,3},{4,5}};
	int i = 0;
	for(i=0;i<3;i++)
	{
	   int j = 0;
       for(j=0;j<4;j++)
	   {
	   printf( "%d ",arr[i][j]);//打印数组
	   printf("&arr[%d][%d] = %p\n",i,j,&arr[i][j]);//打印地址
	   }
	   printf("\n");//打印转行字符
	}

 return 0;
}

//二维数组的打印
*/








/*{
  int arr[3][4] = {1,2,3,4,5};   //3行4列  不完全初始化后其他数组填零，3行4列多余元素自动跳转下一行
  int arr[3][4] = {{1,2,3},{4,5}};// 123放在第一行，45放在第二行
  int arr[][] = {1,2,3,4,5,6,7,8}; //二维数组不能行和列都没有下标
  int arr[][4] = {{1,2,3,4},{5,6,7,8}};//二维数组的列坚决不能省略，行是可以省略的；
  char arr[5][6];               
  return 0;
}

  */