#define  _CRT_SECURE_NO_WARNINGS 1
/*
//qsort�������Լ�ʵ��
#include<stdio.h>
void swap(char* buf1,int* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
			*buf1 = *buf2;
			*buf2 = tmp;

	}
}

//ʵ��ð���������ĳ���Ա����֪��δ�����������������������
//����ԱҲ��֪�����Ƚ�����Ԫ�ص�����
void bubble_qsort(void* base,int sz,int width,int (*cmp)(void* e1,void* e2))
{
	int i = 0;
	//����
	for (i = 0; i < sz-1; i++)
	{
		//ÿ�˱ȽϵĶ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//���������бȽ�
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
			//��Ϊchar����ָ�룬ÿ��ָ��һ���ֽڣ��ټ���һ��Ԫ�صĿ������ÿ����һ��Ԫ�صĴ�С
			{
				//����
				swap((char*)base + j*width, (char*)base + (j + 1)*width,width);
			
			}

		}
	}

}
struct stu
{
	char name[20];
	int age;
};
void test1()
{
	int arr[] = { 1, 3, 5, 6, 7, 9, 8, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//ʹ��bubble_qsort�����������򣬳���Աһ��֪���Լ��������ʲô���ͣ�
	//��Ӧ��֪����αȽϴ�����������Ԫ�صĸ���
	bubble_qsort(arr��sz��sizeof(arr[0]),cmp_int);
}
void test2()
{
	struct stu s[3] = { { "zhangsan", 23 }, { "lisi ", 43 }, { "wangwu", 12 } };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_qsort(s, sz, sizeof(s[0]));
}
int main()
{
	test1();
	test2();
	return 0;
}
*/





/*
void qsort(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2));
//qsort
//��һ���������������������Ԫ�ص�ַ
//�ڶ�������������������Ԫ�صĸ���
//�����������������������ÿ��Ԫ�صĴ�С��������λ�ֽ�
//���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ�����������ʹ�����Լ�ʵ��
   //���ĸ����� ���������������ǣ����Ƚ�����Ԫ�صĵ�ַ
int main()
{

	return 0;
}
*/
