#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<string.h>

/*

1.scanf  /printf  是针对标准输入流/标准输出流格式化输入/输出语句
2.fscanf/fprintf  是针对所有输入流/所有输出流格式化输入/输出语句
3.  sscanf  是从字符串中读取格式化数据
    sprintf   是吧格式化数据输成（存储到）字符串



*/

















/*
struct S
{
	int n;
	float score;
	char arr[10];
};
int  main()
{

	struct S s = { 100,3.14f,"abcdef"};
	struct S tmp = { 0 };
	char buf[1024] = { 0 };
	//把格式化的数据转换成字符串存储到buf
	sprintf(buf, "%d %f %s ", s.n, s.score, s.arr);
	printf("%s\n", buf);
	//从buf中读取格式化的数据到tmp中
	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);//arr 本身就是首元素地址
	printf("%d %.2f %s", tmp.n, tmp.score, tmp.arr);
	return 0;
}
*/
/*
struct S
{
	int n;
	float score;
	char arr[10];
};
int  main()
{
	struct S s = { 0 };
	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);//arr 本身就是首元素地址
	fprintf(stdout,"%d %.2f %s", s.n, s.score, s.arr);
	return 0;
}


*/



/*
struct S
{
	int n;
	float score;
	char arr[10];
};
int  main()
{
	struct S s = { 100, 3.14f, "bit" };
	FILE* pf = fppen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	//格式化的输入数据
	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);//arr 本身就是首元素地址
	printf("%d %f %s", s.n, s.score, s.arr);

	fclose(pf);
	pf = NULL;
	return 0;
}

*/



/*
struct S
{
	int n;
	float score;
	char arr[10];
};
int  main()
{
	struct S s = { 100, 3.14f, "bit" };
	FILE* pf = fppen("test.txt", "w");
	if (pf == NULL)
	{
		return 0;
	}
	//格式化的形式写文件
	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
	fclose(pf);
	pf = NULL;
	return 0;
}

*/











/*
int main()
{
	//从键盘读取一行文本文本信息
	char buf[1024] = { 0 };
	fgets(buf, 1024, stdin);//从标准输入读取
	fputs(buf, stdout);//输出到标准输出流
	gets(buf);
	puts(buf);
	
	return 0;
}
*/





/*
int main()
{
	char buf[1024] = { 0 };//定义一个数组
	FILE* pf = fopen("test.txt", "w");
	//打开失败需要判断
	if (pf == NULL)
	{
		return 0;
	}
	//写文件
	fputs("hello\n", pf);
	fputs("world\n", pf);
	  
	
	//关闭文件
	fclose(pf);
	pf == NULL;
	return 0;
}

*/




/*
int main()
{
	char buf[1024] = { 0 };//定义一个数组
	FILE* pf = fopen("test.txt", "r");
	//打开失败需要判断
	if (pf == NULL)
	{
		return 0;
	}
	//读文件
	fgets(buf, 1024, pf);
	printf("%s\n", buf);
	fgets(buf, 1024, pf);
	printf("%s\n", buf);
//关闭文件
	fclose(pf);
	pf == NULL;
	return 0;
}
*/




/*
int main()
{
	FILE* pf = fopen("test.txt", "r");//打开test.txt文件，并且以读的方式打开
	//判断问题
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//读文件
	int ch = fgetc(pf);
	printf("%c", ch);
    ch = fgetc(pf);
	printf("%c", ch);
    ch = fgetc(pf);
	printf("%c", ch);
	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}

*/



/*
int main()
{
	FILE* pf = fopen("test.txt", "w");//打开文件，写入
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//写文件
	fputc('b', pf);
	fputc('i', pf);
	fputc('t', pf);
	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}
*/
