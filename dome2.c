#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>
/*
//���� �� ������  ���������塪����������ǹ�ͬ������ͬһ��ռ�
struct S
{
	char a;
};
enum A
{

};
union Un
{

};
int main()
{
	return 0;
}
*/




/*
//ö��
//ö������
enum Sex
{
	//ö�ٵĿ���ȡֵ����ö�ٳ���  
	MALE = 2 ,
	FEMALE = 3,
	SECRET = 4
};

#define RED 0;
#define GREEN 1;
#define BLUE 2;

enum  Color
{
  //ö�ٳ���Ĭ�ϴ��㿪ʼ ���ε���1   Ҳ�������¸���ʼֵ
	RED,   //0
	GREEN, //1
	BLUE   //2
};
int main()
{
	enum Sex s = MALE;
	enum Color c = BLUE;//BLUE����2�������ܽ�2����c ��Ϊ2Ϊint������
	printf("%d %d %d\n", RED, GREEN, BLUE);
	printf("%d %d %d\n", MALE, FEMALE, SECRET);
	return 0;
}

*/





/*
//λ�Ρ���������λ
//λ�ε����ÿ��Խ�ʡ�ռ�
//A����һ���ṹ��λ������
//λ�β�֧�ֿ�ƽ̨
struct S 
{ 
	char a : 3;  
	char b : 4; 
	char c : 5;  
	char d : 4;
};
int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 12;
	s.c = 3; 
	s.d = 4;
	return 0;
}
*/










/*
struct A
{
	int a : 2; //aֻ��Ҫ2������λ���㹻
	int b : 5; //bֻ��Ҫ5������λ���㹻
	int c : 10;//cֻ��Ҫ10������λ���㹻
	int d : 30;//dֻ��Ҫ30������λ���㹻
//һ����Ҫ47��bit   ����6���ֽ�*8 == 48bit
	//ע�ⶨ��λ������ʱ����������ֲ��ܴ������͵��ֽ���
};
int main()
{
	struct A s;
	printf("%d\n", sizeof(s));//���Ϊ��8���ֽ�
	return 0;
}
*/






/*
//�ṹ�崫��
struct S
{
	int a;
	char c;
	double d;
};

void Init(struct S tmp)
{
	tmp.a = 100;
	tmp.c = 'w';
	tmp.d = 3.14;
}

//��ֵ
void print1(struct S tmp)
{
	printf("%d,%c,%lf\n", tmp.a ,tmp.c  ,tmp.d  );
}
//��ַ
void print2( const struct S* ps)
{
	printf("%d,%c,%lf\n", ps->a, ps->c, ps->d);
}

int main()
{
	struct S s = { 0 };
	Init(&s);
	print1(s);
	print2(&s);
	printf("%d\n", s.a);
	return 0;
}
*/
