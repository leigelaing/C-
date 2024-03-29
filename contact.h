#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


#define MAX 1000

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

enum Option
{
	EXIT,//0
	ADD,//1
	DEL,//2
	SEARCH,//3
	MODIFY,//4
	SHOW,//5
	SORT//6
};


struct Contact
{
	struct PeoInfo data[MAX];//存放一个信息
	int size;//记录当前已经有的元素个数

};
//声明函数
//初始化通讯录函数
void InitContast(struct Contact* ps);
//增加一个信息到通讯录
void AddContast(struct Contact* ps);
//打印通讯录的信息
void ShowContact(const struct Contact* ps);
//删除指定的联系人
void DelContact(struct Contact* ps);
//查找指定名字的人
void SesrchContact(struct Contact* ps);
//修改指定人信息
void ModifyContact(struct Contact* ps);
//排序通讯录内容
void SortContact(struct Contact* ps);