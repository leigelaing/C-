#define  _CRT_SECURE_NO_WARNINGS 1





/*
int main()
{
	//strerror——把错误码对应的错误信息的字符串地址返回
  // printf("%s\n",strerror(errno));
	//perror函数
	FILE* pf = fopen("test2.txt", "r");
	if (pf = NULL)
	{
		perror("open file test2.txt");
		//这个函数的好处在于，1.不用引入头文件，
		//2.打印格式是  （open file test2.txt：  错误信息）这样看起来更加清晰      
		
		return 0;
	}
	//读文件
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		putchar(ch);
	}
	if (ferror(pf))
	{
		printf("error\n");
	}
	else if (feof(pf))
	{
		printf("end of file\n");
	}

	fclose(pf);
	pf = NULL;
	return 0;
}

*/




/*
int main()
{
	//EOF 
	//feof();//EOF_end  of   file  ——文件结束标志
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	int ch = fgetc(pf);
	printf("%d\n", ch);//-1


	fclose(pf);
	pf = NULL;
	return 0;
}


*/



/*
int  main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	//1.定位文件指针
	//fseek(pf,-2,SEEK_END);
	int ch = fgetc(pf);
	int pos = ftell(pf);
	printf("%d\n", pos);
	
	rewind(pf);
	 ch = fgetc(pf);
	printf("%c\n", ch);
	fcolse(pf);
	pf = NULL;
	return 0;
}

*/




/*
struct S
{
	char name[20];
	int age;
	double score;
};
int main()
{
	struct S s = { "张三", 20, 55.6 };
	struct S tmp = { 0 };
	//打开文件
	FILE* pf = fopen("test.txt", "wb");
	FILE* pf = fopen("test.txt", "rb");
	//判断是否打开
	if (pf == NULL)
	{
		return 0;
	}
	//二进制的形式写文件
	fwrite(&s, sizeof(struct S), 1, pf);
	//翻译：将s结构体变量，大小为struct S大小空间  写一个，  写在pf指向的文件中
	
	//二进制的形式读文件
	fread(&tmp, sizeof(struct S), 1, pf);
	//翻译：将tmp结构体变量中，读入sizeof(struct S)大小的  一个结构体     从pf指向的文件中读出
	
	printf("%s %d %lf ", tmp.name, tmp.age, tmp.score);
	fclose(pf);
	pf = NULL;
	return 0;
}

*/

