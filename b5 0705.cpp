#include <stdio.h>
#include<math.h>
int main(){
	float a,b;
	float c,d;
	printf("nhap so dau tien: ");
	scanf("%f",&a);
	printf("nhap so thu hai ");
	scanf("%f",&b);
	if(a>=b){
		c=a/b;
		printf("%.0f chia %.0f = %.2f",a,b,c);
	}else{
		d=a*b;
		printf("%.0f nhan %.0f = %.2f",a,b,d);
	}
	
}
