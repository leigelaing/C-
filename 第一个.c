/*
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[3][4] = { {1,2,3},{4,5} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
			
			printf("%d  ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}


*/


/*
int main()
{
	int arr[3][4] = { 1, 2, 3 , 4, 5 };
	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };//������ʼ��Ϊ�˻���
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };//һά�������ֵȷ�ϴ�СOk
	int arr[][] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };//��ά���鲻��
	int arr[][] = { { 1, 2, 3, 4, 5 }, { 6, 7, 8, 9 } };//��ά���鲻��
	int arr[3][] = { { 1, 2, 3, 4, 5 }, { 6, 7, 8, 9 } };//����
	int arr[][4] = { {1, 2, 3, 4 }, { 5, 6, 7, 8 }};//�п���ʡ�ԣ��в�����ʡ��

	return 0;
}

*/





/*
int  main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d] = %p\n",i, &arr[i]);
	}
	return 0;
}

*/



/*
//һά�����ʹ��
int main()
{
	/*
	char arr[] = "abcdef"; //[a][b][c][d][e][f][\0]
	//printf("%d\n", arr[3]);
	int i = 0;
	int len = strlen(arr);
	for (i = 0; i < (int)strlen(arr); i++)//strlen����ֵΪ�޷�������������Ҫǿ��������ת��
	{
		printf("%d\n", arr[i]);//��ӡ����ӦASCIIֵ
		printf("%c\n", arr[i]);//��ӡ�ַ�
	}
	
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
*/





/*
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%d\n", sizeof(arr1));//4
	printf("%d\n", sizeof(arr2));//3
	printf("%d\n", strlen(arr1));//3
	printf("%d\n", strlen(arr2));//����\0�Ż�ֹͣ���������ֵΪ���ֵ
	return 0;
}
*/










/*
int main()
{
	//����һ�����������͡���10��
	
	/*
	int arr[10] = {1,2,3};//����ȫ��ʼ����ʣ��δ��ʼ����Ԫ��Ϊ0��
	char arr2[5] = {'a','b'};//ok
	char arr2[5] = { 'a',98 };//ok   98Ϊb��ASCIIֵΪ98
	char arr3[5] = "ab";//a b  \0	
    
	char arr4[] = "abcdef"; 
	printf("%d\n", sizeof(arr4));
	//sizeof�Ǽ���arr4��ռ�ռ�Ĵ�С
	//7��Ԫ�ء���char7*1=7��
	printf("%d\n", strlen(arr4));
   //shrlen���ַ������ȡ�����\0��֮ǰ���ַ���������ڣ�\0�����������
	//int n = 5;
   //char ch[n]  //�����ǳ������ʽ
	return 0;
}
*/