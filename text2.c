#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>







/*
int main()
{
	int arr[10] = { 1, 2, 3,  4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	int* p = arr;
	for (i = 0; i < 10;i++)
	{
		pritnf("%d ", p[i]);
		pritnf("%d ", *(p + i));
		pritnf("%d ", *(arr + i));
		pritnf("%d ", arr[i]);//arr[i] == *(arr+i) == *(p + i) == p[i]
	}
	return 0;
}

*/







/*
������ָ�����ʽ
void print2(int (*p)[5],int x,int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ",(*(p + i))[j]);//p + i�����У�*��p+i���ҵ�һ��     
		    pritnf("%d ",*(*(p+i)+j));
		    pritnf("%d ",*(p[i]+j));
			pritnf("%d ",p[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
	print2(arr, 3, 5);//arr������������Ԫ�ص�ַ
	//��arr�����һά����  arr�����һ�еĵ�ַ��������һ��Ԫ�صĵ�ַ
	return 0;
}
*/






/*
//��ӡ��ά��������    �������������ʽ
void print1(int arr[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

}
int main()
{
	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
	print1(arr,3,5);
	return 0;
}
*/










/*
//����ָ����÷�
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int(*pa)[10] = &arr;//pa������ָ�� 
	int* p = arr;
	int j = 0;
	for (j = 0; j < 10; j++)
	{
		printf("%d\n", *(p + j));
	}




	int i = 0;
	//д��һ
	for (i = 0; i < 10; i++)
	{
		printf("%d  ", (*pa)[i]);
	}

	//д����
	for (i = 0; i < 10; i++)
	{
		printf("%d  ", *(*pa+i)); //*pa == arr ��Ϊpa��һ������ָ�룬*pa��һ�������ù��̣�int pa[10] = arr�� 
	}


	return 0;
}
*/







/*
int  main()
{
	//����ָ�롪��ָ��ָ��Ԫ������Ϊchar
	char arr[5];
	char (*pa)[5] = &arr;
	
	//����ָ�롪��ָ��ָ��������Ԫ��������char*
	char* arr[5];
	char* (*pa)[5] =  &arr;
	//pa����ָ�������
	//��*pa������˵��pa��ָ��
	//paָ���������5��Ԫ�ص�
	//paָ��������Ԫ��������char*
	return 0;
}

*/




/*
//����ָ�� ����  ʵ��Ϊָ��
int main()
{
	int* p = NULL;//p������ָ�롪��ָ�����ε�ָ�롪�����Դ�����εĵ�ַ
	char* pc = NULL;//pc���ַ�ָ�룬ָ���ַ���ָ�롪�����Դ���ַ��ĵ�ַ
		//����ָ�롪��ָ������ĵ�ַ�����������ĵ�ַ
	    //int arr[10] = {0};
	    //arr����������Ԫ�صĵ�ַ
	    //&arr[0]����������Ԫ�صĵ�ַ
	    //&arr���������ַ
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int(*p)[10] = &arr;//�����ָ��Ҫ������
	//�����p��������ָ��
	//ע�ⲻ��д��int*p[10] = &arr;��Ϊ��������Ľ�������������Ƚ��������ϣ����Ž���ָ���� ���Ҫ�ȴ�����
	return 0;
}
*/



