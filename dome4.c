#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<assert.h>
/*
//strcat�⺯��ѧϰ
//strcat ����\0��ʼ׷�ӣ�׷�ӵ���һ��\0��ֹͣ
//NULL ��ָ��  Ϊ   0
char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;//���Ҫ���ؽ�����������иı䣬�ȱ����ʼ��ַ
	assert(dest != NULL);
	assert(src);
	//1.�ҵ�Ŀ���ַ�����\0
	while (*dest != '\0')
	{
		dest++;
	}
	//׷���ַ���
	while (*dest++ = *src++)  
		{
		   ;
		 }
	    return ret;
}


int  main()
{
	//����д��arr1�ռ��Ѿ����̶�����������������  
	
	char arr1[] = "hellow";//err
	//��ȷ��д���� 
	char arr1[60] = "hellow";//������������С
	//����д��ҲOK����\0��ʼ׷��  
	char arr1[] = "hellow\0xxxxxxxxxxxxxxx";

	char arr2[] = "word";
	strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
*/





/*
//strcpy�⺯��ѧϰ
//  ע��ɲ����ǳ����ַ���   �ĸ��������޸�
char* my_strcpy(char* dest, const char* src)
{
	
	assert(dest != NULL);
	assert(src != NULL);
	//\0   ASCIIֵΪ 0 
	//whileѭ���ĵڶ���д��
	//while(*dest++ = *src++)  //*dest++ = *src++  �Ƚ�������++    ����\0������ȥ�Ժ� ������Ϊ0ֹͣѭ��
	//{
    //	��
    // }
	
	char* ret = dest; // ������ʼλ�õ��ڴ�ռ䣬��Ϊ��ʼλ����ѭ���в��ϱ仯
	while (*src != '\0')   //���ַ���������ȥ
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src; //  ���濽����ɺ��ٽ�\0 ������ȥ����ʱ*src ָ��ľ���\0;
	return ret;//������ʼλ�ã�����������ʲô����
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "bit";
	strcpy(arr1, arr2);//arr2�е����ݿ�����arr1��  ������arr2�е�����ȫ��������arr1�а���\0
	my_strcpy(arr1, arr2);
	pritnf("%s\n", arr1);//%s  �ַ���
	return 0;
}

*/










/*
//strlen  ������ѧϰ
//�Լ�ʵ��һ�����ַ�������1.�������ķ�����2.�ݹ鷽�� ����������ʱ�������ַ������ȣ� 3.ָ��-ָ�룩




//1.�������ķ���
int my_strlen(const char* str)
{
	int  count = 0;
	assert(str != NULL);
	while (*str != '\0')//while(*str)���Ҳ���ԣ���*str == 0ʱ��Ϊ�ٲ���ѭ��
	{
		count++;
		str++;
	}
	    return count;
}

int main()
{
	int len = my_strlen("abcdef");
	//����ʾ��
	//char arr[]  = {'a','b','c','d','e','f'};
	//int len = my_strlen(arr);


	//���hehe   ����   haha
	//Ϊʲô��hehe���  ��Ϊ �⺯����strlen  ��������Ϊsize_t   (size_t ʵ�ʶ�Ӧ������Ϊunsigned int)
	//���Լ�д�ķ���ֵΪint��һ�㲻һ�������ؽ����Ȼ��һ��
	if (strlen("abc") - strlen("abcdef") > 0)
		//      3     -         6       ==    -3    ��Ϊ-3�������޷��������������Է���ֵ�Ǵ���0����
	{
		printf("hehe\n");
	}

	else
	{
		printf("haha\n");
	}



	printf("%d\n", len);
}

*/

