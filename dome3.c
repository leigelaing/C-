#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
/*
//memset�����ڴ�����
int main()
{
	char arr[10] = "";
	memset(arr, '#', 10);//10�����ֽ�
	return 0;
}
*/




/*
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 1, 2, 3, 4, 5 };
	int ret = memcmp(arr1, arr2, 8);//8������ֽ�
	printf("%d\n", ret);
	return 0;
}

*/












/*
//memmove������ģ��ʵ��
//   dest < src ����ֻ��ǰ->�� ��
//dest > src && dest <src+count  ����ֻ�ܺ�->ǰ ��
//dest > src+count  ǰ����
void* my_memmove(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	//������
	if (dest < src || dest>(char*)src + count)
	{
		//ǰ->��
	}
	else
	{
		//��->ǰ
	}





	
	
	//����һ
	/*
	if (dest < src)
	{
		//ǰ->��
		while (count--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		//�� -> ǰ
		*((char*)dest + count) = *((char*)src + count);//ע�⽫int4�ֽڱ�Ϊ1�ֽڣ�Ȼ��count������ -- 
		//Ȼ�� �����պ�ָ����Ҫ���Ǹ��ֽ�
	}
	
	return ret;
}
*/








/*
struct S
{
	char name[20];
	int age;
};
//ģ��ʵ��memcpy
void* my_memcpy(void* dest, const void* src, size_t num)//size_t C�����й涨Ϊ�޷�������
{
	//ʵ��ԭ����ÿ��ָ��ǿ������ת��Ϊchar* ����  Ȼ��ÿһ���ֽڶ����е��ֽڿ���
	
	void* ret = dest;//��¼һ�³�ʼ��ַλ��
	assert(dest != NULL);//�жϲ��ǿ�ָ��
	assert(src != NULL);
	while (num--)//����һ�������ֽڣ�ÿ�ο���һ���ֽڣ�Ȼ��ֱ��������num==0Ϊֹ��whileѭ������0ʱΪ�٣����ٿ���
	{
		//void* ���͵�ָ�벻�ܽ��мӼ����㣬������ǿ��������ת��Ϊchar* ��++ �����У���ǿ������ת��
		
		*(char*)dest = *(char*)src; //��ǿ������ת����Ȼ��Ȼ���ٽ����ò�����Ok��
		++(char*)dest;
		++(char*)src;
	}
	    return ret;
		
}
//��������Ҫʵ�ֵĵ��ǽ� 12345 ������ 34567 ��
//ʵ����û�а취ʵ�ֵ�memcpy�������ص�����
//C���Ա�׼��
//memcpy ֻҪ���� ���ص����ڴ濽���Ϳ���
//memmove �����ظ��ڴ濽��

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[10] = { 0 };
	//arr1�е����ֿ�����arr2��
	memcpy(arr2,arr1,sizeof(arr1));
	return 0;
}

*/





/*
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	my_memcpy(arr+2, arr,20);//
	//memmove();//�����ڴ��ص������

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/



/*
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[50] = { 0 };
	int i = 0;
	my_memcpy(arr2, arr1, sizeof(arr1));
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}



*/





/*
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 0 };
	struct S arr3[] = { { "����",20 }, { "����",30 } };
	struct S arr4[] = { 0 };
	memcpy(arr4, arr3, sizeof(arr3));//arr3������arr4 ��
	memcpy(arr2, arr1, sizeof(arr1));//arr1������arr2 ��
	strcpy(arr2, arr1);
	return 0;
}
*/






/*
//strlen������ʵ��
int main()
{
	int len1 = strlen("abcdef"); //�ַ�������\0��  strlen ��������\0��ֹͣ������\0����������
	char arr[] = { 'a','b','c','d','e','f'};//�����еĵ����ַ���û��\0  strlen �����޷�����û���Ϊ���ֵ
	int len2 = strlen(arr);
	printf("%d\n", len1);
	printf("%d\n", len2);
	return 0;
}
*/