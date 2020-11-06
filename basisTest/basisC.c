# include "stdio.h"
/*
// test
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
	printf("%d \n", num);
	return 0;
}
*/


/*
int getAge(int age)
{
	return age == 1 ? 10 : getAge(age - 1) + 2;
}

int main()
{
	printf("第五位ssssa %d \n", getAge(5));
	return 0;
}
*/
/*
#include "hiC.c"

int main()
{
	int arr[5] = {7, 8, 5, 6, 9};
	printLine();
	temp(arr);
	printLine();
	return 0;
}
*/

// 输出数组
void temp(double arr[], int length)
{
	int i;
	for (i = 0; i < length; i++)
	{
		if (i != length - 1)
		{
			printf("%1.2f, ", arr[i]);
		}
		else
		{
			printf("%1.2f", arr[i]);
		}
		
	}	
}


// 冒泡排序
void bubb(double arr[], int length)
{
	int i, j;
	printf("**********排序前***********\n");
	temp(arr, length);
	// 开始进行冒泡排序
	for (i = 0; i < length - 1; i++)
	{
		for (j = i + 1; j < length; j++)
		{
			if (arr[i] > arr[j])
			{
				double num;
				num = arr[i];
				arr[i] = arr[j];
				arr[j] = num;
			}
		}
	}
	printf("\n**********排序后***********\n");
	temp(arr, length);

}

// 主入口
int main()
{
	double arr[] = {1.78, 1.69, 1.98, 1.62, 1.32, 1.11, 1.99, 1.87, 1.82, 1.66, 1.30};
	// 获取数组长度，数组总字节数/单一数据的字节长度
	int length = sizeof(arr)/sizeof(arr[0]);
	bubb(arr, length);
	return 0;
}






