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
   int* pa = &a;//��ʼ��
   int* p = NULL;//��ָ�롪NULL��ǿ������ת��0����0��
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
	int a = 10;//�ֲ��������뷶Χ������һ������Χ����������������ڴ沢�黹�ռ䣻
    return &a;
}
int main()
{
    int* p = test();
	printf("%d\n",*p);
	return 0;
}
//���ϴ��������⡣
*/




/*test()
{

	int a = 10;
    return &a;//�ֲ��������뷶Χ������һ������Χ����������������ڴ潫��黹�ռ䣻
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
	 	*(p+i) = 1;//ָ��Խ�����
	}
	return 0;
}
*/






/*{
    int a ;//�ֲ���������ʼ��Ĭ��Ϊ���ֵ
	int* p;//�ֲ�ָ��������ͱ���ʼ�����ֵ
	*p = 20;
	return 0;
}
//Ұָ��
*/





/*{
    int arr[10] = {0};
   // int* p = arr;//������������Ԫ�صĵ�ַ��
	char* p = arr;//���char����ʹ�ã���Ϊ�ֽڲ�ͬ�� 
	int i = 0;
	for(i = 0;i<10;i++)
	{
	
		*(p+i) = 1;
	}
	return 0;
}
//������Ԫ��ȫ����Ϊ1
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