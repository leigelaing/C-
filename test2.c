#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ӡ�������
//1
//1 1
//1 2 1 
//1 3 3 1
//1 4 6 4 1
int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10;i++)
	{
		for (j = 0; j < 10;j++)
		{
			if (j == 0)
			{
				arr[i][j] = 1;//��Ϊ0  �в�������  ��ӡ 1
			}
			if (i == j)
			{
				arr[i][j] = 1; // �Խ���  ȫ����Ϊ 1
			}
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
	//��ӡ
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)//j <= iΪ�˴�ӡΪ������
		{
			printf("%d ",arr[i][j]);
		}
	    	printf("\n");
	}
	return 0;
}






/*
int main()
{
	//-128 - 127
	char a[1000] = { 0 };
	int i = 0;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	//-1     -2    -128    127   126   125    3   2  1  0 
	printf("%d\n",strlen(a));//�� \0 ����0��һ����
	return 0;
}
*/




/*

//��32Ϊ���ģʽ�������ϱ���b���ڶ��� 
int main()
{
	unsigned int a = 0x1234;
	unsigned char b = *(unsigned char*)&a;
	printf("%d\n", b);//���Ϊ 0x00
	return 0;
}
*/



/*
�����300  44  
int main()
{
	unsigned char a = 200;
	unsigned char b = 100;
	unsigned char c = 0;
	//unsigned char 1���ֽ�  8��bitλ
	//   char    -128 - 127
	//unsigned char  0 - 255
	c = a + b;
	//�з���λ������������λ 
	//00000000 00000000 00000000 11001000 ����a
	//00000000 00000000 00000000 01100100����b
	//00000000 00000000 00000001 00101100����a+b��������c�д洢��������
	//a + b�ᷢ����������
	//00101100����c��������c�еĽ��

	//00000000 00000000 00000000 11001000
	//11001000 ����a
	//00000000 00000000 00000000 01100100
	//01100100����b
	printf("%d %d",a+b,c);//������������ 
	return 0;
}

*/








/*
//�������н�����ż������ǰ��
//1.����߿�ʼ��һ��ż��
//2.���ұ߿�ʼ��һ������
//�����ǽ���
void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//�������ż��
		while ((left < right) && arr[left] % 2 == 1)//�����ż��������������
		{
			left++;
		}
		//���ұ�������
		while ((left < right) && arr[right] % 2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
	
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr, sz);
	return 0;
}

*/




/*
//����ˮ��1ƿ��ˮ1Ԫ  2����ƿ���Ի�1ƿ��ˮ����20Ԫ  һ�������ж���ƿ��ˮ
int main()
{
	int money = 0;//����Ǯ��
	int total = 0;//ƿ����
	int empty = 0;//����ƿ����
	scanf("%d ", &money);
	//������
	if (money == 0)
	{
		total = 0;
	}
	else
	{
		total = 2 * money - 1;
	}
	
	
	//����һ
	//���������ˮ�ȵ�
	total = money;
	empty = money;
	//����������ˮ��
	while (empty >= 2)
	{
		total += empty / 2;//�һ���ƿ������
		empty = empty / 2 + empty % 2;//�����Ժ��ٴζһ�

	}
	printf("ƿ������  %d\n", total);

	return 0;
}
*/


