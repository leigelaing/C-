#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>










/*
struct stu
{
	int num;
	char name[10];
	int age;
};
void fun(struct stu* p)
{
	printf("%s\n", (*p).name);//%s  �ַ���  ���ʹ�ӡ
	return;
}
int main()
{
	struct stu students[3] = { {9801,"zhang",20}, {9802,"wang",19}, {9803,"zhao",18} };
	fun(students + 1);//students + 1��˼����Ԫ�ص�ַ��1 ָ��ڶ���Ԫ��  
	//Ȼ����ú�����ӡ���ڶ���Ԫ�ص�ֵ wang
	
	return 0;
}

*/






/*
struct S
{
	int a;
	int b;
};
int   main()
{
	struct S a, *p = &a;
	//���Ը�дΪ  
	//struct S  a   ��������һ���ṹ�����   
	//struct S *p = &a��������һ���ṹ��ָ��
	a.a = 99;
	//a.a   ʹ�ñ��������˽ṹ��ĳ�Ա����
	printf("%d\n", *p.a);
	//pritnf   ����Ӧ����ʲô�����a��ֵ      a.a     *p.a      p->a      (*p).a
    //a.a  OK  
	//  *  p.a    ע��������Ľ����    �ȵ���  ��* ���

	return 0;
}

*/





/*
int main()
{
	unsigned long  pulArray[] = { 6, 7, 8, 9, 10 };
	unsigned long *pulPtr;
	pulPtr = pulArray;//������Ԫ�ص�ַ
	*(pulPtr + 3) += 3;//  *(pulPtr + 3)= *(pulPtr + 3) +  3
	//pulPtr + 3  ����ָ��Ԫ��9�ĵ�ַ��Ȼ������ò����õ�Ԫ��9   �ٸ�Ԫ��9 �� 3   ��Ϊ  12
	printf("%d %d", *pulPtr, *(pulPtr + 3));
	//*pulPtr�����ò�����ָ�����Ԫ�� 6      
	return 0;
}
*/