/* 2021/11/4 */
//#include<stdio.h>
//int main(){
//	// China      Glmre
//	
//	
//	/*
//	char a1,b1;
//	scanf("%c%c",&a1,&b1);
//	printf("%c%c",a1+4,b1+4);
//	*/
//
////	char a1,b1,c1,d1,e1;
////	scanf("%c%c%c%c%c",&a1,&b1,&c1,&d1,&e1);
////	printf("%c%c%c%c%c",a1+4,b1+4,c1+4,d1+4,e1+4);
//
////	int a1,b1,c1,d1;
////	int s1,s2,s3;
////	
////	scanf("%d%d%d%d",&a1,&b1,&c1,&d1);
////	printf(,a1,b1,c1,d1);
//	
//	int a1=11,b1=22,c1=33;
//	scanf("%d%d",&a1,&b1,&c1);
//	printf("%d",a1+b1+c1);
//
//
//
//	
//	return 0;
//} 
 

//判断a大还是b大 
//#include<stdio.h>
//int main(){
//	
//	int a,b;
//	
//	scanf("%d%d",&a,&b);
//	if(a>=b){
//		printf("%d",a);
//	}
//	else{
//		printf("%d",b);
//	}	
//	
//	return 0;	
//}



//判断平年还是润年 
//#include<stdio.h>
//int main(){
//	
//	int a;
//	
//	scanf("%d",&a);
//	if(a%4==0){
//		printf("润年");
//	}
//	else{
//		printf("平年");
//	}	
//	
//	return 0;	
//}



//大不大于50 
//#include<stdio.h>
//int main(){
//	
//	int a;
//	
//	scanf("%d",&a);
//	if(a>50){
//		printf("大于50");
//	}
//	else{
//		printf("小于50");
//	}	
//	
//	return 0;	
//}



//判断成绩等级 
//#include<stdio.h>
//int main(){
//	
//	int a;
//	
//	scanf("%d",&a);
//	if(a>90&&a<100){
//		printf("A");
//	}
//	else if(a>=80&&a<90 ){
//		printf("b");
//		
//	}
//	else if(a>=70&&a<80 ){
//		printf("c");
//		
//	}
//	else if(a>=60&&a<70 ){
//		printf("d");
//		
//	}
//	else if(a<60 ){
//		printf("d");
//		
//	}
//	else{
//		printf("错误");
//		
//	}	
//	
//	return 0;	
//}






//三目运算 --
//printf("%d",a>b?a:b)






//题 
//#include<stdio.h>
//int main(){
//	
//	
//	struct Person{
//		char name[20];
//		int age;
//		char sex
//	};
//	
//	scanf("%s%d%s",&Person.name,&Person.age,&Person.sex)
//	printf("%s%d%s",Person.name,Person.age,Person.sex)
//	
//	
//	
//	return 0;
//}




/* 2021/11/5 */
// 1.
//#include<stdio.h>
//int main(){
//	
//	int aa; 
//	scanf("%d",&aa);
//	int a=aa%10;
//	int b=aa/10%10;
//	int c=aa/100%10;
//	int d=aa/1000%10;	
//	
//	printf("%d %d %d %d",d,c,b,a);	
//	
//	return 0;
//}


//// 2.
//#include<stdio.h>
//int main(){
//
//	int aa; 
//	scanf("%d",&aa);
//	int a=aa%10;
//	int b=aa/100%10;
//
//	if(a==b){
//		printf("是回数");
//	}
//	else if(a!=b){
//		printf("不是回数"); 
//	}	
//
//
//	return 0;
//}


// 3.
//#include<stdio.h>
//int main(){
//	
//	int aa; 
//	scanf("%d",&aa);
//	int a=aa%10;
//	int b=aa/10%10;
//	int c=aa/100%10;
//	int d=aa/1000%10;	
//	int e=aa/10000%10;
//	
//	printf("%d%d%d%d\%d",a,b,c,d,e);	
//	
//	return 0;
//}


