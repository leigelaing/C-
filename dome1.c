#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>










/*
//strstr �⺯��ѧϰ���������ַ���
//NULL������ָ��   NUL/Nul  ����\0   
//strstr����  �Ǵӿ�ʼ���Ǹ���ַ��ʼһ�������ӡ  ���� abcdefign ����def   ����ӡ��������defign  
//abcdefign ����defh   ������Ҳ�����
//abcdefabcdef   ��������·��ص���defabcdef   �Ǵӵ�һ����ʼ����

//ģ��ʵ��
char*  my_strstr(const char* p1,const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char* s1 = NULL;
	char* s2 = NULL;
	char* cur = (char*)p1;//��const ���ε�ָ�븳�����ܱ�����ָ����о��� ������Ҫǿ������ת��һ��
	if (*p2 == '\0')
	{
		return (char*)p1;//�� p2Ϊ���ַ���ʱֱ�ӷ���p1
		
	}
	while (*cur) //cur�ŵ���p1����Ԫ�ص�ַ�����Ϊ0 �ǾͲ��ý���ѭ���ˣ�ֱ�ӷ����Ҳ���
	{
		s1 = cur; //p1����Ԫ�ص�ַ��s1
		s2 = (char*)p2;   //p2����Ԫ�ص�ַ��s2
		//��ʼ�Ա�
		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
			//��Ԫ�ص�ַ���ܵ���0  ������������Ҫ���
		{
			s1++;
			s2++;
		}
		//�Աȵ�s2ָ��\0  
		if (*s2 == '\0')
		{
			return cur;//�ҵ��Ӵ�
		}
		if (*s1 == '\0')
		{
		return cur;//�ҵ��Ӵ�
		}
		     cur++; //ѭ��������һ���������㣬���¿�ʼ
	}
	       return NULL;//�Ҳ����Ӵ�
}



int main()
{
	char* p1 = "abcdefjjjjj";
	char* p2 = "def";
	char* ret = my_strstr(p1, p2);//��p1����p2�ַ��� 
	if (ret == NULL)
	{
		printf("�Ӵ�������\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}

*/





/*
int main()
{
    //strncmp _�ַ����Ƚ�
	const char* p1 = "abcdef";
	const char* p2 = "abcqwer";
	int ret1 = strcmp(p1, p2);
	int ret2 = strncmp(p1, p2,3);//p2��ǰ4���ַ�����p1���бȽ�
	printf("%d\n",ret1);
	printf("%d\n", ret2);
	return 0;
}
*/





/*
//strncat�⺯����ѧϰ 
//׷�ӹ��� ���������  ׷�ӵĸ��� ����arr2���������arr2���ۺ�����ʲô���ֻ׷�����arr2�е�����Ȼ������\0��OK�� 
//С��arr2  ����arr2�����������һ�£�׷������Ҫʵ����Ҫ���������\0,OK��    
int main()
{
	char arr1[30] = "hellow\0xxxxxxxxxx";
	char arr2[] = "word";
	strncat(arr1, arr2, 8);  //��arr2�е�����׷����arr1�ĺ��棬һ��׷��arr2��8���ַ�
	printf("%s\n", arr1);
	return 0;
}

*/







/*

//strcpy�⺯��ѧϰ  �� ��arr2�е����ݿ�����arr1�У������Ǹ��ǡ�����������������ڣ��ռ䲻��Ҳ������ɿ���
int main()
{
	char arr1[5] = "abc";//arr1�ռ�ֻ��3���ֽ�
	char arr2[] = "hellow  bit";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
*/


/*
//strncpy�⺯����ѧϰ���п�ģ��ʵ�֣�
int main()
{
	char arr1[10] = "abc";//arr1�ռ�ֻ��3���ֽ�
	char arr2[] = "hellow  bit";
	strncpy(arr1, arr2,4);//��arr2��ǰ4���ַ�������arr1��
	//���������arr1�е��ַ������ã�û��\0  
	char arr1[10] = "abc";//
	char arr2[] = " bit";
	strncpy(arr1, arr2, 4);
	//��arr2��ǰ4���ַ�������arr1�У���ʱע��arr2��ֻ��3���ַ���Ҫ����4�����������\0����Ҫ��
	printf("%s\n", arr1);
	return 0;
}
*/
