#include <stdio.h>

void sort_array(int [], int, int);

void sort_array(int array[], int left, int right)
{
	// 生成标量
	int i = left, j = right;
	int flag_num;
	int tmp;
	flag_num = array[(left + right) / 2];
	while (i < j)
	{
		while (array[i] < flag_num)
		{
			i++;
		}
		while (array[j] > flag_num)
		{
			j--;
		}
		if (i <= j)
		{
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			i++;
			j--;
		}
	}
	//左边部分再进行排序
	if (left < j)
	{
		sort_array(array, left, j);
	}
	if (i < right)
	{
		sort_array(array, i, right);
	}

}

int main(void)
{
	int array[] = {2, 34, 21, 31, 51, 67, 120, 1, 18, 17, 78, 100, 104};
	int lenght, i;
	lenght = sizeof(array) / sizeof(array[0]);
	sort_array(array, 0, lenght - 1);
	for (i = 0; i < lenght; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	return 0;
}
