#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//����������Ԫ�ص�ַ
	//1.sizeof����������������������ʾ��������
	//2.&������ ������������ʾ��������



	//һά���� 
	int a[] = {1,2,3,4}; 
	printf("%d\n",sizeof(a));//16
	printf("%d\n",sizeof(a+0));//4  ��������ʾ��Ԫ�ص�ַ a+0������Ԫ�ص�ַ
	printf("%d\n",sizeof(*a));//4  ����������Ԫ�ص�ַ��*a����Ԫ��
	printf("%d\n",sizeof(a+1)); //4  ��Ԫ�ص�ַ��1  �ڶ���Ԫ�ص�ַ��������4
	printf("%d\n",sizeof(a[1]));// 4
	printf("%d\n",sizeof(&a)); // 4  ȡ����������ĵ�ַû�д�����ַ�����ǵ�ַ  ����4���ֽ�
	printf("%d\n",sizeof(*&a)); //16  ��* &a��  &aȡ������ĵ�ַ������������������Ԫ��  ����16
	printf("%d\n",sizeof(&a+1));//4  &a + 1  ���������ַ��1 ��ĵ�ַ�������ǵ�ַ  �𰸣�4   &a���ɴ�����Ԫ�ص�ַ
	printf("%d\n",sizeof(&a[0]));//4  ȡ����һ��Ԫ�ص�ַ
	printf("%d\n",sizeof(&a[0]+1));//4  �ڶ���Ԫ�صĵ�ַ
	
	


	//�ַ�����
	char arr[] = {'a','b','c','d','e','f'};
	printf("%d\n", sizeof(arr));// 6   arr�������С
	printf("%d\n", sizeof(arr+0));//4   ��һ��Ԫ�ص�ַ 
	printf("%d\n", sizeof(*arr));//1  arr����Ԫ�ص�ַ  *arr������Ԫ��
	printf("%d\n", sizeof(arr[1]));//1 �ڶ���Ԫ��
	printf("%d\n", sizeof(&arr));// 4 arr����������ĵ�ַ ������4
	printf("%d\n", sizeof(&arr + 1));//&arr������������ĵ�ַ +1 �������������ĵ�ַ ����4
	printf("%d\n", sizeof(&arr[0] + 1));//�ڶ���Ԫ�صĵ�ַ ������4



	printf("%d\n", strlen(arr));//���ֵ ���ַ�����û��\0
	printf("%d\n", strlen(arr + 0));//���ֵ  ������������ͬ
	printf("%d\n", strlen(*arr));//*arr  ��Ԫ�ص�ַ������  ����Ԫ��  ֵΪa  strlen(a),ASCII ֵΪ97 ��Ϊһ����ַ�������Ƿ����ʵ�
	printf("%d\n", strlen(arr[1]));//�����������һ��
	printf("%d\n", strlen(&arr)); //���ֵ  ȡ��������������ĵ�ַ   û��\0
	printf("%d\n", strlen(&arr + 1));//���ֵ ��������ĵ�ַ��1 ������������
	printf("%d\n", strlen(&arr[0] + 1));//���ֵ ��һ��Ԫ�ص�ַ��1 ����Ϊ���ֵ
	
	
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n", sizeof(&arr)); 
	printf("%d\n", sizeof(&arr + 1)); 
	printf("%d\n", sizeof(&arr[0] + 1));
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
	printf("%d\n", strlen(*arr)); 
	printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr)); 
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));
	
	
	char *p = "abcdef";
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(p + 1));
	printf("%d\n", sizeof(*p)); 
	printf("%d\n", sizeof(p[0]));
	printf("%d\n", sizeof(&p));
	printf("%d\n", sizeof(&p + 1));
	printf("%d\n", sizeof(&p[0] + 1));
	printf("%d\n", strlen(p)); 
	printf("%d\n", strlen(p + 1));
	printf("%d\n", strlen(*p)); 
	printf("%d\n", strlen(p[0]));
	printf("%d\n", strlen(&p));
	printf("%d\n", strlen(&p + 1));
	printf("%d\n", strlen(&p[0] + 1));
	//��ά����
	int a[3][4] = {0}; 
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(a[0][0])); 
	printf("%d\n",sizeof(a[0]));
	printf("%d\n",sizeof(a[0]+1));
	printf("%d\n",sizeof(*(a[0]+1)));
	printf("%d\n",sizeof(a+1));
	printf("%d\n",sizeof(*(a+1)));
	printf("%d\n",sizeof(&a[0]+1));
	printf("%d\n",sizeof(*(&a[0]+1)));
	printf("%d\n",sizeof(*a));
	return 0;
}