
/*
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�����������������������Ԫ�ص�ַ
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//���һ��sizeof����������������������ʾ�������飬sizeof�������������������������Ĵ�С����λ���ֽ�
	printf("%p\n", arr);
	printf("%p\n", arr+1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	//�������&�������������������������飬&��������ȡ��������������ĵ�ַ
	return 0;
}
*/




/*
//������֤��������Ϊ��Ԫ�ص�ַ
int main()
{
	int arr[] = {1,2,3,4,5,6};
	//printf("%p\n", arr);
	//printf("%p\n", arr[0]);
	//printf("%d\n", *arr);//��ӡ�����Ϊ1 ֤��arrָ����Ԫ��
	return 0;
}
*/







/*
void bubble_sort(int arr[],int sz) //int arr[]����Ĳ����������飬������Ԫ�ص�ַ�����ϵ���int* arr
{
	//ȷ��ð�����������
	int i = 0;
	//  ������룬��ע����ԭ��      int sz = sizeof(arr) / sizeof(arr[0]);//sizeof(arr)������Ԫ�صĵ�ַ����&arr[0]��int ��Ԫ�صĵ�ַΪ4
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1 	//�Ż�ʱ��ӵ�	int flag = 1 //������һ��ð������������Ѿ�����
	   //ÿһ��ð������
		int j = 0;
		for (int j = 0; j < sz - 1 - i; j++)//9��Ԫ�رȽ�8�Σ�8��Ԫ�رȽ�7�Σ�һ������
		{
			if (arr[j] < arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//���������������ʵ����ȫ����
			}
		}
		if (flag == 1)
		{
			break;   //Break���ڽ���forѭ����switch��if �����ѭ���У�Ҳ���Խ���ѭ��
		}
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//��arr���������ųɽ���
	//arr���鴫�Σ����Ƕ�arr������д��Σ�
	//ʵ�ʴ��ݹ�ȥ����arr������Ԫ�صĵ�ַ��&arr[0]��
	
	bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/

