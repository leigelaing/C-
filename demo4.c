#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
/*
int main()
{
	const int num = 10;
	const int* p = &num;
	int* const p = &num;
	*p = 20;
	//err     const����ָ����������ʱ�����ε���*p Ҳ����˵������ͨ��p���ı�*p��num����ֵ��
	//err     const����ָ��������ұ�ʱ�����ε���ָ�����p����p���ܱ��ı���
	
	int n = 100;
	p = &n;
	pritnf("%d\n", num);
	return 0;
}

*/





/*
//ģ��ʵ��  strcpy
//���ã��ַ����Ŀ���

//�߼��汾
void my_strcpy3(char* dest,const char* src)
{
    char* ret = dest; 
	assert(dest != NULL);//����
	assert(src != NULL);
	while (*src == '\0')
	{
		*dest++ = *src++;//�Ƚ����� �ٺ��üӼ�
	}
	*dest = *src;
	return dest;

}
void my_strcpy2(char* dest, char* src)
{
	if (dest != NULL && src != NULL)
	{
		while (*dest++ = *src++)// \0��ASCIIֵΪ 0
		{
			;
		}
	}


}


//��ͨ��
void my_strcpy2(char* dest, char* src)
{
	while (*src == '\0')
	{
		*dest = *src;//�����ַ�
		src++;//ָ����һ��
		dest++;
	}
	*dest = *src;//��\0������ȥ
}

int main()
{
	char arr1[] = "###############";
	char arr2[] = "bit";
	my_strcpy(arr1,arr2);//��arr2 �е����ݷ���arr1�а���\0;
	printf("%s\n", arr2);
	printf("%s\n", arr1);
	return 0;
}

*/



/*
int main() 
{
	int i = 0; 
	int sum = 0;//�������ս��   
	int n = 0; 
	int ret = 1;//����n�Ľ׳�  
	scanf("%d", &n);  
	for(i=1; i<=n; i++)
	{     
		int j = 0;  
		ret = 1;
		for(j=1; j<=i; j++)  
		{    
			ret *= j;   
		}       
		sum += ret;  
	}   
	printf("%d\n", sum); 
	return 0; 
} 

*/
/*
int main()
{
	{
		int tmp = 0;
		printf("%d\n", tmp);
	}
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	
	return 0;
}

*/

/*
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	printf("hehe \n");
	int a = 20;
	int b = 30;
	int c = Add(a, b);
	printf("%d\n", c);
	return 0;
}

*/


/*
int main()
{
	//�ϵ� F9 �л����ϵ�   ����F5 ������ִ���߼��ϵĶϵ㣩���϶ϵ���ǳ���ֱ�ӵ��ϵ��ִ�У�����ִ�е��ϵ�ͣ����
	return 0;
}
*/