#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
struct student
{
	int num;
	char name[32];
	float  score;

}stu;//stu �нṹ�������









/*
//��ӡ����
//   *
//  ***
// *****
//  ***
//   *
int main()
{
	int line = 0;
	scanf("%d", &line);
	//��ӡ�ϰ벿��
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		    printf("\n");
	}
	//��ӡ�°벿��
	for (i = 0; i < line-1; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j <=i ; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j <2*(line-1-i)-1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/




/*
//ˮ�ɻ��������0��100000֮���ˮ�ɻ���
//ˮ�ɻ���ָ������λ��


//��������������   

int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//�ж�i�Ƿ�Ϊˮ�ɻ�������������
		//1.����i��λ����nλ��
		int n = 1;//��������ζ���һλ��  ���Գ�ʼֵΪ1
		int tmp = i;
		int sum = 0;
		while (tmp /= 10)
		{
			n++;
		       //i = i/10
		}
			//123/10   n++   �̲�Ϊ�� n++����
			//12/10   n++
		//2.����i��ÿһλ��n�η�֮��  sum
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}
		//3.�Ƚ�i == sum
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

*/





/*
//��Sn = a+aa+aaa+aaaa+aaaaa��ǰ����֮�ͣ�����aΪһ������
int main()
{
	int a = 0;
	int n = 0;
	int sum = 0;
	scanf("%d %d", &a, &n);
	int i = 0;
	int ret = 0;
	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + 2;
		sum = sum + ret;
	}
	printf("%d\n", sum);
	return 0;
}
*/




/*
#include<string.h>
#include<assert.h>
//дһ�����������ַ���������
void reverse(char* str)//str ָ��  a
{
	assert(str);//�����˼�����
	int len = strlen(str);//ʹ��shrlen��������ַ�����С
	char* left = str;//��Ԫ�ص�ַ
	char* right = str + len - 1;//  ���һ��Ԫ�ص�Ԫ�ص�ַ
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char  arr[256] = { 0 };
	//gets��������ȡһ������
	gets(arr);
	//scanf���������ո�Ͳ���ȡ����ֵ��
	//scanf("%s ", arr);//abcdef  ����fedcba
	//������
	reverse(arr);
	printf("%s\n",arr);
	return 0;
}
*/




/*
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5 };
	int* p = arr;//arr������Ԫ�ص�ַ
	//*(p + 2) == p[2] == > *(arr + 2) == arr[2]
	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	
	int* ptr1 = (int*)(&aa + 1);
	//&aa  ��ȡ��������ά����ĵ�ַ����1����������ά���飬Ȼ���ٽ�����ǿ������ת��Ϊint* 
	int* ptr2 = (int*)(*(aa + 1));
	//����aa�����һ�е�����������1 ��������һ���У��ٽ���ַǿ������ת��Ϊint*��
	printf("%d %d\n", *(ptr1 - 1), *(ptr2 - 1));
	//*(ptr1 - 1)  ���ڽ�ptr1ָ������ָ��һ��int�ͣ������ָ��10��
	//*(ptr2 - 1)  ����ptr2��ʱָ��6��Ȼ���ټ�һָ��5�����������5 
	return 0;
}

*/








/*
int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;     //int(*)[4]��������������������������int(*)[5]
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);

	return 0;
}

*/
