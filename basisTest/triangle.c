# include "stdio.h"

/*
int main(int argc, char const *argv[])
{
	int i, j, k;
	for (i = 1; i <= 5; i++)
	{
		for (j = i; j < 5; j++)
		{
			printf(" ");
		}
		for (k = 0; k < (2 * i) - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/


// �˷���
/* 
int main(int argc, char const *argv[])
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d  ", j, i, i * j);
		}
		printf("\n");
	}
	return 0;
}
*/

/*
#include "string.h"

int main(int argc, char const *argv[])
{
	char arr[] = {'s', 'd', 'f', 'w', '0'};
	printf("%d\n", strlen(arr));
	return 0;
}
*/



/* // ָ�����
 int main()
 {
 	// �����޷�������
 	unsigned int i = 5;
 	// ������ ����i���ڴ��ַ��ָ�룬ָ��i���ڴ�id
 	// int * Ϊ����ָ�룬 ����ǰ��&���Ż�ȡ�ڴ��ַ
 	unsigned int *p = &i;
 	// �����ָ��, ��ָ�벻��ʹ��*p �����ڣ� ��ͨ��if(p)��ʽ���ָ��
 	unsigned int *q = NULL;
 	printf("num %d\n", &i);
 	if (p)
 	{
 		printf("p���num�ĵ�ַ��%d, p�ĵ�ַ:%d, ͨ��ָ�����num��ֵ%d \n", p, &p, *p);		
 	}

 	// ָ������ ,���ı�ָ��洢ʵ��ֵ��������ƶ�ָ��, ָ���ƶ����ֽ���ȡ����ָ��ָ��������ݵ��ֽ���
 	printf("new proint %d\n", p++);

 	return 0;
 }
*/
// const int MAX = 3;

void prtdata(int arr[], int m)
{
	int i, *ptr;
	// ָ��ָ�������һ�����ݵ�ַ�� Ĭ��ָ���һ����ַ ��д�� ptr = arr;
	ptr = &arr[0];
	// ָ��������飬ʵ��Ӧ����û���κ����ã�
	for (ptr; ptr <= &arr[m - 1]; ptr++)
	{
		printf("��ȡ����arr[%d]:%d \n", ptr, *ptr);
	}
}

int main()
{
	int arr[] = {10, 100, 1000};
	// ���鳤�ȣ�arr[m]: ��������ڴ�λ��
	int m = sizeof(arr)/sizeof(arr[0]);
	// �����ȼ�������鳤���������鴫�ݵ�������ʵ���Ǵ��ݵ�ָ�룬������ʹ��sizeof�������ָ��ĳ���
	prtdata(arr, m);
	return 0;

}














