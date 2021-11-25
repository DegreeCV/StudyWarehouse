// 5023: »ù´¡Ë¢Ìâ µ¹ÖÃÊä³ö
// 2021.11.24
#include<stdio.h>
#include<string.h>
int main(){
	char aa[20];
	int i;
	gets(aa);
	for(i=strlen(aa)-1;i>=0;i--){
		printf("%c",aa[i]);
	}
	return 0;
}
