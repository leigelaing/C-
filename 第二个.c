#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>








/*
//sizeof������
//sizeof����ı�����ռ�ռ�Ĵ�С����λΪ �ֽ�
int main()
{
	int a = 10;
	char c = 'r';
	char* p = &c;
	int arr[10] = { 0 };
	printf("%d\n", sizeof(a));//4    //  �������С����ʡ�Ե�����
	printf("%d\n", sizeof(int));    //   �������С����ʡ�Ե�����
	printf("%d\n", sizeof(c));//1
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(p));//4
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(arr));//40
	printf("%d\n", sizeof(int[10]));//int[10]����arr���������  
	return 0;
}
*/



/*
int main()
{
	int a = 10;
	int* p = &a;//ȡ��ַ������
	*p = 20;//�����ò�����
	printf("%d\n", a);//���ݵ�ַ��a��ֵ��Ϊ20��
	return 0;
}

*/




/*
//��Ŀ��������ֻ��һ����������
//˫Ŀ����������������������
int main()
{
	int a = -5;
	a = -a;
	printf("%d\n", a);

	int a = 10;
	printf("%d\n", !a);//  ����Ϊ��
	if (!a)
	{
		printf("����\n");
	}
	
	return 0;
}
*/




/*
int main()
{
	//���ϸ�ֵ��
	int a = 10;
	a = a + 2;
	a += 2;
	a = a >> 1;
	a >>= 1;
	a = a & 1;
	a &= 1;
	return 0;
}
*/