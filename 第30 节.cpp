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
//ָ������  ������
int main()
{
	int arr[10] = {0};//��������
	char ch[5] = {0};//�ַ�����
	int*  parr[4];//�������ָ������顪�����ָ������
	char* pch[5];  //����ַ�ָ������顪�����ָ������
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
   if( p1 == p2)    //p1 == p2��ȷ�������ַ�����Ϊ��ͬ�����ڴ���ֻ��һ�ݣ�������Ԫ�ص�ַ��ͬ
   {
	   printf("hehe\n");
   }
   else
   {
	   printf("haha\n");
   }
   if(str1 ==str2)    //str1������str2ԭ����Ԫ�ص�ַ��������ͬ��
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
   const char* p = "abcdef";//"abcdef"��һ�������ַ���
	*p = 'W';//���ܽ�a��λw,�Ǵ��
	printf("%c\n",*p);//p�д�a�ĵ�ַ��*p����a
	printf("%s\n",p);
	return 0;
}
*/




/*{
    //char ch = 'w';
	//char* pc = &ch;
	char arr[] = "abcdef";
	char* pc = arr;  //������Ϊ��Ԫ�صĵ�ַ��
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