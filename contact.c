#define  _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void InitContast(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}
void AddContast(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("ͨѶ¼�������޷����ӣ�\n");
	}
	else
	{
		printf("����������>:");
		scanf("%s", ps->data[ps->size].name);
		printf("����������>:");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�>:");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰>:");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ>:");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ���\n");
	}
}
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("û����ӡ����ı\n");
	}
	else
	{
		int i = 0;
		//����
		printf("%-20s\t %-4s\t %-5s\t %-12s\t %-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		//�����ǰ��Ӹ���
		for (i = 0; i < ps->size; i++)
		{
			//��ӡ����
			printf("%-20s\t %-4s\t %-5s\t %-12s\t %-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr
				);
		}
	}
}
static int FindName(const struct Contact* ps, char* name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;//�ҵ���
		}
	}
	return -1;//�Ҳ���
}
void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	//1.����Ҫɾ���˵�λ��
	//�ҵ��˷����±꣬ �Ҳ���  ����-1
   int pos = FindName(ps,name);
	//2.ɾ��
	if (pos == ps->size)
	{
		printf("û����ɾ�����˵İ�壡\n");
	}
	else
	{
		//ɾ������:ɾ���ķ����ǽ������ÿ��Ԫ�ض���ǰ�ƶ�һ��
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ���\n");
	}
}
void SesrchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������������˵������������еĵ��ۣ�\n");
	scanf("%s", name);
	int pos = FindName(ps, name);
	if (pos == -1)
	{
		printf("���������õ�����\n");
	}
	else
	{
		printf("%-20s\t %-4s\t %-5s\t %-12s\t %-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t %-4s\t %-5s\t %-12s\t %-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr
			);
	}
}
void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("�������޸��˵������������еĵ��ۣ�\n");
	scanf("%s", name);
	int pos = FindName(ps, name);
	if (pos == -1)
	{
		printf("û�и����裡\n");
	}
	else
	{
		printf("����������>:");
		scanf("%s", ps->data[pos].name);
		printf("����������>:");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�>:");
		scanf("%s", ps->data[pos].sex);
		printf("������绰>:");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ>:");
		scanf("%s", ps->data[pos].addr);
		printf("�޸ĳɹ���\n");
	}
}
void SortContact(struct Contact* ps)
{
	printf("�Լ�ȥ����\n");
	return 0;
}