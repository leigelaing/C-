#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>
//offsetof  ��ѧϰ



//ģ��ʵ��offsetof

#define   OFFSETOF(struct_name,member_name)  (int)  &(((struct_name*)0)->member_name)

struct S
{
	char c1;
	int a;
	char c2;
};
int main()
{
	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, c2));
	return 0;
}







/*
struct S
{
	char c1;
	int a;
	char c2;
};
int main()
{
	printf("%d\n", offsetof(struct S, c1));
	printf("%d\n", offsetof(struct S,a));
	printf("%d\n", offsetof(struct S, c2));
	return 0;
}

*/



/*
#pragma  once //���´���ֻ����һ��
int ADD(int x, int y);
*/






/*
//��ֹ�����ظ�����
#ifndef  __TEST__H__  //���û�ж���
#define __TEST__H__ //���������壬�����˾Ͳ�Ҫ�ٶ���
int ADD(int x, int y);
#endif
#define  __TEST__H__

*/



/*
#define  DEBUG  0
int main()
{
#if defined(DEBUG)  //���DEBUG�����ˣ�������룬��Ȼ������  ע��ֻҪ����ͺò���ֵ
	printf("����");
#endif
//һ����д��
#ifdef DEBUG  
	printf("����");
#endif
//�෴��д��
#if !defined(DEBUG)  //�෴���
	printf("hehe");
#endif

#ifndef DEBUG     //��n�պ��෴  
	printf("����");
#endif


	return 0;
}

*/





/*
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = 0;
#if  1 == 1   
		printf("�Ǻ� \n");
#elif 2 == 1
		printf("hah\n ");
#else  
		printf("heihei`\n ");
#endif
	}
	return 0;
}
*/







/*
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = 0;
#if  0   //Ϊ0   ����ӡ                   ����  ��ӡ
		printf("%d ", arr[i]);
#endif
	}
	return 0;
}

*/


/*
#define  DEBUG
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = 0;
#ifdef  DEBUG      //���DEBUG�����ˣ����������룬����
		printf("%d ", arr[i]);
#endif
	}
	return 0;
}

*/











/*

�겻�õ�һ��  ���Ǻ�  û����ʹ��һ��  �ͻὫ������ԭ�����ڳ����з���һ�Σ������������붨��ܳ� �����ͻ�
�кܶ��������   ��������������������




//����
int Max(int x, int y)
{
	return (x > y ? x : y);
}

//��
#define MAX(X,Y)   ((X)>(Y)?(X):(Y))   //�괫�ݹ��̲��ܲ����������⣬ ���������ⷽ����Ҫ��   
//����  �˺����޷�����double�������ݣ������
int  main()
{
	int a = 10;
	int b = 20;

	int max = Max(a, b);
	printf("%d\n", max);
	int max = MAX(a, b);
	printf("%d\n", max);
	//�����޷���ȷ����
	//�����ڵ��õ�ʱ�򣬻��к������úͷ��صĿ���
	//������Ԥ����׶ξ�������滻
	//û�к������úͷ��صĿ���
	int c = 3.0f;
	int d = 4.0f;
	int max = Max(c, d);
	printf("%d\n", max);

	return 0;
}

*/






/*
#pragma pack(4)  //����ѡ���ʾ4�ֽڶ���  ƽ̨��VS 2013   �����ԣ�C����
int main(int atgc,char* argv[])
{
	struct tagTest1
	{
		short a;
		
		char d;
		
		long b;  
		
		long c;
	};
	struct tagTest2
	{
		long b;

		short c;

		char d;

		long a;
	};
	struct tagTest3
	{
		short c;

		long b;

		char d;

		long a;
	};
	struct tagTest1  stT1;
	struct tagTest1  stT2;
	struct tagTest1  stT3;
	printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
	return 0;
}
#pragma pack()



*/









/*
typedef struct
{
	int a;
	//0-3    4
	char b;
	//4   1
	//5Ҫ�˷�
	short c;  //6-7   2 
	//���˷�
	short d;//8-9   2
	//10-11
}B;

int main()
{
	printf("%d\n", sizeof(B));
	return 0;
}
*/









/*
#define  MAX(x,y)  ((x)>(y)?(x):(y))
int main()
{
	int a = 10;
	int b = 11;
	int max = MAX(a++, b++);
	//�滻��int MAX  ((a++)>(b++)?(a++):(b++));
	printf("%d\n", max);//12
	printf("%d\n", a);//11
	printf("%d\n", b);//13
	return 0;
}
*/





/*
int main()
{
	int a = 10; 
	int b = a + 1;
	int b = ++a;//���и����� ��ΪaҲ�����仯
	return 0;
}
*/




/*
int Add(int x, int y)
{
	return x + y;
}
*/