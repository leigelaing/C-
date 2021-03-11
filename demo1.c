#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<string.h>
/*
int main()
{
	int ch = fgetc(stdin);
	fputc(ch, stdout);
	return 0;
}
*/




/*
 从键盘输入
 输出到屏幕
 键盘&屏幕都是外部设备

 键盘—标准输入设备—（用stdin代表）
 屏幕—标准输出设备—（用stdout代表）
 是一个程序默认打开的两个流设备

 stdin   FILE*
 stdout  FILE*
 stderr（标准错误输出设备）  FILE*
 */

 








/*
int main()
{
	FILE* pfWrite = fopen("test.txt", "r");
	if (pfWrite == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//读文件
	printf('%c', pfWrite);
	printf('%c', pfWrite);
	printf('%c', pfWrite);
	//关闭文件
	fclose(pfWrite);
	pfWrite = NULL;
	return 0;
}

*/



/*
int main()
{
	FILE* pfWrite = fopen("test.txt", "w");//打开文件只写
	if (pfWrite == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//写文件
	fputc('b', pfWrite);
	fputc('i', pfWrite);
	fputc('t', pfWrite);
   //关闭文件
	fclose(pfWrite);
	pfWrite = NULL;
	return 0;
}

*/


/*
int main()
{
	//打开文件test.txt
	//相对路径
	//  .. 表示上一级路径
	// .  表示当前路径
	fopen("../../test.txt", "r");//r代表需要怎样的操作
	fopen("test.txt", "r");//
	//绝对路径的写法
	fopen("C:\\2020_code\\84班\\test_5_6\\test.txt", "r");//注意路径填写过程中的转义问题  
	
	//fopen函数返回FILE*的 指针类型
	//pf指向test.txt的文件信息区    然后再操作text.txt 文件

	FILE* pf = fopen("test.txt", "r");
	//打开文件可能失败，因此要先判断
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));//返回错误原因
	}
	//打开文件
	//读文件

	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}
*/


/*
int main()
{
	int a = 10000;   
	FILE* pf = fopen("test.txt", "wb");  
	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中   
	fclose(pf); 
	pf = NULL;
	return 0;
}
*/