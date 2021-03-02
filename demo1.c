#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
//这个是数据的存储，问题代码未看懂
int  main()
{
	int n = 9;
	//0  00000000  00000000000000000001001——补码
	float* pFloat = (float*)&n;
	printf("n的值为：%d\n", n);
	pritnf("*Pfloat的值为 %f\n", *pFloat);
	//(-1)^0*0.00000000000000000000001001*2^-126
	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	pritnf("*Pfloat的值为 %f\n", *pFloat);

	float f = 5.5;
	//5.5;
	//101.1


	return 0;
}
*/



/*
//这个代码不好，没有看懂
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
	//按照补码的形式进行计算，最后格式化成有符号的整数
	//在计算机存储是依据补码进行存储，但实际输出结果为原码，所以求出结果为补码，
	//要再转换为原码
	return 0;
}
*/






/*char类型的分为
signed char
与unsiged char
一个字节   8为bit
有符号char的范围为  -128——127   
无符号char的范围为   0——255
*/








/*
//写一段代码确认当前机器的字节序是什么
//字节序  大端存储与小端存储
//方法二
int  check_sys()
{
   int a = 1;
   return * (char*) &a;
   //取出a的地址   将a的地址强制类型转换为char*类型（提取一个字节）  解引用操作  将a的地址内容释放出来
   }


//方法一
int  check_sys()
{
	int a = 1;
	char* p = (char*)&a;//指针类型确认提取字节长度  char类型确认提取一个字节长度
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
		pritnf("小端");
	}
	else
	{
		printf("大端");
	}
	return 0;
}
*/
