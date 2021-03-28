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
		printf("通讯录已满，无法增加！\n");
	}
	else
	{
		printf("请输入名字>:");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄>:");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别>:");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话>:");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址>:");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功！\n");
	}
}
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("没货打印你妈的憋！\n");
	}
	else
	{
		int i = 0;
		//标题
		printf("%-20s\t %-4s\t %-5s\t %-12s\t %-20s\n", "名字", "年龄", "性别", "电话", "地址");
		//左对齐前面加负号
		for (i = 0; i < ps->size; i++)
		{
			//打印数据
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
			return i;//找到了
		}
	}
	return -1;//找不到
}
void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除人的姓名:>");
	scanf("%s", name);
	//1.查找要删除人的位置
	//找到了返回下标， 找不到  返回-1
   int pos = FindName(ps,name);
	//2.删除
	if (pos == ps->size)
	{
		printf("没货，删你先人的板板！\n");
	}
	else
	{
		//删除数据:删除的方法是将后面的每个元素都往前移动一个
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功！\n");
	}
}
void SesrchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输输入查找人的姓名，你是闲的蛋疼！\n");
	scanf("%s", name);
	int pos = FindName(ps, name);
	if (pos == -1)
	{
		printf("胡查找你妹的批！\n");
	}
	else
	{
		printf("%-20s\t %-4s\t %-5s\t %-12s\t %-20s\n", "名字", "年龄", "性别", "电话", "地址");
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
	printf("请输入修改人的姓名，你是闲的蛋疼！\n");
	scanf("%s", name);
	int pos = FindName(ps, name);
	if (pos == -1)
	{
		printf("没有改你妈！\n");
	}
	else
	{
		printf("请输入名字>:");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄>:");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别>:");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话>:");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址>:");
		scanf("%s", ps->data[pos].addr);
		printf("修改成功！\n");
	}
}
void SortContact(struct Contact* ps)
{
	printf("自己去排序！\n");
	return 0;
}