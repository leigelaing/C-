#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
int MAX(int x,int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int max = 0;
	max = MAX(num1, num2);
	printf("sum = %d\n",max);
	return 0;
}
*/





/*
int f(int x, int y)
{
	int k = 0;
	if (x > y){
		k = x;
	}
	else
	{
		k = y;
	}
	return k;
}
int main()
{
	printf("%d\n",f(20,30));
	return 0;
}

*/




/*
int   main()
{
	int a = 0;
	int b = 0;
	printf("��������������\n");
	scanf("%d %d",&a,&b);
	if (a > b)
	{
		printf("%d\n", a);
	}
	else
	{ 
		printf("%d\n",b);
	}

	return 0;
}
*/


/*
int  main()
{
	//�ַ����Ľ�����־Ϊ��\0��
	//"abcde"�����ַ�������һ��\0��
	//'\0'����ת���ַ�  ��Ӧ��ASCIIֵΪ0
	//0����������
	//'0'�����ַ���   ��Ӧ��ASCIIֵΪ48
	//EOF ����end  of   file�����ļ�������־��ASCIIֵΪ-1��
	return 0;

}
*/


/*
int  main()
{
	int arr[] = {0};
	printf("%d\n", sizeof(arr));
	//���������Ԫ�ظ�����
	//���� = �����ܴ�С/ÿ��Ԫ�صĴ�С��
	int s = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", s);
	//sizeof������Ǳ���/������ռ�ռ�Ĵ�С����λΪ�ֽڣ�
	int a = 0;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));//������ʡ������
	printf("%d\n", sizeof a);  //����ʡ������
	return 0;
}
*/


/*
int main()
{  
	int a = -1;
	int b = +2;//����ͨ��ʡ�Բ�д��
	int a = 10;
	printf("%d\n"!a);
	int b = 0;
	printf("%d\n",!b);  // b ������� 1
	return 0;
}

*/


/*
int main()
{
	//λ������2���ƣ�
	//&  ��λ��
	//|  ��λ��
	//^  ��λ���
	//�����������
	//��Ӧ������Ϊ��ͬ����Ϊ0��
	//��Ӧ������Ϊ���죬��Ϊ1��
	int a = 3;
	int b = 5;
	int c = a & b;
	//011
	//101
	//001(��λ����)
	printf("%d\n",c);
	int d = a | b;
	//011
	//101
	//111(��λ����)
	printf("%d\n", d);
	int a = 3;
	int b = 5;
	int k = a ^ b;
	printf("%d\n", k);
	return 0;
}

*/



/*
int main()
{    //��λ����������2����
	//<<  >>(����������)
	int a = 1;
	//����1ռ4���ֽڡ���32��bitλ
	//��������ԭ������
	//����Ϊ��߶����ұ߲���
	//����
	int b = a << 1;//����һλ
	int c = a << 2;//������λ
	return 0;
}
*/


/*
int main()
{
	//int arr[10];//����һ�����10���������ֵ�����
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
	//char arr1[20];
	//float arr2[30];
	//printf("%d\n",arr[5]);//���±����Ԫ��
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		  i++;
	}
		return 0;
}
*/



/*
int Add(int x, int y)
{
	int sum = 0;
	sum = x + y;
	return(sum);
}
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
    sum = Add(a,b);
	printf("%d\n",sum);
	return 0;
}

*/

/*

int  main()
{
	int a = 3;
	printf("�������\n");
	printf("��Ҫ�ú�ѧϰ��������0/1�� \n");
	scanf("%d",&a);
	if (a == 1){
		printf("ţ�ƣ�");
	}
	else{
		printf("�Ͻ�����");
	}
	return 0;
}
*/