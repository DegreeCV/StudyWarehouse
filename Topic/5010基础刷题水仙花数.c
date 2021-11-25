// 5010: 基础刷题 水仙花数
// 2021.11.24
#include<stdio.h>
int main(){
	int a,b,c,i;
	for(i=100;i<=999;i++){
		a=i/100;
		b=i/10%10;
		c=i%10;
		if(a*a*a+b*b*b+c*c*c==i){
			printf("%d\n",i);
		}
	}
	return 0;
}
