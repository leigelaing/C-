#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int a;
int main()
{
	int  a = 10;
	int b  =  20;
}






/*
//����һ���ַ�����һȷ�� �Ƿ�ΪСд��ĸ������� ��Ϊ��д
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOf)
	{
		if (ch >= 'a' &&  ch <= 'z')
		{
			printf("%c\n", ch - 32);//��Сд��ĸ��Ϊ��д��ĸ
		}
		else if (ch >= 'A' &&  ch <= 'B')
		{
			printf("%c\n", ch + 32);//��дתСд
		}
		getchar();
	}
	return 0;
}

*/







/*
//�ж�Ӣ����ĸ�ĸ�����Ԫ��
int main()
{
	int ch = 0;
	char s[] = "AaEeIiOoUu";
	while ((ch = getchar()) != EOF)
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			if (ch = s[i])//��forѭ��һ��һ���Ա�
			{
				printf("Vowel\n");
				break;
			}
			if (i == 10)
			{
				printf("consonant\n");
			}
		}
		//����\n
		getchar();
	}
	return 0;
}

*/




/*
int main()
{
	//EOF ������ֵΪ -1   ȫ��Ϊ  End  of  file
	//�����ڼ�����д�ȡ���ǲ���   -1�Ĳ���ȡ���ǽ��Ϊ 0
	int score = 0;
	while (~scanf("%d",&score))//�ȼ��� scanf("%d",&score) != EOF  
	{
		if (score > 140)
			print("������Ǹ����");
	}
	return 0;
}

*/





/*
//������ѡ��A/B  ����û��ֻ��ͶһƱ����Ʊ������糤
int main()
{
	int ch = 0;
	int count_a = 0;
	int count_b = 0;
	while (((ch = getchar()) != '0') && ch != EOF)
	{
		if (ch = 'A')
			count_a++;
		if (ch = 'b')
			count_b++;
	}
	if (count_a == count_b)
	{
		printf("%c\n", 'E');
	}
	if (count_a > count_b)
	{
		printf("%c\n", 'A');
	}
	if (count_a < count_b)
	{
		printf("%c\n", 'B');
	}
	return 0;
}
*/






/*
//��������  ��һ������һ��������ʾn��ѧ����>=5��,�ڶ�������n��ѧ���ĳɼ�����������ʾ0-100֮�䣩
int main()
{
	int n = 0;
	int arr[40] = { 0 };
	//��ȡ����
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//��n��ѧ���ĳɼ����򡪡�����
  //����
	int i = 0;
	for (i = 0; i < n - 1; i++)
	{
		//һ��ð������
		int j = 0;
		for (j = 0; j < n - 1 - i; j++)//1 2 3 4 5
		{
			if (arr[j] < arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < 5; i++)//��ӡǰ�����ĳɼ�
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
*/






/*
//һ���·���˫ʮһ  7���ۣ� ˫ʮ��  ����   �Żݾ��50 �Żݾ�ֻ����˫ʮһ����˫ʮ��ʹ��

int main()
{
	float price = 0.0;
	int m = 0;
	int d = 0;
	int flag = 0;
	if (m == 11 && d == 11)
	{
		price *= 0.7;
		if (flag = 1)
		{
			price -= 50;
		}
	}
	if (m == 12 && d == 12)
	{
		price *= 0.8;
		if (flag = 1)
		{
			price -= 50;
		}
	}
	if (price < 0.0)
	{
		price = 0;
	}
	printf("%f\n", price);
	return 0;
}
*/








/*
//����һ��ʮ�����Ƶ�������һ��8���Ƶ���  ���a+b �� ��� ҪΪʮ����
int main()
{
	int a = 0;
	int b = 0;
	scanf("%s %o", &a, &b);
	int sum = a + b;
	printf("%d\n", sum);
	return 0;
}

*/




/*
//�Ӽ�������5���˵ĳɼ��������ǵ�ƽ���ɼ�
int main()
{
	int i = 0;
	int sum = 0;
	for (i = 0; i < 5; i++)
	{
		int score = 0;
		scanf("%d", &score);
		sum += score;
	}
	printf("%.lf\n", sum / 5.0);//����һλС��
	return 0;
}
*/







/*
//һ��ţ��������n��δ�򿪵�ţ�̣�ûh���Ӻȹ�һ�У������ںȹ�һ��֮ǰ�����ٺ���һ����
//��ô����m���ӻ��ж��ٺ�û�д�

int main()
{
	int n = 0;//ţ����
	int h = 0;//ÿ���Ӻȵ�����
	int m = 0;//һ�����ٷ���
	if (m%h)//m%h ���������Ϊ�� ������if  Ϊ��Ͳ��� Ϊʲô����Ϊ��������ζ�Ż�Ҫ����һƿ����
	{
		printf("%d\n", n - m / h - 1);//��һ����˼��һƿ���ں���
	}
	else
	{
		printf("%d\n", n - m / h);
	}
	return 0;
}
*/


