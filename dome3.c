#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
//��������









/*
struct S1
{
	int n;
	int arr[10];
};
struct S2
{
	int n;
	int arr[];//δ֪��С�ġ������������Ա��������Ĵ�С�ǿ��Ե�����
	//��ε�����С
};
struct S
{
	int n;
	int arr[0];//ҲOK
};
int main()
{
	struct S s;
	printf("%d\n", sizeof(s));//��С��4�ֽڣ��ṹ�������������ʱ���������鲻�ڿռ��ڼ���
	//���Ϊ���鿪�ٿռ�
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));//5*sizeof(int) Ϊarr{}���ٵĿռ�
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;//0,1,2,3,4
	}
	//���ӿռ�
	struct S* ptr = realloc(ps, 44);
	if (ptr != NULL)
	{
		ps = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//�ͷ�
	free(ps);
	ps = NULL;
	return 0;
}
*/





/*
//����������
void Test(void)
{ 
	char *str = (char *)malloc(100); 
	strcpy(str, "hello");   
	
	free(str);  //free�ͷ�strָ��Ŀռ�󣬲������str��Ϊ��
	//str = NULL;
	if (str != NULL)
	{
		strcpy(str, "world");   
		printf(str);
	}
}
int main()
{
	Test();
	return 0;
}


*/









/*
void GetMemory(char** p, int num) 
{ 
	*p = (char *)malloc(num); 
}
void Test(void)
{ 
	char *str = NULL; 
	GetMemory(&str, 100);  
	strcpy(str, "hello"); 
	printf(str);
	//�����ͷŶ�̬���ٵ��ڴ棬�����ڴ�й¶
}
int  main()
{
	Test();
	return 0;
}

*/






/*

//�Ƿ������ڴ�
//�������   ����ջ�ռ�ĵ�ַ������
char * GetMemory(void)
{ 
	char p[] = "hello world"; //����û�����ڲ����飬������������
	return p; //p���ص��ǵ�ַ��ԭ���������Ԫ�ص�ַ�������������ˣ���ַ����
} 
void Test(void)
{
	char *str = NULL;
	str = GetMemory(); //�������������Ԫ�ص�ַ���ظ� str  
	printf(str); //str�зŵ���p�ĵ�ַ  ��Ȼ���ַ��������ŵ�ʲô���޷�֪��
	//������Ϊ���ֵ  
}
int main()
{
	Test();
	return 0;
}
//ͬ��������
int* test()
{
	int a = 10;//ջ��
	return &a;
}
int main()
{
	int* p = test();//a�����Ѿ�����
	*p = 20;//�Ƿ�����
	return 0;
}

//�޸ķ���������̬����ַ����
int* test()
{
	static int a = 10;//static ���κ�����Ͳ�һ���ˣ�aת��λ�÷����ھ�̬��  ��������  ����Ҳ�ͽ����
	return &a;
}
int main()
{
	int* p = test();//a�����Ѿ�����
	*p = 20;//�Ƿ�����
	return 0;
}

//����дҲ��OK��  ԭ���ǣ����ص��� �ѿռ�ĵ�ַ
int* test()
{
   int* ptr = malloc(100);//���ڶ����Ŀռ䣬��Ȼptr���٣���ͬʱ����ַ����p  ��Ӱ��
   return ptr;
}
int main()
{
  int* p = test();
    return 0;
}
*/
