#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<assert.h>










//strcmp�⺯��ѧϰ
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	//�Ƚ�
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;//���
		}
		str1++;
		str2++;
	}
	if (*str1 > *str2)
		return 1;//����
	else
		return -1;//С��
}
int main()
{
	char* p1 = "abcdef";
	char* p2 = "abcdef";
	int ret = my_strcmp(p1, p2);
	printf("ret = %d\n", ret);
	return 0;
}











/*
int main()
{
	char* p1 = "abcdef";//p1��ŵ���a�ĵ�ַ
	char* p2 = "sqwer";//p2��ŵ���s�ĵ�ַ
	
	//if ("abcdef" == "sqwer")//���������Ƚ������ַ�����ʵ�ʱȽϵ���a��s�ĵ�ַ����Զ�������
	int ret = strcmp(p1, p2);
	//strcmp ��αȽ��ַ����Ƿ���ȣ�ԭ���������ַ�����һ��һ�Խ��бȽϣ��Ƚϵ��Ƕ�Ӧ�ַ���ASCIIֵ��
	//���һ����ͬ�����Ƚ���һ�ԣ���һ��ASCIIֵ���ڵڶ������ش���0������ ��һ��ASCIIֵС�ڵڶ�������С��0������ 
	//������\0����ǰ��Ķ���ȣ�����0 ;
	if (strcmp(p1, p2) > 0)
	{
		pritnf("p1 >p2\n ");
	}
	else if (strcmp(p1, p2) == 0)
	{
		pritnf("p1 == p2\n ");
	}
	else if (strcmp(p1, p2) < 0)
	{
		pritnf("p1 < p2\n ");
	}
	return 0;
}
*/
