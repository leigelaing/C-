#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
enum  weekday
{
	monday, tuseday, wednesday, tuesday, friday, saturday, sunday
};
int main(void)
{
	enum weekday day = sunday;
	printf("%d\n",day);
	return 0;
}





/*
struct student
{
	int  age;
	float score;
	char sex;
};
int  main(void)
{
	struct student st = {80,66.6,'F'};
	struct student *pst = &st; //&st��������st
	pst->age = 88;//�ڶ��ַ�ʽ //pst->age��ת��Ϊ��*pst��.age   
	//pst -> age �ȼ��ڣ�*pst��.age �ȼ��� pst.age   
	st.age = 10;  //��һ�ַ�ʽ
	return 0;
}

*/



/*
//��ֵ�ͳ�ʼ���������ͬʱ�������帳��ֵ
//���������֮����ֻ�ܵ����ĸ���ֵ
struct student
{
	int age;
	float score;
	char sex;
};
int  main(viod)
{
	struct student st1 = {80,66.6,'F'};//��ʼ�������ͬʱ����ֵ
	struct student st2;
	st2.age = 10;
	st2.score = 88;
	st2.sex = 'F';
	printf("%d %f %c\n", st1.age, st1.score, st1.sex);
	printf("%d %f %c\n", st2.age, st2.score, st2.sex);
	return 0;
}

*/





/*
//����ṹ�巽����
struct 
{
	int age;
	float score;
	char sex;
}st3;
int main()
{
	return 0;
}

*/




/*
//����ṹ�巽����
struct student
{
	int age;
	float score;
	char sex;
}st2;   
int main()
{

	return 0;
}
*/




/*
//��ζ���ṹ��
//����һ���ȶ���һ���µĽṹ�壬��û�ж������
struct student
{
	int age;
	float score;
	char sex;
};
int  main()
{
	struct student  st = {80,66.6,'F'};
	return 0;
}

*/





/*
#include<malloc.h>
//��̬�ڴ������Կ纯��ʹ��
void f(int **q)
{
	*q = (int*)malloc(sizeof(int));
}
int main(void)
{
	int* p;
	f(&p);
	return 0;
}
*/



/*
int main(void)
{
	int i = 10;
	int *p = &i;
	int **q = &p;
	int ***r = &q;
	r = &p;
	//��Ϊr��int***���ͣ�rֻ�ܴ��int**���͵ĵ�ַ��
	//��ȷһ�£�int*��һ�����ͣ�int** ����һ��������������
	return 0;
}
*/






/*
//mallocֻ�ܷ��ص�һ���ֽڵĵ�ַ������ȷ������Ҫʹ�ü����ֽڣ������Ҫ��int*��ǿ������ת��Ϊ���͵�ַ��
//���͵�ַΪ4���ֽ�

int main()
{
	int i = 5;//����4���ֽڣ���̬����
	int *p = (int *)malloc(5);//12�з���8���ֽڵĵ�ַ��p����ռ��4���ֽڣ�p��ָ����ڴ�Ҳռ��4���ֽڵĵ�ַ
	//�б�����ռ���ڴ��Ǿ�̬���䣬p��ָ����ڴ�ռ��Ƕ�̬�����
	return 0;
}
*/