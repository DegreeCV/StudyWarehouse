// 5003: 入门训练 序列求和
// 2021.11.24
int main(){
	double i,b,d;
	double a=1;
	scanf("%lf",&d);
	for(i=1;i<d;i++){
		a=a+(i+1);
	}
	printf("\n%.0lf",a);
	return 0;
}
