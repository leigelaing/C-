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
	       printf("%d",*(p + i));//pΪ��Ԫ�صĵ�ַ
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
	 printf("%d\n",*(*pa+i));//*pa=arr����arrΪ��Ԫ�صĵ�ַ��(*pa+i)�൱��ÿ��Ԫ�صĵ�ַ��Ȼ���ٽ�����
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
	 printf("%d\n"(*pa)[i]);//*pa �ȼ���arr
	}
	return 0;
}

*/





/*
{
   char* arr[5];  //�ַ�ָ������
   char(*pa)[5] = &arr;
	return 0;
}
*/



/*
{
     int* p = NULL; //����ָ�롪��ָ�����͵�ָ�롪���Դ�����͵ĵ�ַ
     char* pc = NULL; //�ַ�ָ�롪��ָ���ַ���ָ�롪�����Դ���ַ��ĵ�ַ
	                  //����ָ�롪��ָ�������ָ�롪�����Դ������ĵ�ַ
     int  arr[10] = {0};
	 //arr������Ԫ�صĵ�ַ
	 //&arr[0] ������Ԫ�صĵ�ַ
	 //&arr��������ĵ�ַ
	 int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	 int(* p)[10] = &arr;//����ĵ�ַ�������
    //�����p��������ָ��
	 return 0;
}
*/