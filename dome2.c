#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
/*
#include<ctype.h>
int main()
{
	char ch = 'W';
	int ret1 = islower(ch);//此库函数判断字符串是小写（返回非零值）还是大写（返回零值）
	int ret2 = isdisit(ch);//判断是否为数字字符  是  （返回非零值）  否（返回零值）
	printf("%d\n", ret1);
	char ch = tolower('Q');//此函数的作用：大写字母转小写字母   如果输入是小写就不动了
	putchar(ch);//putchar是打印字符
	

	//将那句话中的大写字母全部转为小写
	char arr[] = "I Am A Student";
	int i = 0;
	while (arr[i])
	{
		if (issupper(arr[i]))//
		{
			arr[i] = tolower(arr[i]);
		}
		i++;
	}
	printf("%s\n", arr);
	return 0;
}

*/




/*
//strerror库函数学习
//作用：将C语言中的错误码，翻译为对应的错误信息
int main()
{
	//错误码      错误信息
	//0     ——  No error
	//1     ——  Operation not permitted
	//2     ——  No such file or directory
	//…………依次类推
	
	
	//使用函数一定要引用头文件
	//头文件  errno 的意思是一个全局的错误码的变量
	//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码 赋值到errno 中
	char* str = strerror(errno);
	printf("%s\n", str);
	//打开文件
	//
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		printf("open file success\n");
	}
	return 0;
}

*/





/*

//strtok库函数学习  作用 ：分隔出字符串  
//192.168.31.121
//192 168 31 121 ——strtok
//zpw@bitedu.tech
//zpw bitedu tech
int main()
{
	char arr[] = "zpw@bitedu.tech";
	char* p = "@.";
	//zpw@bitedu.tech
	char buf[1024] = { 0 };
	strcpy(buf, arr);
	//切割buf中的字符串
	
	char* ret = NULL;
	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
	//这个代码要看懂 要看课件
	
	{
		printf("%s\n", ret);
	}
	
	
	
	
	//写法二
	char* ret = strtok(arr, p);
	printf("%s\n", ret);
	ret = strtok(NULL, p);
	printf("%s\n", ret);
	ret = strtok(NULL, p);
	printf("%s\n", ret);

	return 0;
}

*/
