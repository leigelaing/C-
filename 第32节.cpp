#include<stdio.h>
void Print(char* str)
{
	printf("%s\n",str);
}
 int main()
 {
	void (*p)(char*) = Print;
    (*p)("�׸���");
    return 0;
 }










/*
int Add(int x,int y)
{
  int z = 0;
  z = x + y;
  return z;
}
int main()
{
    int a = 10;
	int b = 20;
	//%arr��arr���һ��
    printf("%p\n",Add(a,b));//%p��ӡ��ַ���������е�ַ��
	printf("%p\n",Add);
	printf("%p\n",&Add);
	//&�������뺯�������Ǻ����ĵ�ַ
	int (*pa)(int,int) = Add;
	printf("%d\n",(*pa)(2,3));
	return 0;
}
*/





/*
void test(int **p)
{

}
int main()
{
    int* ptr;
	int**pp = &ptr;
	test(&ptr);
	test(pp);
   int* arr[10];//
	test(arr);//ָ������
	return 0;
}
*/










/*
void test1(int* p)
{

}
int main()
{
    int a = 10;
	int* p1 = &a;
    test1(&a);//ok
    test1(p1);//ok
	char ch = 'w';
	char* pc = &ch;
	test2(&ch);//ok
	test2(pc);//ok
	return 0;
}
*/







/*
void test(int arr[3][5])
{}
void test(int arr[][5])//�п���ʡ��
{}
void test(int arr[3][])//�в���ʡ��
{}
void test(int arr[][])//�в���ʡ�ԣ��п���ʡ��
{}
void test3(int* arr)//��ά�����׵�ַΪ��һ��
{}
void test4(int** arr)//����ĵ�ַ���ܷ������ָ����
{}
void test5(int(*arr)[5])//ok
{}
int main()
{
    int arr[3][5] = {0};
	test(arr);//��ά���鴫��
	test1(arr);
    test2(arr);
    test3(arr);
    test4(arr);
    test5(arr);
	return 0;
}
*/





/*
{
    //�ַ�ָ��
	char* ch = 'w';
	char* p = &ch;
	const char* p2 = "abcdef";
	//ָ�����顪���顪���ָ�������
	int* arr[10];//ָ������
	char* ch [5];
	//����ָ��
	//int* p3��//����ָ�롪ָ�����͵�ָ��
	//char* p4��//�ַ�ָ�롪ָ���ַ���
	int arr2[5];//����
	int (*pa)[5] = &arr2; //ȡ������ĵ�ַ��paΪ����ָ��
	return 0;
}
*/