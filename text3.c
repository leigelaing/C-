#define  _CRT_SECURE_NO_WARNINGS 1
/*
#include<stdio.h>

void print(char* str)
{
	pritnf("%s\n", str);
}
int main()
{
	void(*p)(char*) = print;//��print�����ĵ�ַ����p
	(*p)("hellow  word");
	return 0;
}

*/







/*
//����ָ�롪��ָ�������ָ��
//����ָ�롪��ָ������ָ�롪����ź�����ַ��һ��ָ��
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int arr[10] = { 0 };
	int(*p)[10] = &arr;
	//arr
	//printf("%d\n",Add(a,b))
	printf("%d\n", Add(a, b));
	//&������ �� ���������Ǻ����ĵ�ַ
	printf("%p\n",&Add);//�������е�ַ��
	printf("%p\n", Add);
	int(*pa)(int, int) = Add;//pa�Ǻ���ָ��
	printf("%d\n",(*pa)(2,3));
	return 0;
}

*/






/*
//����ָ�봫�� 
void test(int** p)
{
}
int main()
{
	int *ptr;
	int** pp = &ptr;
	test(&ptr);
	test(pp);
	int* arr[10];
	test(arr);//ָ������Ҳ����
	return 0;
}

*/





/*
//һ��ָ�봫��
void test1(int* p)
{}
void test2(char* p)
{}
int main()
{
	int a = 10;
	int* p1 = &a;
	test1(&a);//ok
	test1(p1);//ok
	char ch = 'w';
	char* pc = &ch;
	test2(&ch);
	test2(pc);
	return 0;
}
*/




/*
//��ά���鴫��
void test(int arr[3][5])//ok
{}
void test1(int arr[][5])//ok �п���ʡ�ԣ��в���ʡ��
{}
//void test2(int arr[3][])//NO �в���ʡ��
{}
void test3(int* arr)//NO ����д����
{}
void test4(int**  arr)//NO ����д����
{}
void test5(int(*arr)[5])//OK
{}
int main()
{
	int arr[3][5] = { 0 };
	test(arr);//��ά���鴫��
	test1(arr);
	test2(arr);
	test3(arr);
	test4(arr);
	return 0;
}

*/




/*
int main()
{
	//�ַ�����
	char ch = 'w';
	char* p = &ch;
	const char* p2 = "abcdef";
	//ָ�����顪�����顪�����ָ�������
	int* arr[10];
	//����ָ��
	int* p3; //����ָ�롪��ָ�����͵�ָ��
	char* p4;//�ַ�ָ�롪��ָ���ַ�
	int arr2[5];//����
	int(*pa)[5] = &arr2;//ȡ������ĵ�ַ��pa����һ������ָ��

	return 0;
}
*/