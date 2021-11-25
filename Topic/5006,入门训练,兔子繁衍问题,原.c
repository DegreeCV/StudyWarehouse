// 5006: 入门训练 兔子繁衍问题   原
// 2021.11.24
#include<stdio.h>
int main(){
	int a,i;
	scanf("%d",&a);
	int s[a];
	s[1]=1;
	s[2]=1;
	for(i=3;i<=a;i++)
	{
		s[i]=s[i-1]+s[i-2];
	}
	printf("%d",s[a]);

	return 0;
}
