#include<stdio.h>
int main()
/*{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int* p = arr;
	for(i=0;i < sz;i++)
	{
	  printf("%d\n",*p);
	  p = p + 1;
	
	}
	return 0;
}
*/




/*{
   int a = 10;
   int* pa = &a;//初始化
   int* p = NULL;//空指针—NULL—强制类型转换0还是0；
   int a = 10;
   int* pa = &a;
   *pa = 20;
   //
   pa = NULL;
   *pa = 10;
   if(pa != NULL)
   {
   
   }
   return 0;
}
*/







/*int* test()
{
	int a = 10;//局部变量进入范围创建，一旦出范围这个变量将会销毁内存并归还空间；
    return &a;
}
int main()
{
    int* p = test();
	printf("%d\n",*p);
	return 0;
}
//以上代码有问题。
*/




/*test()
{

	int a = 10;
    return &a;//局部变量进入范围创建，一旦出范围这个变量将会销毁内存将会归还空间；
}
int main()
{
    int* p = tesr();
	*p = 20;
	return 0;
}
*/





/*{
	int arr[10] = {0};
	int *p = arr;
	int i = 0;
	for(i=0;i<12,i++)
	{
	 	*(p+i) = 1;//指针越界访问
	}
	return 0;
}
*/






/*{
    int a ;//局部变量不初始化默认为随机值
	int* p;//局部指针变量，就被初始化随机值
	*p = 20;
	return 0;
}
//野指针
*/





/*{
    int arr[10] = {0};
   // int* p = arr;//数组名——首元素的地址，
	char* p = arr;//这个char不能使用，因为字节不同， 
	int i = 0;
	for(i = 0;i<10;i++)
	{
	
		*(p+i) = 1;
	}
	return 0;
}
//将数组元素全部变为1
*/





/*{
    int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	printf("%p\n",pa);
	printf("%p\n",pa+1);
    printf("%p\n",pc);
	printf("%p\n",pc+1);
	return 0;
}
*/






/*{
    int a = 0x11223344;
	int* pa = &a;
	*pa = 0;
	return 0;
}
*/





/*{
    int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	printf("%p\n",pa);
	printf("%p\n",pc);
	return 0;

}
*/






/*{
    printf("%d\n",sizeof(char*));
    printf("%d\n",sizeof(short*));
	printf("%d\n",sizeof(int*));
	printf("%d\n",sizeof(double*));
	return 0;
}
*/