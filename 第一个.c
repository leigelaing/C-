#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*
//�õ�һ��������ÿһλ
int main()
{
	int num = 0;
	int a = 0;
	scanf("%d", &num);
	while (num)
	{
		a = num % 10;
		if (a != 0)
		{
			printf("%d   ", a);
		}
		num = num / 10;
	}
	return 0;
}

*/





/*
//��д����ʵ�֣���һ�������洢���ڴ��еĶ�������1�ĸ���
//��������
//��������ԭ����1���а�λ�룬�������ƣ�
int  main()
{
	int  num = 0;
	int count = 0;
	scanf("%d", &num);
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (1 == ((num >> i) & 1))
			count++;
	}
	printf("%d\n", count);
	return 0;
}
*/


/*������һ��
//������������⣬���Ա����벻��
int  main()
{
	int  num = 0;
	int count = 0;
	scanf("%d", &num);
	//ͳ��num�Ĳ������м���1
	while (num)
	{
		if (num % 2 == 1)
			count++;
		num = num / 2;
	}
	printf("%d\n", count);
	return 0;
}
*/









/*

//(������)���ܴ�����ʱ��������������������ʵ���������Ľ���
//����һ��(�Ӽ���)
int main()
{
	int a = 3;
	int b = 5;
	//ȱ����ӹ��̻�������
	a = a + b; //a == 8��
	b = a - b; //b == 3��
	a = a - b;//a == 5��
	printf("%d %d\n",a, b);
	return 0;
}
//�����������ķ���:�����ò�����������
int main()
{
	int a = 3;
	int b = 5;
	a = a ^ b; // a = 6  
	b = a ^ b; // b = 3
	a = a ^ b; // a = 5
	printf("%d %d\n", a, b);
	return 0;
}
*/




/*
int main()
{
	//����ԭ�룬���룬����һ���ģ�
	//����ԭ�룬���룬����Ҫ���м��㣬
	//���������������Բ�����ʽ���

	//& ��������������
	int a = 3;
	int b = 5;
	int c = a & b;
	//ע�ⰴλ�뽫����32λ�����ƶ�д����
	printf("%d\n", c);//ע���ǲ����������

	//  |������λ��
	int a = 3;
	int b = 5;
	int c = a | b;
	printf("%d\n", c);
	// ^ ������2����λ���
	//������ͬΪ0������Ϊ1
	int a = 3;
	int b = 5;
	int c = a ^ b;
	printf("%d\n", c);
	return 0;
}
*/





/*
int main()
{
	int a = 5 / 2; //��Ϊ����ִ�У���������������һ�� ΪС��ִ��С������
	printf("%lf\n", a);
	int b = 5 % 2;//ȡģ��������Ϊ����
	printf("%d\n", b);
	int a1 = 5;
	int b1 = a1 << 1;
	printf("%d\n", b1);//��߶������ұ߲�0
	int a2 = 5;
	int b2 = a2 >> 1;
	/*�������ƣ�������������������λ��
     ����һλ�г�2 ��Ч����
     �ұ߶�������߲�ԭ����λ��0Ϊ����  1Ϊ��������
     �߼�����
     �ұ߶�������߲�0��
	
	printf("%d\n", b2);
	return 0;
}
*/