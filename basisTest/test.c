# include "stdio.h"

/*
	scanf("%f", &weight); 接收用户输入，注意数据类型 
	\a :警报
*/


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

// 乘法表
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

int main()
{
	float weight, value;
	printf("plase enter your weight in pounds:");
	scanf("%f", &weight);
	value = 1700.0 * weight * 14.583;
	printf("%.2f\n", value);
	return 0;
}


















