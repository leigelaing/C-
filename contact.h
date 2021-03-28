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
	struct PeoInfo data[MAX];//���һ����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���

};
//��������
//��ʼ��ͨѶ¼����
void InitContast(struct Contact* ps);
//����һ����Ϣ��ͨѶ¼
void AddContast(struct Contact* ps);
//��ӡͨѶ¼����Ϣ
void ShowContact(const struct Contact* ps);
//ɾ��ָ������ϵ��
void DelContact(struct Contact* ps);
//����ָ�����ֵ���
void SesrchContact(struct Contact* ps);
//�޸�ָ������Ϣ
void ModifyContact(struct Contact* ps);
//����ͨѶ¼����
void SortContact(struct Contact* ps);