////4.
//#include<stdio.h>
//int main(){
//	
//	int aa; 
//	scanf("%d",&aa);
//	if(aa%2==0){
//		printf("是偶数"); 
//	}
//	else if(aa%2!=0){
//		printf("是奇数");
//	}
//	
//	
//	return 0;
//}



////5.
//#include<stdio.h>
//int main(){
//	
//	int a,b,c; 
//	scanf("%d%d%d",&a,&b,&c);
//	if(a>b&&a>c){
//		printf("%d",a); 
//	}
//	else if(b>a&&b>c){
//		printf("%d",b);
//	}
//	else if(c>a&&c>b){
//		printf("%d",c);
//	}
//	
//	return 0;
//}



////5.
//#include<stdio.h>
//int main(){
//	
//	int a,b,c; 
//	scanf("%d%d%d",&a,&b,&c);
//	if(a>b&&a>c){
//		printf("%d",a); 
//	}
//	else if(b>a&&b>c){
//		printf("%d",b);
//	}
//	else if(c>a&&c>b){
//		printf("%d",c);
//	}
//	
//	return 0;
//}



//6.
//#include<stdio.h>
//int main(){
//	
//	int a; 
//	scanf("%d",&a);
//	float b=(a-32)/1.8;
//	printf("%.2f",b);
//	
//	
//	
//	
//	return 0;
//}



////7.
//#include<stdio.h>
//int main(){
//	
//	int x;
//	scanf("%d",&x);
//	if(x>1){
//		int y=2*x-1;
//		if(1<=y<10){
//			int t=3*x-11;
//			printf("%d",t);
//		}
//	}
//	
//	
//	return 0;
//}




//#include<stdio.h>

//struct Person{
//	
//	char name[10];
//	int age;
//	char sex[10];
//	
//	
//};
// 
//int main(){
//
//	struct Person p = {"王哈哈",18,"男"};
//	
//	printf("name:%s\n",p.name);
//	printf("age:%d\n",p.age);
//	printf("sex:%s\n",p.sex);
//	
//	return 0;
//}




//铺垫 
//#include<stdio.h>
//int main(){
//	
//	int aa,i; 
//	scanf("%d",&aa);
//	int a=aa%10;
//	int b=aa/10%10;
//	int c=aa/100%10;
//	int d=aa/1000%10;	
//	int e=aa/10000%10;
//	
//	int data[5] ={a,b,c,d,e};
//	
//	for(i=0;i<6;i++){
//	
//		printf("data[%d]:%d\n",i,data[i]);
//		};
//	 
//	printf("%d%d%d%d\%d",a,b,c,d,e);	
//	
//	return 0;
//}





// for 其一 
//#include<stdio.h> 
//int main(){
//	int s=2,i,a,b,in;
//	printf("输入:"); 
//	scanf("%d",&in);
//	for(i=1;i<=in;i++){
//		printf("%d\n",s);
//		a+=s;
//		s= s*10+2;               
//	}
//	printf("结果:%d",a);
//	return 0; 
//} 



// if 其一题  bug不能输入0 
//#include<stdio.h>
//int main(){
//	
//	int aa,i; 
//	printf("请输入五位数之内的数(请勿输入0):"); 
//	scanf("%d",&aa);
//	int a=aa%10;
//	int b=aa/10%10;
//	int c=aa/100%10;
//	int d=aa/1000%10;	
//	int e=aa/10000%10;
//
//	int data[5] ={e,d,c,b,a};
//	int r=0,f=5;
//	
//	for(i=0;i<6;i++){
// 		if(data[i]!=0){
// 			
// 			printf("%d",data[i]);
// 			r+=1;
//		 }		
//	};	
//	printf("\n");
//	for(i=5;i>=0;i--){
//		if(data[i]!=0){	
//			printf("%d",data[i]);
//		 }		
//	};
//	printf("\n数字个数:%d",r); 
//	return 0;
//}


// for其二 1!+2!+3    阶乘题 
//#include<stdio.h> 
//int main(){
//	int i,a=1,b,d;
//	scanf("%d",&d);
//	for(i=1;i<d;i++){		
//		a=a*(i+1);
//	}
//	printf("\n%d",a);
//	return 0;
//}



