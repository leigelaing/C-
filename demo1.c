#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
//��������ݵĴ洢���������δ����
int  main()
{
	int n = 9;
	//0  00000000  00000000000000000001001��������
	float* pFloat = (float*)&n;
	printf("n��ֵΪ��%d\n", n);
	pritnf("*Pfloat��ֵΪ %f\n", *pFloat);
	//(-1)^0*0.00000000000000000000001001*2^-126
	*pFloat = 9.0;
	printf("num��ֵΪ��%d\n", n);
	pritnf("*Pfloat��ֵΪ %f\n", *pFloat);

	float f = 5.5;
	//5.5;
	//101.1


	return 0;
}
*/



/*
//������벻�ã�û�п���
int main()
{
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d ", strlen(a));
	return 0;
}
*/




/*
int main()
{
	int i = -20;
	unsigned int j = 10;
	printf("%d\n", i + j);
	//���ղ������ʽ���м��㣬����ʽ�����з��ŵ�����
	//�ڼ�����洢�����ݲ�����д洢����ʵ��������Ϊԭ�룬����������Ϊ���룬
	//Ҫ��ת��Ϊԭ��
	return 0;
}
*/






/*char���͵ķ�Ϊ
signed char
��unsiged char
һ���ֽ�   8Ϊbit
�з���char�ķ�ΧΪ  -128����127   
�޷���char�ķ�ΧΪ   0����255
*/








/*
//дһ�δ���ȷ�ϵ�ǰ�������ֽ�����ʲô
//�ֽ���  ��˴洢��С�˴洢
//������
int  check_sys()
{
   int a = 1;
   return * (char*) &a;
   //ȡ��a�ĵ�ַ   ��a�ĵ�ַǿ������ת��Ϊchar*���ͣ���ȡһ���ֽڣ�  �����ò���  ��a�ĵ�ַ�����ͷų���
   }


//����һ
int  check_sys()
{
	int a = 1;
	char* p = (char*)&a;//ָ������ȷ����ȡ�ֽڳ���  char����ȷ����ȡһ���ֽڳ���
	if (*p == 1)
		return 1;
	else
		return 0;
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		pritnf("С��");
	}
	else
	{
		printf("���");
	}
	return 0;
}
*/
