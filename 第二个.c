#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//static ����ȫ�ֱ������ı���ȫ�ֱ�����������
//�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ���û�취��ʹ��
int main()
{
	//extern ���������ⲿ����
	    extern  int g_val;
		extern  int g_val2;
		printf("%d\n", g_val);
		printf("%d\n", g_val2);
	    return 0;
}



/*
void test()
{
	//static���ξֲ��������ֲ��������������ڱ䳤
	//
	static int a = 1;//a��һ����̬�ľֲ�����(����static �ֲ�����ÿ�β�����)��
	//int a = 1;  //�ֲ�����ÿ���Զ����٣�ÿ�ν�ȥ�Զ�����
	a++;
	printf("%d\n", a);

}
int  main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;

}
*/





/*
int main()
{
	//typedef�����Ͷ��塪�����ض���
	unsigned int a = 10;
	typedef  unsigned int   uint;
	//unsigned int == uint //������������
     //	register  int a = 10;//�����a����ɼĴ�������
	int a = 10;
	a = -2;
	//int ����ı������з��ŵ�
	//signed (һ��ʡ��)int ;
	//unsigned ��һ��ʡ�ԣ�int;
	//struct�����ṹ��ؼ���
	//union����������/������
	return 0;
}

*/


/*
int main()
{
	//��C�����й涨��
	//�桪����0����1��ʾ
	//�١���0����0��ʾ
	//&&�����߼���
	//||�����߼���
	int a = 3;
	int b = 5;
	int c = a && b;
	int d = a || b;
	printf("%d %d\n", c, d);
	return 0;
}
*/




/*
int main()
{
	int a = 10;
	int b = a++;//����++����ʹ����++
	int c = ++a;//ǰ��++����++��ʹ��
	//--ͬ��
	printf("%d %d %d\n", a,b,c);
	return 0;
}
*/





/*
int main()
{
	int a = 0;//4���ֽ�32��bitλ
	// ~����2����λ��λȡ��
	//00000000000000000000000000000000
	//11111111111111111111111111111111     //���λΪ����λ
	int b = ~a;
	printf("%d\n", b);//���Ϊ -1
	//����ʹ�õ���ԭ��
	//11111111111111111111111111111111 ��������
	//11111111111111111111111111111110�������루ע�����λ���䣬����λ��λȡ����
	//10000000000000000000000000000001����ԭ��
	return 0;
}
*/