# include <stdio.h>

int getNumber(int oneday)
{
	int num;
	if (oneday == 10){
		return 1;
	}
	else
	{
		num = (getNumber(oneday + 1) + 1) * 2;
		printf("第%s天还有%d\n", oneday, num);
	}
	return num;
}


int main()
{
	int num = getNumber(1);
	printf("第一天%d \n", num);
	return 0;
}


