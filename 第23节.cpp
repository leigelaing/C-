#include<stdio.h>
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
	int ret = 0;
	ret = Add(a,b);
	return 0;
}

//ѹջ








/*
typedef struct stu
{
	//��Ա����
    char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu;  
void print1(stu tmp)
{
 printf("name: %s\n",tmp.name);
 printf(" age: %d\n",tmp.age);
 printf("tele: %s\n",tmp.tele );
 printf(" sex: %s\n",tmp.sex );
}
 void print2(stu* pa)
 {
  printf("name: %s\n",pa->name);
  printf(" age: %d\n",pa->age);
  printf("tele: %s\n",pa->tele );
  printf(" sex: %s\n",pa->sex );
 }
  
int main()
{
    stu s = {"����",40,"1561341658","��"};
	//��ӡ�ṹ������
	//print1��print2�ĸ����� print1�˷ѿռ䣬   
	print1(s);
	print2(&s);
	return 0;
}
*/








/*struct S
{
 int a;
 char c;
 char arr[20];
 double d;
};
struct T
{
 char ch[10];
 struct S s;
 char *pc;
};
int main()
{
	char arr[] = "hello bit\n";
	struct T t = {"hehe",{100,'w',"hello world",3.14},arr};   
	printf("%s\n",t.ch);
    printf("%s\n",t.s.arr);
	printf("%lf\n",t.s.d);
    printf("%s\n",t.pc);
	return 0;
}
*/









/*
typedef struct stu
{
	//��Ա����
    char name[20];
	short age;
	char tele[12];
	char sex[5];
}stu;      //struct ������Ϊ stu
int main()
{
    struct stu s1 = {"����",20,"125226236213","��"};//s�ֲ�������
	stu s2 = {"����",30,"1646346464646","Ů"};
	return 0;
}
*/











/*
//struct  �ṹ��ؼ��֣�  stu���ṹ���ǩ   struct stu���ṹ������(��ռ���ڴ�ռ�)
struct stu
{
	//��Ա����
    char name[20];
	short age;
	char tele[12];
	char sex[5];
}s1,s2,s3;//s1,s2,s3��ȫ�ֱ���
int main()
{
    struct stu s;//s�ֲ�������
	
	return 0;
}
*/