// for 题其三 
//#include<stdio.h> 
//int main(){
//	int i,a,b,c;      //  a:求和值 
//	scanf("%d %d %d",&a,&b,&c);
////	scanf("%d",&a);
//	// 1-b的和 
//	float d,e,f,p;
//	for(i=1;i<a+1;i++){		
//		d+=i;	
//	}
//		
//	// 1-c的平方 
//	for(i=1;i<=b;i++){		
//		e+=i*i;
//		
//	}
//
//	// 1-d的倒数 
//	for(p=1;p<=c;p++){		
//		f+=1/p;	
//	}
////	printf("值:%f,d:%f,e:%f,f:%f",d+e+f,d,e,f);
//	printf("值:%.2f",d+e+f);
//  return 0;
//}


// if 其二 
//#include<stdio.h>
//int main(){
//	int a,b;
//	printf("请输入当月利润:");
//	scanf("%d",&a);
//	if(a<=100000){
//		b=a*0.1;
//	}
//	else if(a>100000&&a<=200000){
//		b=100000*0.1+(a-100000)*0.075;
//	}
//	else if(a>200000&&a<=400000){
//		b=200000*0.1+(a-200000)*0.05;
//	}
//	else if(a>400000&&a<=600000){
//		b=400000*0.1+(a-400000)*0.03;
//	}
//	
//	else if(a>600000&&a<=1000000){
//		b=600000*0.1+(a-600000)*0.15;
//	}
//	else if(a>100000){
//		b=1000000*0.1+(a-1000000)*0.01;
//	}
//	printf("当月奖金:%d",b);
//	return 0;
//} 


// if 其三 
//#include<stdio.h>
//int main(){
//	int a,b,c,d,i;
//	scanf("%d %d",&a,&b);
//	for(i=1;i<=(a>b?a:b);i++){
//		if(a%i==0&&b%i==0){
//			c=i;
//		}
//	}
//	for(i=a*b;i>=(a>b?a:b);i--){
//		if(i%a==0&&i%b==0){
//			d=i;
//		}
//	}
//	printf("%d %d",c,d);
//	return 0;
//} 



// 水仙花 
//#include<stdio.h>
//int main(){
//	int a,b,c,i;
//	for(i=100;i<=999;i++){
//		a=i/100;
//		b=i/10%10;
//		c=i%10;
//		if(a*a*a+b*b*b+c*c*c==i){
//			printf("%d\n",i);
//		}
//	}
//	return 0;
//} 



// for-其5 
//#include<stdio.h>
//int main(){
//	int a,i,j;
//	scanf("%d",&a);
//	for(i=1;i<=a;i++){
//		int sum=0;
//		for(j=1;j<i;j++){
//			if(i%j==0){
//				sum+=j;
//			}
//			
//		}
//		if(sum==i){
//			printf("%d",sum);
//			printf("its factors are ");
//			for(j=1;j<i;j++){
//				if(i%j==0){
//					printf("%d ",j);
//				}
//			}
//			printf("\n");
//		}
//		
//	}
//	return 0;	
//} 



//edg-其二 
//#include<stdio.h>
//int main(){
//	int a,i;
//	scanf("%d",&a);
//	int s[a];
//	s[1]=1;
//	s[2]=1;
//	for(i=3;i<=a;i++)
//	{
//		s[i]=s[i-1]+s[i-2];
//		
//	}
//	printf("%d",s[a]);
//	return 0;
//} 
 



















//  图形生成 

// 叉号 
//#include<stdio.h>
//int main(){
//	int a,i,j;
//	scanf("%d",&a);
//	for(i=1;i<=a;i++){
//		for(j=1;j<=a;j++){
//			if(i+j==a+1 || j==i){
//				printf("*");
//			}
//			else{
//				printf(" ");
//			}
//		}
//	printf("\n");
//	}
//	
//	return 0;
//} 


