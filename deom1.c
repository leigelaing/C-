#define  _CRT_SECURE_NO_WARNINGS 1
/*
#include<stdio.h>
#include<stdlib.h>
//ð������
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	//һ��ð������
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		//����
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j]<arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
struct stu
{
	char name[20];
	int age;
};
void qsort(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2));

int cmp_int(const void* e1, const void* e2)
{
	//�Ƚ�����������ֵ
	return *(int*)e1 - *(int*)e2;
}
int cmp_float(const void* e1, const void* e2)
{
	//�Ƚ�����������ֵ
	if (*(float*)e1 == *(float*)e2)
		return 0;
	else if (*(float*)e1 > *(float*)e2)
		return 1;
	else
		return -1;
}
void test1()
{
	int arr[] = { 1, 3, 5, 6, 7, 9, 8, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", arr[i]);
	}
}

void test2()
{
	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%d\n", f[j]);
	}
}

int main()
{
	int arr[] = {1,3,5,6,7,9,8,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//��һ������
	struct stu s[3] = { { "zhangsan", 23 }, { "lisi ", 43 }, { "wangwu", 12 } };
	float f[] = {9.0,8.0,7.0,6.0,5.0,4.0,3.0};
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	test1();
	test2();
    //ð������ֻ���������ͣ���������������
	//bubble_sort(arr,sz);
	//int i = 0;
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}
	return 0;
}
*/







/*

int  main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
	printf("%d\n", strlen(*arr));
	printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));




	pritnf("%d\n", sizeof(arr));//sizeof(arr)�����������Ĵ�С����λ���ֽڣ�7
	pritnf("%d\n", sizeof(arr + 0));//4/8   ������ǵ�ַ�Ĵ�С����arr + 0����Ԫ�صĵ�ַ
	pritnf("%d\n", sizeof(*arr));//1        *arr����Ԫ�أ�sizeof(*arr)������Ԫ�صĴ�С
	pritnf("%d\n", sizeof(arr[1]));//1      sizeof(arr[1])������ǵڶ���Ԫ�أ�����ڶ���Ԫ�صĴ�С
	pritnf("%d\n", sizeof(&arr));//4/8     &arr��������ĵ�ַ����Ҳ�ǵ�ַ��������4/8���ֽ�
	pritnf("%d\n", sizeof(&arr + 1));//4/8   &arr + 1 ���������������ĵ�ַ����Ҳ�ǵ�ַ 
	pritnf("%d\n", sizeof(&arr[0] + 1));//4/8  &arr[0] + 1 �ڶ���Ԫ�صĵ�ַ
	return 0;
}
*/




/*
int com_stu_by_name(const void* e1, const void*e2)
{
   //�Ƚ����־��ǱȽ��ַ���
	//�ַ����Ƚϲ�����><=���бȽϣ�Ӧ����strcmp����
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name, );
}

int  main()
{
	
	return 0;
}

*/



/*
int  main()
{
	int a = 10;
	int* pa = &a;
	//char* pc = &a;
	char ch = 'W';
	void* p = &a;
	p = &ch;
	//*p = 0;
	//p++;
	//void*  ���͵�ָ�룬���Խ����������͵ĵ�ַ
	//void* ���͵�ָ��  ���ܽ��н����ò���
	//void* ���͵�ָ�룬���ܽ��мӼ������Ĳ���

	return 0;
}
*/