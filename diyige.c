#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
//����ָ�롪��ʵ��Ϊָ��
//ָ�����顪��ʵ��Ϊ���顪�����ָ�������
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	//�������顪���������
	//�ַ����顪������ַ�
	//ָ�����顪�����ָ��
	int* arr2[3] = { &a, &b, &c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr2[i]));
	}
	return 0;
}
*/





/*
int  main()
{
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;  //ppa���Ƕ���ָ��
	int*** pppa = &ppa //pppa��������ָ��
	return 0;
}

*/




/*
int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + 1) = i;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]); //����&arr[i]������д��  *��p+i��
	}
	for (i = 0; i < 10; i++)
	{
		printf(" %p  =======   %p\n",p+1, &arr[i]);
	}
	return 0;
}

*/




/*
int main()
{
	int arr1[10] = { 0 };
	printf("%p\n", arr1);//��ַ������Ԫ�صĵ�ַ
	printf("%p\n", &arr1[0]);
	//�����������arr��������Ԫ�ص�ַ��
	//1.&arr ����&��������������������Ԫ�ص�ַ����������ʾ�������顪&������  ȡ��������������ĵ�ַ��
	//2.sizeof��arr������sizeof��������������������ʾ���������飬����sizeof�������������������������Ĵ�С

	//��֤����
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", arr+1);

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);

	printf("%p\n", &arr);
	printf("%p\n", &arr+1);

	return 0;
}
*/


/*
int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}
int main()
{
    //strlen -���ַ�������
	//�ݹ顪ģ��ʵ����strlen-  ����һ��������ʽ��  ���������ݹ�ķ�ʽ2��
	char arr[] = "bit";
	int  len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}
*/






/*

//ָ��-ָ��:ָ���ȥָ��õ��Ľ��ΪԪ�صĸ���
int main()
{
	char ch[5] = { 0 };
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	pritnf("%d\n",&arr[9] - &arr[0]);//���ַ-С��ַ����Ԫ�ظ���
	pritnf("%d\n", &arr[0] - &arr[9]);//С��ַ-���ַ����Ԫ�ظ����ĸ���
	pritnf("%d\n", &arr[9] - &ch[9]);//���Ͳ�ͳһ�����Ҳ���ͬһ�����飬���ܽ���������������ֵ
	return 0;
}
*/








/*
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = &arr[9];

	for (i = 0; i < sz; i++)
	{
		printf("%d\n", *p);
		p = p - 1; //�����p--
	}
	return 0;
}
*/



/*

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;

	for (i = 0; i < sz; i++)
	{
		printf("%d\n", *p);
		p = p + 1; //�����p++
	}

	for (i = 0; i < sz; i++)
	{
		printf("%d\n", *p);
		p = p + 2; 
	}
	return 0;
}
*/