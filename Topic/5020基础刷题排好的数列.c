// 5020: ����ˢ�� �źõ�����  �Ե�-�ύ��ʾ����
// 2021.11.24
#include<stdio.h>
#include<string.h>
int main(){
	int i,j,s;
	char aa[50];
	scanf("%s",&aa);
	scanf("%d",&s);
	if(strlen(aa)%2==0){
		for(i=0;i<strlen(aa)+1;i++){
			if(i==(strlen(aa)/2)){
				printf("%d",s);
				printf("%c",aa[i]);
			}
			else{
				printf("%c",aa[i]);
			}
		}
	}
	return 0;
}

