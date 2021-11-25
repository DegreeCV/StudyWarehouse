// 随意输入任意字符，计算输入的个数。
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char aa[50]={0};
	gets(aa);         // 可以接受字符空格
	printf("%d",strlen(aa));

    return 0;
}
