#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
int main()
{
	int arr1[] = { 1, 2, 3, 4, 9 };
	int arr2[] = { 1, 2, 3, 4, 8 };
	int arr3[] = { 1, 2, 3, 4, 4 };
	int* parr[] = { arr1, arr2, arr3 };
	int i = 0;
	for (i = 0; i < 3;i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d  ",*(parr[i] + j));
		}
		printf("\n");
	}
	
	return 0;
}
*/




/*
int  main()
{
   //ָ������  ������  �������ָ�������
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[4] = { &a, &b, &c };
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d\n", *(arr[i]));
	}
	int arr[10] = { 0 };//��������
	char ch[5] = { 0 };//�ַ�����
	int* arr[10] = { 0 };//�������ָ������顪��ָ������
	char* ch[5] = { 0 };//����ַ���ָ������顪��ָ������
	return 0;
}
*/





/*
int main()
{
	char str1[] = "hello bit.";
	char str2[] = "hello bit.";
	const char *str3 = "hello bit.";
	const char *str4 = "hello bit.";
	if (str1 == str2) //�������鲻һ�����Ƚϵĵ���������ͬ�������Ԫ�صĵ�ַ����ô��һ��       
		printf("str1 and str2 are same\n");
	else  
		printf("str1 and str2 are not same\n");
	if (str3 == str4)   //���str3 = str4��һ���� �������ַ��������޸ģ���Ȼ���Ŵ���������ʵ�������ڴ���ֻ���һ��
		//p1��p2Ϊ���ݲ�ͬ�Ŀռ䣬��ָ�����ͬһ��ռ�
		printf("str3 and str4 are same\n");
	else  
		printf("str3 and str4 are not same\n");
	return 0;
}
*/






/*
int main()
{
	//����д��Ok
	const char* p = "abcdef";  //ָ��Ϊ�ĸ��ֽڣ��Ų�����ô����ĸ��Ϊһ��7���ֽ�
	//ǰ���const ��ζ�ź������ݲ��ܸ�
	//"abcdef"�е��ַ���Ϊ�����ַ�����ʵ���ǽ�a�ĵ�ַ����p   
	*p = 'W';//*p = a;���ǲ���ͨ��*p�ı�ռ��ֵ
	printf("%c\n", *p);
	printf("%s\n", p);//%s �����ӡһ���ַ���
	//char ch = 'W';
	//char* pc = &ch;
	//char arr[] = "abcdef";
	//char* pc = arr;//��Ԫ�ص�ַ
	//printf("%s\n",pc);
	//printf("%s\n", arr);
	//return 0;
}
*/





/*
���Ϊ1

void test(int arr[])
{
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
}
int main()
{
	int  arr[10] = { 0 };
	test(arr);
	return 0;
}
*/