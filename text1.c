#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>







/*
#define CAT(x,y)  x##y
int main()
{
	int Class84 = 2019;
	//printf("%d\n",Class84);
	printf("%d\n", CAT(Class, 84));
	//�ú귭�����
	//printf("%d\n", CAT(Class##84));
	//printf("%d\n", CAT(Class84));
	return 0;
}
*/






/*
//���:the value of a is 10
//     the value of b is 20
//��Լ����д
#define PRINT(x)  printf("the value of "#x" is %d\n",x)

int main()
{
	int  a = 10;
	int b = 20;
	PRINT(a);
	//printf("the value of ""a"" is %d\n", a);   �滻���Ч��

	PRINT(b);
	return 0;
}
*/






/*
//printf�����Զ��ϲ��ַ���
int main()
{
	printf("hellow  world\n");
	printf("hellow " " world\n");
	printf("hel ""low"  "world\n");
	return 0;
}

*/




/*
void print(int a)
{
	printf("the value of a is %d\n", a);
}
int main()
{
	int a = 10;
	int b = 20;
	//printf("the value of a is %d\n", a);
	printf(a);
	printf(b);//  ���������е�a ��Ϊ b   ������������  ������ ��
	return 0;
}


*/


/*
#define  MAX 100
#define   DOUBLE(x)  ((x)+(x))   //ע������ŵ�����
int main()
{
	int a = 5;
	int ret = 10 * DOUBLE(MAX + MAX);//�ȵ��ã�Ȼ���ٽ��к�
	//int ret = 10 * a + a == 55
	printf("%d\n", MAX);
	printf("%d\n", ret);
	return 0;

}
*/

/*
//�ú������100  
#define   DOUBLE(x)  ((x)+(x))   //ע������ŵ�����
int main()
{
	int a = 5;
	int ret = 10 * DOUBLE(a);
	//int ret = 10 * a + a == 55
	printf("%d\n", ret);
	return 0;

}


*/



/*

#define SQUARE( x )  (x)* (x)     //SQUARE��ƽ������˼
//������Ϊ�˰�ȫ
int main()
{
	int ret = SQUARE(5);
	//int ret = 5 * 5;
	printf("%d\n", ret);
	int  ret = SQUARE(5 + 1);
	pritnf("%d\n", ret); //5 + 1 * 5 + 1    ����˳�����  ���11    ��ֻ���β�������   
	//Ҫ��õ�������  ��x��*��x��    �Ϳ���

	return 0;
}

*/






/*
#define MAX 100;
int main()
{
	int a = MAX;  
	;                   //#define  �����;  �൱�ں���ӿ����
	printf("%d\n",MAX);
	printf("%d\n",a);
	return 0;
}

*/







/*
#define MAX 100
#include <stdio.h>
#define  MAX 100
#define STR "����"
#define reg  register
#define do_forever for(;;)
int main()
{
	do_forever;//��ѭ���滻
	reg int a;
	register int  a;//Ԥ�����滻��
	int  max = MAX;
	int mag = 100;
	printf("%d\n", max);
	printf("%s\n", STR);
	return 0;
}

*/




/*
//VC����������ѭANSI C  
int main()
{
	printf("%d\n", __STDC__);
	return 0;
}
*/








/*
//Ԥ�������
int main()
{
	printf("%s\n", __FILE__);
	printf("%d\n", __LINE__);
	printf("%s\n", __DATE__);
	printf("%s\n", __TIME__);

	//д��־�ļ�
	int arr[10] = { 0 };
	int i = 0;
	FILE* pf = fopen("log.txt", "w");
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
		fprintf(pf, "file:%s  line:%d   date: %s  time: %s  i = %d\n",
			__FILE__, __LINE__, __DATE__, __TIME__);//�ڼ��±�����  .txt ���ܿ������ 
		printf("%s\n",__FUNCTION__ );//��ӡ������
	
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d  ", arr[i]);
	}



	return 0;
}

*/






/*
extern   int Add(int x, int y);//��������
int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	int arr[10] = { 0 };
	printf("%d\n", c);



	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d  ", arr[i]);
	}
	return 0;
}

*/