// 菱形 
//#include<stdio.h>
//int main(){
//	int a,i,j;
//	scanf("%d",&a);
//	for(i=(a+1)/2;i<=a;i++){
//		for(j=1;j<=a;j++){
//			if(i+j==a+1 || j==i){
//				printf("*");
//			}
//			else{
//				printf(" ");
//			}
//		}
//	printf("\n");
//	}
//	for(i=2;i<=(a+1)/2;i++){
//		for(j=1;j<=a;j++){
//			if(i+j==a+1 || j==i){
//				printf("*");
//			}
//			else{
//				printf(" ");
//			}
//		}
//	printf("\n");
//	}
//	
//	return 0;
//} 




// 金字塔 

//#include<stdio.h>
//int main(){
//	int i,j,a,kk=0;
//	scanf("%d",&a);
//	for(i=1;i<=a;i++){
//		for(j=1;j<=a-i;j++){
//			printf(" ");
//		}
//		for(j=1;j<=i*2-1;j++){
//			
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	return 0; 
//	
//}




//  函数调用    void : 定义函数 
//#include<stdio.h>
//void han(k){
//	int i,j,kk=0;
//	for(i=1;i<=k;i++){
//		for(j=1;j<=2*k-1;j++){
//			
//			(i+j>=k+1&&i+j<=(k+kk+1))?printf("*"):printf(" ");
//		}
//
//		printf("\n");
//		kk+=2;
//	} 
//	
//}
//
// 
//int main(){
//	int a;
//	scanf("%d",&a);
//	han(a); 
//	return 0;
//}        





 
 
 
 
 
// 2021.11.12 


/*
	if{......}     这是单分支 
	if{......}else{.....}     这是双分支 
*/ 

// 两个单分支写 输入三个数输出最大数 
//#include<stdio.h>
//int main(){
//	int a,b,c,m;
//	
//	scanf("%d%d%d",&a,&b,&c);
//	m=a;
//	if(a<b){
//		m=b;
//		
//	} 
//	if(b<c){
//		m=c;
//		
//	}
//	printf("%d",m);
//		 
//	return 0;
//} 




// 一个单分支，一个双分支写 输入三个数输出最大数
//#include<stdio.h>
//int main(){
//	int a,b,c;
//	scanf("%d%d%d",&a,&b,&c);
//	if(a>b&&a>c){
//		printf("%d",a);
//		return 0;
//	}
//	
//	if(b>c){
//		printf("%d",b);
//	}
//	else{
//		printf("%d",c);
//	}
//		 
//	return 0;
//} 


// 小球反弹 
//#include<stdio.h> 
//int main(){
//	int i,c;
//	float a,b;.
//	scanf("%f%d",&a,&c);
//	
//	for(i=1;i<=c;i++){
//		a=a/2;
//		b+=a;	
//	}
//	printf("%.2f  %.2f",a,b+c);
//	
//	return 0;
//}


// 九九乘法表 
//#include<stdio.h>
//int main(){
//	int i,j;
//	for(i=1;i<=9;i++){
//		for(j=1;j<=i;j++){
//			printf("%d*%d=%d,",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}









// 指针 
//#include<stdio.h>
//int main(){
//	unsigned char str[]="hello!";
//	unsigned char *pstr=str;
//	
//	
//	while((*pstr))
//	{
//		printf("%c     ",(*pstr++));
//	}
//	
//	
//	return 0;
//} 




// 输入 abcdef123456   ，输出123456abcdef 
//#include<stdio.h>
//int main(){
//	int q=0;
//	char aa[72354886];
//	scanf("%s",&aa);
//	char *pstr=aa;
//	
//	while((*pstr))
//	{
//		
//		printf("%c\n",(*pstr++));
//	}
//	return 0;
//} 


// 字母数字倒序 
//#include<stdio.h>
//#include<string.h>

//int main(){
//	int i;
//	char str[30];
//	scanf("%s",&str);
//	for(i=strlen(str)-1;i>=0;i--){
//    	printf("%c ",str[i]); 
//	}
//	
//	return 0;	
//}
























































