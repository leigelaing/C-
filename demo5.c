#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() 
{
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
	int *p; 
	p = a[0]; 
	printf("%d", p[0]);   
	return 0; }









/*
int main()
{
	int a[4] = { 1, 2, 3, 4 }; 
	int *ptr1 = (int *)(&a + 1);//ptr1ָ���������
	int *ptr2 = (int *)((int)a + 1); //prt2 �����ǵ�ַ��Ϊ���ͣ���1  Ȼ���ٱ�Ϊ��ַ����ʵ�����Ϊָ�������ƶ���һ���ֽڣ�ע����һ���ֽڣ�
	printf("%x,%x", ptr1[-1], *ptr2);
	//prt1[-1] == *(prt +(-1)) ==  *(prt -1)
	return 0; 
}
*/





/*
//����  ����ָ��+ -����
//�Ӽ�����ȡ����ָ������
struct Test
{
	int Num;   
	char *pcName;
	short sDate;
	char cha[2];
	short sBa[4]; 
}*p;
//����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣� 
//��֪�ṹ��Test���ͱ�����С��20�ֽ�
int main()
{
	p = (struct Test*) 0x100000;
	printf("%p\n", p + 0x1);// 0x1 == 1,��1����һ���ṹ��  ��0x100000 + 20������ת��Ϊ16���Ƽ���
	printf("%p\n", (unsigned long)p + 0x1);//����ַת��Ϊ���֣�ֱ�Ӽ�1 ��ת��Ϊ16���Ƽ���
	printf("%p\n", (unsigned int*)p + 0x1);//�޷��ŵ�����ָ��  ��1����4���ֽ�
    //һ���޷�������4���ֽ�
	return 0;
}
*/




/*
int main() 
{
	int a[5] = { 1, 2, 3, 4, 5 }; 
	int *ptr = (int *)(&a + 1);//(&a + 1)����ָ������  ���ܴ��������Ҫǿ������ת��
	//ȡ�����1�������������� 
	printf("%d,%d\n", *(a + 1), *(ptr - 1));//ptr - 1 �Ѿ�ǿ������ת�� ��1 ����������4���ֽ�
	return 0; 
}
*/