#include "stdio.h"

int lengthOfLongestSubstring(char *s){
	int i;
	int count = 0; //长度
	int max = 0; //最大长度
	int start = 0; //起始位置
	int index[128] = {0};
	for (i = 0; s[i] != '\0'; i++)
	{
		if (index[s[i]]>start) //出现重复
		{
			count = i - start;
			if (count>max)
			{
				max = count;
			}
			// 开始位置，左边界从重复位置后边开始
			start = index[s[i]];
		}
		// 开始位置为 n + 1
		index[s[i]] = i + 1;
	}
	// 计算最后一个
	count = i - start;
	return max > count ? max : count;
}

int main()
{
	char str[] = "abcabcbb";
	// 数组名称等于数组第一个元素地址 str = &str[0]
	int len = lengthOfLongestSubstring(str);
	printf("%d \n", len);
	return 0;
}


