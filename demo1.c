#define  _CRT_SECURE_NO_WARNINGS 1





/*
int main()
{
	//strerror�����Ѵ������Ӧ�Ĵ�����Ϣ���ַ�����ַ����
  // printf("%s\n",strerror(errno));
	//perror����
	FILE* pf = fopen("test2.txt", "r");
	if (pf = NULL)
	{
		perror("open file test2.txt");
		//��������ĺô����ڣ�1.��������ͷ�ļ���
		//2.��ӡ��ʽ��  ��open file test2.txt��  ������Ϣ��������������������      
		
		return 0;
	}
	//���ļ�
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
	//feof();//EOF_end  of   file  �����ļ�������־
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
	//1.��λ�ļ�ָ��
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
	struct S s = { "����", 20, 55.6 };
	struct S tmp = { 0 };
	//���ļ�
	FILE* pf = fopen("test.txt", "wb");
	FILE* pf = fopen("test.txt", "rb");
	//�ж��Ƿ��
	if (pf == NULL)
	{
		return 0;
	}
	//�����Ƶ���ʽд�ļ�
	fwrite(&s, sizeof(struct S), 1, pf);
	//���룺��s�ṹ���������СΪstruct S��С�ռ�  дһ����  д��pfָ����ļ���
	
	//�����Ƶ���ʽ���ļ�
	fread(&tmp, sizeof(struct S), 1, pf);
	//���룺��tmp�ṹ������У�����sizeof(struct S)��С��  һ���ṹ��     ��pfָ����ļ��ж���
	
	printf("%s %d %lf ", tmp.name, tmp.age, tmp.score);
	fclose(pf);
	pf = NULL;
	return 0;
}

*/

