#define  _CRT_SECURE_NO_WARNINGS 1
/*
#include<stdio.h>
#include<string.h>
//�ṹ�壺�Լ����������һ�����ͣ�
struct book
{
	char name[20];//C�������
	short price;//55

};//ע��ֺ�
int  main()
{
	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
	struct book  b1 = {"C�������",55};
	printf("������%s\n", b1.name);
	printf("�۸�%d\n", b1.price );
	//name����ֱ�Ӹģ�ֻ��ͨ���⺯�����и�
	strcpy(b1.name, "C++");//shring  copy_�ַ������������⺯����
	b1.price = 65;
	printf("�޸ĺ�ļ۸�%d\n", b1.price);
	struct book*  p = &b1;
	//.�ṹ����� . ��Ա
	//-> �ṹ��ָ�� -> ��Ա


	printf("%s\n",p->name );
	printf("%d\n", p->price );


	//����p��ӡ�������ͼ۸�
	printf("%s\n", (*p).name);
	printf("%d\n", (*p).price);
	return 0;
}
*/





/*
int  main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(int*));
	//�������ȫ��Ϊ4��
	double d = 3.14;
	double* b = &d;
	*b = 5.5;    // *b == d
	printf("%lf %lf\n",*b,d);
	printf("%d\n",sizeof(b));  //b�д�ŵ��ǵ�ַ����С���ַ��λ���йأ�
	return 0;
}

*/



/*
int main()
{
	int a = 10; //4���ֽ�
	int* p = 0;
	p = &a;
	*p;//*���������ò�����
	//��һ�ֱ�����������ŵ�ַ�ġ���ָ�����
	printf("%p\n", &a);
	return 0;
}
*/








/*

//#define �����ʶ������
//#define MAX 100
//#define ����ꡪ��������


//������ʽ
int MAX(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
//��Ķ���
#define MAX1(x,y) (x > y? x : y)

int main()
{ 
	int a = 10;
	int b = 20;
	//����
	int max = MAX(a,b);
	printf("%d\n",max);
	//��ķ�ʽ
	int max1 = 0;
	max1 = MAX1(a, b);
	//max = (a > b? a : b);
	printf("%d\n", max1);

	return 0;
}

*/





/*
//static���κ���
//Ҳ�ı��˺����������򡪡�˵����׼ȷ
//static ���κ����ı亯������������
//���������ⲿ�����������ڲ���������

//�����ⲿ����
extern int ADD(int, int);//�����ⲿ����
int main()
{
	int a = 10;
	int b = 20;
	int sum = ADD(a,b);
	printf("%d\n", sum);
	return 0;
}
*/