#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��a��ֵ��Ϊ1,2,3,4��5,6��7,8,9,10
//����Խ�絼�µ�Ұָ������
int main()
{
	int a[10] = { 0 };
	int i = 0;
	int* p = a;
	for (i = 0; i <= 12; i++)
	{
		*p = i;
		p++;     //*p++ = i��
	}
	return 0;
 }





/*
//�ֲ���������������ɺ󣬱����ռ䱻����ϵͳ���գ�
//��ָ��ָ���ͷŵĿռ�ʱ�������Ұָ��
int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	int* p = test();
	*p = 20;
	printf("%d\n",*p);
	return 0;
}

*/




/*
int main()
{
	//ָ��Խ�緶Χ�������Ұָ��
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 12; i++)
	{
		p++;
	}
	*/




	int a;//�ֲ���������ʼ����Ĭ��Ϊ���ֵ
	int* p;//�ֲ���ָ��������ͱ���ʼ�����ֵ
	return 0;
}






/*
int  main()
{
	int arr[10] = { 0 };
	int* p = arr;//arrΪ��Ԫ�ص�ַ
	char* p1 = arr;//���ֲ��У�����ȫ����Ϊ1
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;//��arr�������ݱ�Ϊ 1
	}
	return 0;
}
*/



/*
ָ�����͵ĵڶ�������
int  main()
{
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	printf("%p\n", pa);
	printf("%p\n", pa+1);
	printf("%p\n", pc);
	printf("%p\n", pc+1);
	return 0;
}
*/






//ָ����������κ����ͣ�ָ��������Ͷ���4���ֽ�
//��ôָ���������к�����
//�����ò�����һ����������ģ������������ʾ
/*
ָ�����;�����ָ����н��н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
//   int* p   *p�ܹ�����4���ֽ�
     char* p   *p�ܹ�����1���ֽ�
	 double* p   *p�ܹ�����8���ֽ�
int main()
{
	int a = 0x11223344;
	int* pa = &a;
	*pa = 0; //a��ַ�е�ֵ�仯Ϊ00 00 00 00   �ĸ��ֽ�ȫ������Ϊ0
	char* pc = &a;
	*pc = 0;//a��ַ�е�ֵ�仯Ϊ00 33 22 11   �ĸ��ֽ���ֻ��1���ֽڱ�Ϊ0
	printf("%p\n", pa);
	printf("%p\n", pc);
	return 0;
}
*/