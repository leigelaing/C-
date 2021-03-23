#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int a;
int main()
{
	int  a = 10;
	int b  =  20;
}






/*
//输入一个字符，第一确认 是否为小写字母，如果是 改为大写
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOf)
	{
		if (ch >= 'a' &&  ch <= 'z')
		{
			printf("%c\n", ch - 32);//将小写字母改为大写字母
		}
		else if (ch >= 'A' &&  ch <= 'B')
		{
			printf("%c\n", ch + 32);//大写转小写
		}
		getchar();
	}
	return 0;
}

*/







/*
//判断英文字母的辅音与元音
int main()
{
	int ch = 0;
	char s[] = "AaEeIiOoUu";
	while ((ch = getchar()) != EOF)
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			if (ch = s[i])//靠for循环一个一个对比
			{
				printf("Vowel\n");
				break;
			}
			if (i == 10)
			{
				printf("consonant\n");
			}
		}
		//消除\n
		getchar();
	}
	return 0;
}

*/




/*
int main()
{
	//EOF ——的值为 -1   全称为  End  of  file
	//整型在计算机中存取的是补码   -1的补码取反是结果为 0
	int score = 0;
	while (~scanf("%d",&score))//等价于 scanf("%d",&score) != EOF  
	{
		if (score > 140)
			print("你他娘，是个天才");
	}
	return 0;
}

*/





/*
//两名候选人A/B  社团没人只能投一票，得票多的是社长
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
//两行数据  第一行输入一个数，表示n个学生（>=5）,第二行输入n个学生的成绩，（整数表示0-100之间）
int main()
{
	int n = 0;
	int arr[40] = { 0 };
	//获取人数
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//对n个学生的成绩排序——降序
  //趟数
	int i = 0;
	for (i = 0; i < n - 1; i++)
	{
		//一趟冒泡排序
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
	for (i = 0; i < 5; i++)//打印前五名的成绩
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
*/






/*
//一件衣服，双十一  7七折， 双十二  八折   优惠卷减50 优惠卷只能在双十一或者双十二使用

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
//输入一个十六进制的数，和一个8进制的数  求出a+b 的 结果 要为十进制
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
//从键盘输入5个人的成绩，求他们的平均成绩
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
	printf("%.lf\n", sum / 5.0);//保留一位小数
	return 0;
}
*/







/*
//一箱牛奶里面有n盒未打开的牛奶，没h分钟喝光一盒，并且在喝光一盒之前不会再喝下一个。
//那么经过m分钟还有多少盒没有打开

int main()
{
	int n = 0;//牛奶数
	int h = 0;//每分钟喝的数量
	int m = 0;//一共多少分钟
	if (m%h)//m%h 如果余数不为零 ，进入if  为零就不进 为什么？因为有余数意味着还要再拿一瓶来喝
	{
		printf("%d\n", n - m / h - 1);//减一的意思是一瓶还在喝着
	}
	else
	{
		printf("%d\n", n - m / h);
	}
	return 0;
}
*/


/*
//给定一个浮点数，求得该浮点数的个位
int main()
{
	float n = 0;
	scanf("%f ", &n);
	printf("%d\n", ((int)n) % 10);//先将浮点数强制类型转换为int  然后取模就OK
	return 0;
}


*/


/*
//变种水仙花数，把任意的数字 从中间拆分变为两个数字 比如 1461  可以拆分为1和461  14  61   146 1
int main()
{
	int i = 0;
	for (i = 10000; i <= 99999; i++)
	{
		int j = 0;
		int sum = 0;
		for (j = 10; j <= 10000; j *= 10)
		{
			sum += (i / j)*(i % j); //i/j算出的是商，i%j  算出的是余数
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
//输入三科成绩  然后把成绩输出
int main()
{
	int score1 = 0;
	int score2 = 0;
	int score3 = 0;
	int score[3] = { 0 };
	//输入
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &score[i]);
	}
   //输出
	printf("score1 = %d score2 = %d  score3 = %d ", score1, score2, score3);
	return 0;
}
*/




/*
//构造三角形的三边  计算周长与面积   面积用海伦公式
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	//计算
	double p = (a + b + c) / 2.0;//写2.0为了计算出double类型的数据
	//周长
	double circumference = a + b + c;
	//sqrt是库函数 为了开平方
	double area = sqrt(p*(p - a)*(p - b)*(p - c));
	//输出
	printf("circumference = %02lf  area = %02lf", circumference, area);
	return 0;
}
*/





/*
//从键盘输入一个字符，编程判断这个字符是否为字母，（包括大小写）
//多组输入
int main()
{
	int ch = 0;
	while (ch = getchar() != EOF)
	{
		//判断字母
		if (ch >= 'A' && ch <= "Z" || ch >= 'A' && ch <= "Z")
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		getchar();//清除\n 为了下一次循环
	}
	return 0;
}
*/




/*
int main()
{
	char password[20] = { 0 }；
	printf("请输入密码>:");
	scanf("%s", &password);//拿到密码后
	//哪里来的那个\n  因为你输入密码完成后 会按下回车键
	printf("请确认（Y/N）:>");
	//密码要想正常，必须清楚\n
	getchar();
	int ch = getchar();//电脑接收到密码后，里面还有\n  还没等用户输入getchar读入的是\n  ,所以不会等用户输入
	if (ch == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}
	return 0;
}
*/





/*
//多组输入  每行输入大写字母，针对每组输入输出对应小写字母
int  main()
{
	//getchar 与scanf  从键盘输入先进入输入缓冲区  
	int ch = 0;
	//getchar  输入函数，每次那进来一个字符  而且还会拿进来\n  所以拿走的时候要清楚\n
	while ((ch = getchar()) != EOF)
	{
		putchar(ch + 32);
		getchar();//清除 \n
	}
	return 0;
}

*/




/*
//必须掌握的格式控制字符
/*
  %c  字符
  %hd  短整型
  %d  整型
  %s   字符串
  %f 单精度浮点型
  %lf  双精度浮点型
  %p  地址格式


//将四位数反向输出
int main()
{
	int n = 0;
	//输入
	scanf("%d", &n);
	//输出
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
//写代码，确认自身电脑是大端还是小端存储
int check_sys1()
{
	int a = 1;

	//00000000 00000000   00000000  00000001
	//低地址  ——————   高地址
	//返回  1  为低地址
	//返回  0   为高地址

	return *(char*)&a;//取a的地址，然后强制了类型转换为char* 的指针  意味着每次取出一个字节 
	//1   如果取出的是  1  大端
}

int check_sys2()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1; //将1赋值为i
	//联合体  共用4个字节
	return u.c;
	//返回  1  为低地址
	//返回  0   为高地址
}

int main()
{
	int a = 1;
	int ret = check_sys1();
	int ret = check_sys2();
	if (1 == ret)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}
*/



/*
union un
{
	char c;//1
	int i;//4
	//一共5个字节   联合体是共用同一片空间  开辟空间使用较大的空间为准

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
