// 5015: 基础刷题 妹妹的年龄
// 2021.11.24
#include<stdio.h>
int main()
{
	int i,j,w;
	char aa[20];
	for(i=1;i<=100;i++){
		for(j=1;j<=i+8;j++){
			if(i*j==(i+j)*6){
				aa[w++]=i;
			}
		}
	}
	printf("%d",aa[0]);
}
