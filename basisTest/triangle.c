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


// ³Ë·¨±í
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


#include "string.h"

int main(int argc, char const *argv[])
{
	char arr[] = {'s', 'd', 'f', 'w', '0'};
	printf("%d\n", strlen(arr));
	return 0;
}














