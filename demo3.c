#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>








/*
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	//ָ������
	int* arr[10];
	//����ָ��
	int* (*pa)[10] = &arr;
	//����ָ��
	int(*pArr)(int, int) = Add;//&Add 
	int sum = (*pArr)(1, 2);
	int sum = pArr(1, 2);
	int sum = Add(1, 2);
	pritnf("%d\n", sum);
	//����ָ�������
	int(*pArr[5])(int, int);
	//ָ����ָ�������ָ��
	int(*(*ppArr)[5])(int,int) = &pArr;
	return 0;
}
*/




void BubbleSort(int arr[], int sz)
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð������
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
//qsort�����������������������͵�����

int main()
{
	//ð��������
	//ð��������ֻ��������������
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d   ", arr[i]);
	}
	return 0;
}









/*
void print(char* str)
{
	printf("hehe:%s", str);
}
void test(void(*p)(char*))
{
	printf("test\n");
	p("bit");
}
int main()
{
	test(print);
	return 0;
}

*/



/*
int main()
{
	int arr[10] = { 0 };
	int(*p)[10] = &arr;//ȡ����ĵ�ַ  ָ������
	int(*pf)(int, int);//����ָ��
	int(*pfArr[4])(int, int);//pfArr��һ�����顪������ָ������
	//ppArr��һ��ָ����ָ�������ָ��
	int(*(*ppfArr)[4])(int, int);
   //ppfArr��һ������ָ�룬ָ��ָ��������4��Ԫ�أ�
	//ָ��������ÿ��Ԫ�ص�������һ������ָ��int��*��(int,int);
	return 0;
}
*/