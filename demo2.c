#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

/*
void menu()
{
	printf("****************************************");
	printf("*****  1.add          2.sub    *********");
	printf("*****  3.mul          4.div    *********");
	printf("*****          0.exit          *********");
}
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int Sub(int x, int y)
{
	int z = 0;
	z = x - y;
	return z;
}
int Mul(int x, int y)
{
	int z = 0;
	z = x * y;
	return z;
}
int Div(int x, int y)
{
	int z = 0;
	z = x / y;
	return z;
}
void Calc(int(*pf)(int, int))
{
	int x = 0;
	int y = 0;
	pritnf("����������������>:");
	scanf("%d  %d ", &x, &y);
	printf("%d\n", pf(x, y));
}
int main()
{
	int input = 0;
	do
	{
		menu;
		printf("��ѡ��>��");
		scanf("%d ", &input);
		switch (input)
		{
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("�˳�\n");
		default:
			printf("�������\n");
	} while (input);
}
*/









/*
������
int  main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	//pFArr ����ָ������
	int(*pFArr[5])(int, int) = {0,Add,Sub,Mul,Div};
	do
	{
		menu;
		printf("��ѡ��>��");
		scanf("%d ", &input);
		if (input >= 1 && input <= 4)
		{
			pritnf("����������������>:");
			scanf("%d  %d ", &x, &y);
		int ret = pFArr[input](x,y);
		printf("%d\n",ret);
		}
		else if (input == 0)
		{
			pritnf("�˳�\n");
		}
		else
		{
			printf("ѡ�����\n");
		}
	} while (input);
	return 0;
}

*/






/*
//�����ķ���һ
int  main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	do{
		menu;
		printf("��ѡ��>��");
		scanf("%d ", &input);
		switch (input)
		{
		case 1:
			pritnf("����������������>:");
			scanf("%d  %d ", &x, &y);
			printf("%d\n", Add(x, y));
			break;
		case 2:
			pritnf("����������������>:");
			scanf("%d  %d ", &x, &y);
			printf("%d\n", Sub(x, y));
			break;
		case 3:
			pritnf("����������������>:");
			scanf("%d  %d ", &x, &y);
			printf("%d\n", Mul(x, y));
			break;
		case 4:
			pritnf("����������������>:");
			scanf("%d  %d ", &x, &y);
			printf("%d\n", Div(x, y));
			break;
		case 0:
			printf("�˳�\n");
		default:
			printf("�������\n");
		}

	   } while (input);
}
*/











/*
int  main()
{
	char* my_strcpy(char* dest, const char*src);
	//1.дһ������ָ��pf���ܹ�ָ��my_strcpy
	char* (*pf)(char*, const char*);
	//ע���������ָ�������ԭ�����Ǵ��ָ��ģ�����Ҫ�ö���ָ��ĸ��
	//2.дһ������ָ������pfArr���ܹ����4��my_strcpy
	char* (*pa[4])(char*, const char*);

		return 0;
}

*/





/*
//������ʵ��
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int Sub(int x, int y)
{
	int z = 0;
	z = x - y;
	return z;
}
int Mul(int x, int y)
{
	int z = 0;
	z = x * y;
	return z;
}
int Div(int x, int y)
{
	int z = 0;
	z = x / y;
	return z;
}
int  main()
{
	//ָ������
	int* arr[5];   //int(*pa)[5] //����ָ��    *��[] ��������[]  ���
	int(*pa)(int, int) = Add;
	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ��������ָ�������
	int(*    parr[4]    )(int, int) = {Add,Sub,Mul,Div};  //����ָ�������
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d\n", parr[i](2, 3));
	}
	return 0;
}
*/



/*
int main()
{
	int a = 10;
	int b = 20;
	int(*pa)(int, int) = Add;
	printf("%d\n", (pa)(2, 3));
	printf("%d\n", Add (2, 3));
	printf("%d\n", (*pa)(2, 3));
	//printf("%d\n", *pa(2, 3));//����д���Ǵ�ģ���Ϊ��д��ʽ�Ѿ����Ǻ���ָ������
	printf("%d\n", (**pa)(2, 3));
	printf("%d\n", (***pa)(2, 3));
	return 0;
}

*/










/*
int main()
{
	/*
	signal ��һ����������
	signal�����Ĳ�����2������һ����int �ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
	signal �����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int ����ֵ��void
	



	void(*   signal(int, void(*)(int)) )(int);
	pfun_t signal(int, pfun_t);
	typedef void(*pfun_t)(int);
	typedef  unsigned int uint;
	return 0;
}
*/






//һ���ǳ��������Ĵ���
/*

(* (void(*)()) 0)();
void(*)()  ��������ָ������ 
����������˼�ǣ�
��0ǿ������ת��Ϊ��void(*)()����ָ�����ͣ�  0����һ�������ĵ�ַ������0 ��ַ���ĸú���

void (*signal (int,   void(*)(int)  ))(int);

void��*              ����int����������ָ��
void��*����int����������ָ������



*/


/*
void print(char* str)
{
	printf("%s\n", str);
}
int main()
{
	int a;
	int* pa;
	void(*p)(char*) = print;  //p�д��print�����ĵ�ַ ��������ָ��
	(*p)("hello  bit");
	return 0;
}
*/
