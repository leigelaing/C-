#define  _CRT_SECURE_NO_WARNINGS 1
/*
#include<stdio.h>
#include<stddef.h>
//�ṹ��
struct S
{
	char c;
	int i;
	double d;
};
int main()
{
	//offsetof() ��һ����  ����ṹ��ƫ����;
	printf("%d\n", offsetof(struct S, c));
	printf("%d\n", offsetof(struct S, i));
	printf("%d\n", offsetof(struct S, d));
	return 0;
}



*/









/*
//�ṹ���ڴ����

//����Ĭ�϶�����

//����Ĭ�϶�����λ 4
#pragma pack(4)  
struct S
{
	char c1;//1
	double d;//8
};
#pragma pack() 
//ȡ�����õ�Ĭ�϶�����
int main()
{
	struct S s;
	printf("%d\n", sizeof(s));
	return 0;
}


//S1 S2��ͬ���� ��Ա����˳��Ĳ�ͬ
struct S3
{
	double d;
	char c;
	int i;
};
struct S1
{
	char c1;
	int  a;
	char c2;
};
struct S2
{
	char c1; 
	char c2;
	int  a;
};
int main()
{
	struct S1 s1 = { 0 };
	struct S2 s2 = { 0 };
	struct S3 s3 = { 0 };
	printf("%d\n", sizeof(s1));//12
	printf("%d\n", sizeof(s2));//8
	printf("%d\n", sizeof(s3));//16
	return 0;
 }




 */







/*
//�ṹ��ı����Լ���ʼ��
struct T
{
	double weight;
	short age;
};


struct S
{
	char c;
	struct T st;
	int  a;
	double d;
	char arr[20];
};

int main()
{
	struct S s = { 'c', {55.6,30}, 100, 3014, "would" };//�ṹ������ĳ�ʼ��
	printf("%c,%d,%lf,%s\n", s.c, s.a, s.d, s.arr);
	printf("%lf\n", s.st.weight);
	return 0;
}

*/



/*
typedef struct     //�����ṹ������
{
	int data;
	 Node* next;//��������¶��������֣����λ�ò�����ǰ��

}Node;//���Node�����¶���� ������
int main()
{
	struct Node n1;
	Node n2;
	return 0;
}




typedef struct Node
{
	int data;
	struct Node* next;

}Node;//���Node�����¶���� ������
int main()
{
	struct Node n1;
	Node n2;
	return 0;
}

*/








/*
�ṹ���������
//����ʾ��
struct Node
{
	int data;//����    4���ֽ�
	struct Node n;//�����д�������ܴ�ŷ���һ�����
//n���ֽڴ�С�޷����㣬n����data ��n �޷������С

};



//��ȷʾ��
struct Node
{
	int data;//������    4���ֽ�
	struct Node* next ;//ָ����   4/8���ֽ�     Ӧ�ô����һ������ָ�룬��������һ��

};

int main()
{
	sizeof(struct Node);
	return 0;
}

*/




/*

//�����ṹ������   
struct        //û������
{
	int a;
	char b;
	float c;
}x;   //��Ϊ�����ṹ������û������   ֻ�������λ�ø��ݱ����б�������   ���򴴽���������

struct      
{
	int a;
	char b;
	float c;
}* px;  //px��Ϊ�����ṹ��ָ������

int main()
{
	px = &x;//����������ֲ�ͬ�����ͣ������� int a = 10��   int*p  = &a   �������е�ַ
	return 0;
}









//struct  tab//struct  �ṹ��ؼ���    tab  �ṹ���ǩ
//{
	    //��Ա�б�
//} ;     //�����б�
	

//����һ���ṹ�����ͣ�
//����һ��ѧ�����ͣ����봴��ѧ������������
//����ѧ�������ԡ�������  �绰    �Ա�  ����
struct  stu
{
	char name[20];//����
	char tele[12];//�绰
	char  sex[10];//�Ա�
	int age;//����
}S4,S5,S6;//S4,S5,S6Ϊȫ�ֱ���

struct  stu S3;//ȫ�ֱ���
	int main()
{
		//�����Ľṹ��������ֲ�������
		struct  stu S1;
		struct  stu S2;
	return 0;
}

*/
