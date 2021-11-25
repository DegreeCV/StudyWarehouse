// 5005: 入门训练 阶乘的和
// 2021.11.24
#include<stdio.h>
int main() {
	int i,a=0,d,j;
	scanf("%d",&d);
	for(i=1; i<=d; i++){
		int s=1;
		for(j=1; j<=i; j++) {
			s=s*j;
		}
		a+=s;
	}
	printf("%d",a);
	return 0;
}