/*
//����һ������������øø������ĸ�λ
int main()
{
	float n = 0;
	scanf("%f ", &n);
	printf("%d\n", ((int)n) % 10);//�Ƚ�������ǿ������ת��Ϊint  Ȼ��ȡģ��OK
	return 0;
}


*/


/*
//����ˮ�ɻ���������������� ���м��ֱ�Ϊ�������� ���� 1461  ���Բ��Ϊ1��461  14  61   146 1
int main()
{
	int i = 0;
	for (i = 10000; i <= 99999; i++)
	{
		int j = 0;
		int sum = 0;
		for (j = 10; j <= 10000; j *= 10)
		{
			sum += (i / j)*(i % j); //i/j��������̣�i%j  �����������
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

*/



/*
//�������Ƴɼ�  Ȼ��ѳɼ����
int main()
{
	int score1 = 0;
	int score2 = 0;
	int score3 = 0;
	int score[3] = { 0 };
	//����
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &score[i]);
	}
   //���
	printf("score1 = %d score2 = %d  score3 = %d ", score1, score2, score3);
	return 0;
}
*/




/*
//���������ε�����  �����ܳ������   ����ú��׹�ʽ
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	//����
	double p = (a + b + c) / 2.0;//д2.0Ϊ�˼����double���͵�����
	//�ܳ�
	double circumference = a + b + c;
	//sqrt�ǿ⺯�� Ϊ�˿�ƽ��
	double area = sqrt(p*(p - a)*(p - b)*(p - c));
	//���
	printf("circumference = %02lf  area = %02lf", circumference, area);
	return 0;
}
*/





/*
//�Ӽ�������һ���ַ�������ж�����ַ��Ƿ�Ϊ��ĸ����������Сд��
//��������
int main()
{
	int ch = 0;
	while (ch = getchar() != EOF)
	{
		//�ж���ĸ
		if (ch >= 'A' && ch <= "Z" || ch >= 'A' && ch <= "Z")
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		getchar();//���\n Ϊ����һ��ѭ��
	}
	return 0;
}
*/




/*
int main()
{
	char password[20] = { 0 }��
	printf("����������>:");
	scanf("%s", &password);//�õ������
	//���������Ǹ�\n  ��Ϊ������������ɺ� �ᰴ�»س���
	printf("��ȷ�ϣ�Y/N��:>");
	//����Ҫ���������������\n
	getchar();
	int ch = getchar();//���Խ��յ���������滹��\n  ��û���û�����getchar�������\n  ,���Բ�����û�����
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}
	return 0;
}
*/





/*
//��������  ÿ�������д��ĸ�����ÿ�����������ӦСд��ĸ
int  main()
{
	//getchar ��scanf  �Ӽ��������Ƚ������뻺����  
	int ch = 0;
	//getchar  ���뺯����ÿ���ǽ���һ���ַ�  ���һ����ý���\n  �������ߵ�ʱ��Ҫ���\n
	while ((ch = getchar()) != EOF)
	{
		putchar(ch + 32);
		getchar();//��� \n
	}
	return 0;
}

*/




/*
//�������յĸ�ʽ�����ַ�
/*
  %c  �ַ�
  %hd  ������
  %d  ����
  %s   �ַ���
  %f �����ȸ�����
  %lf  ˫���ȸ�����
  %p  ��ַ��ʽ


//����λ���������
int main()
{
	int n = 0;
	//����
	scanf("%d", &n);
	//���
	while (n != 0)
	{
		printf("%d", n % 10);
		n = n / 10;
	}

	return 0;
} 

*/





/*
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
int main()
{
	enum Sex s = MALE;
	return 0;
}
*/


/*
//д���룬ȷ����������Ǵ�˻���С�˴洢
int check_sys1()
{
	int a = 1;

	//00000000 00000000   00000000  00000001
	//�͵�ַ  ������������   �ߵ�ַ
	//����  1  Ϊ�͵�ַ
	//����  0   Ϊ�ߵ�ַ

	return *(char*)&a;//ȡa�ĵ�ַ��Ȼ��ǿ��������ת��Ϊchar* ��ָ��  ��ζ��ÿ��ȡ��һ���ֽ� 
	//1   ���ȡ������  1  ���
}

int check_sys2()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1; //��1��ֵΪi
	//������  ����4���ֽ�
	return u.c;
	//����  1  Ϊ�͵�ַ
	//����  0   Ϊ�ߵ�ַ
}

int main()
{
	int a = 1;
	int ret = check_sys1();
	int ret = check_sys2();
	if (1 == ret)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}
*/



/*
union un
{
	char c;//1
	int i;//4
	//һ��5���ֽ�   �������ǹ���ͬһƬ�ռ�  ���ٿռ�ʹ�ýϴ�Ŀռ�Ϊ׼

};
int main()
{
	union un u;
	printf("%d\n", sizeof(u));
	
	printf("%d\n", &u);

	printf("%p\n", &(u.c));
	printf("%p\n", &(u.i));
	return 0;
}
*/
