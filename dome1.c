#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>














/*
int main()
{
	//���������������ڣ�ֻ������5��int�͵Ŀռ䣬Ȼ��ѭ������Ҫ����10��Ԫ�أ�
	//����ǶԶ�̬���ٵ��ڴ��Խ�����
	int* p = (int*)malloc(5 * sizeof(int));
	if (p == NULL)
	{
		return 0;
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
	}
	free(p);
	p = NULL;
	return 0;
}
*/





//��̬�ڴ����
/*
int main()
{
	//1.malloc�����п��ܷ��ؿ�ָ�룬���Ի���ֶԿ�ָ��Ľ����ò���
	int* p = (int*)malloc(40);
	
	*p = 0;//err

	//��������ֵ������ǣ���һmalloc�������ٿռ�ʧ���ˣ�p�ͻᱻ��ֵΪNULL
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	free(p);
	p = NULL;
	return 0;
}


*/




/*
//realloc  ���õ�����̬�����ڴ�ռ�Ĵ�С
int main()
{
	int* p = (int*)malloc(20);

	if (p == NULL)
	{
		printf("%s\n", streeror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	    //������ʹ��malloc���ٵ�20���ֽڿռ�
		//��������20���ֽڲ����������ǵ�ʹ����
		//ϣ�������ܹ���40���ֽڵĿռ�
		//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�
		
		
		
		//   realloc  ʹ�õ�ע������
		//1.���pָ��Ŀռ�֮�����㹻�Ŀռ����׷�ӣ���ֱ��׷�ӣ�Ȼ�󷵻�p
		//2.���pָ��Ŀռ�֮��û���㹻�Ŀռ����׷�ӣ���reallo������������һ���µ��ڴ�����
		//����һ����������Ŀռ䣬����ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ䣬��󷵻��¿����ڴ�ռ�ĵ�ַ
		//3.���Ե���һ���µı���������realloc�����ķ���ֵ
	}
	int* ptr = realloc(p, INT_MAX);
	if (ptr != NULL)
	{
		p = ptr;
		int i = 0;
		for (i = 5; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d\n", *(p2 + i));
		}
	}
	int i = 0;
	for (i = 5; i < 10; i++)
	{
		 *(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", *(p2 + i));
	}
	//�ͷ��ڴ�
	free(p);
	p = NULL;
	return 0;
}
*/





/*
calloc�⺯��ѧϰ
int main()
{
	//malloc(10*sizeof(int));
	int * p = (int*)calloc(10,sizeof(int));
	if (p == NULL)
	{
		//��ӡ����ԭ���һ����ʽ
		printf("%s\n", streeror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d\n", *(p + i));
		}
		//�ͷſռ�
		//free�����������ͷŶ�̬���ٵĿռ��
		free(p);
		p = NULL;
	return 0;
}
*/





/*
//malloc��free   �⺯����ѧϰ
int main()
{
	//���ڴ�����10�����͵Ŀռ�
	int* p = (int*)malloc(10 * sizeof(int));
	
	if (p == NULL)
	{
		//��ӡ����ԭ���һ����ʽ
		printf("%s\n", streeror(errno));
	}
	else
	{
		//����ʹ�ÿռ�
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d\n", *(p + i));
		}
	}
	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
	//��Ӧ�û�������ϵͳ
	free(p);//free�ͷ�����οռ䵫p�����������ҵ��Ƕοռ�
	p = NULL;//��˽�p��Ϊ��ָ��
	return 0;
}

*/





/*
struct S
{
	char name[20];
	int age;
};
int main()
{
	int n = 0;
	scanf("%d ", &n);
	struct S arr[50];//50��struct S���͵�����
	//30   ����
	//60�����˷�
	struct S arr[n];//���鲻��Ϊ����
	return 0;
	//C���Կ��Դ����䳤���顪C99��׼������������  ��һ���޷��ռ�ʹ��
	//gcc������ ֧��C99��׼
	//


}
*/
