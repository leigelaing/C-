#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<windows.h>

//����������










/*
//������
char*  GetMemory(char* p)
{
   p = (char *)malloc(100);
   return p;
}
void Test(void)
{
char *str = NULL;
  str = GetMemory(&str);
strcpy(str, "hello world");
printf(str);


free(str);
str = NULL;
}
int main()
{
Test();
return 0;
}
*/




/*
   ����һ
void GetMemory(char **p) 
{
	*p = (char *)malloc(100); 
} 
void Test(void) 
{ 
	char *str = NULL; 
	GetMemory(&str);
	strcpy(str, "hello world");  
	printf(str);


	free(str);
	str = NULL;
}
int main()
{
	Test();
	return 0;
}
*/

/*
//����ǳ������
//�����ڴ�й¶������
//��Ϊstr��ֵ���ݵ���ʽ��p
//p��GetMemory�������βΣ�ֻ�ں����ڲ���Ч����GetMemory��������֮�󣬶�̬���ٵĿռ���δ�ͷţ������޷��ҵ�����������ڴ�й¶
void GetMemory(char *p)//p�д�ŵ���str��ֵ  strΪNULL  ����p��ΪNULL
{
	p = (char *)malloc(100);//��malloc���ٵĿռ���׵�ַ����p ��ʱp�д���׵�ַ��
}
void Test(void)
{ 
	char *str = NULL;  
	GetMemory(str);  //�������н�����p�������٣�ʲô��ƨ��û��
	strcpy(str, "hello world");
	//str����Ϊ��ָ�룬��hello world�����ڿ�ָ����
	//��ָ�벻����Ч��ַ����ָ����Ч�Ŀռ�
	//��ʱ�����������Ϊhello world �Ƿ����ʿռ���
	printf(str);
}
int main()
{
	Test();

	//����
	char* str = "abcdef";
	printf("%s\n", str);
	
	//��������д����OK
	printf(str);
	printf("abcdef");

	return 0;
}

*/









/*
int main()
{
	//1.��NULLָ��Ľ����ò���
	int* p = malloc(40);
	//��ѡ��p��������ж�
	*p = 10;//malloc���ٿռ�ʧ�ܣ���NULLָ������ò���
	
	//2.�Զ�̬���ٿռ��Խ�����
	int* p = (int*)malloc(40);//10��bit
	if (p == NULL)
	{
		return 0;
	}
	//Խ�����
	int i = 0;
	for (i = 0; i <= 10; i++)
	{
		*(p + i) = i;
	}
	free(p);
	p = NULL;


	//3�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
	int a = 10;
	int *p = &a;
	//�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
	free(p);
	p = NULL;


	//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return 0;
	}
	int i = 0;
	for (i = 0; i < 10;i++)
	{
		*p++ = i;//����д���룬p�Ѿ������仯����ָ��տ�ʼ�ĵ�ַ�����ʹ��free ���ͷŵ����Ƕοռ䣬
		//��ʱȷ�ϳ�������
	}
	//���տռ�
	free(p);
	p = NULL;



	//5.��ͬһ���ڴ�ռ�Ķ���ͷţ�
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		return 0;
	}
	//ʹ�á���
	//�ͷ�
	free(p);
	p = NULL;
	//����
	free(p);





	//6.��̬�����ڴ������ͷţ��ڴ�й¶��
	while (1)
	{
		malloc(1);
		Sleep(1000);
	}


	return 0;
 }
 */




/*
int main()
{
	int* p = (int*)malooc(40);
	if (p == NULL)
	{
		return 0;
	}
	//ʹ��
	int* p2 = realloc(p, 80);
	if (p2 != NULL)
	{
		p = p2;
	}

	//realloc����ʵ�� malloc����
	//realloc����ֱ�ӿ��ٿռ�
	int* p = realloc(NULL, 40);//�ȼ���malloc(40);




	return 0;
}

*/













/*
int main()
{
	//a����ջ�����ٵĿռ䣬freeֻ�ܸ��������ٵĿռ�����ͷ�  ���Դ������
	int a = 10;
	int*p = &a;
	*p = 20;
	free(p);
	p = NULL;
	return 0;
}
*/