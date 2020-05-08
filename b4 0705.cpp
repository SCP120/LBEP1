#include <stdio.h>
#include<math.h>
int main(){
	float a,b,c,p,h;
	float s;
	printf("nhap 3 canh a,b,c cua tam giac: \n");
	printf("a= ");
	scanf("%f",&a);
	printf("b= ");
	scanf("%f",&b);
	printf("c= ");
	scanf("%f",&c);
	if((a+b)>c){
		if((a+c)>b){
			if((b+c)>a){
				p=(a+b+c)/2;
				h=2*p;
				printf("chu vi tam giac la: %.2f \n",h);
				s=sqrt(p*(p-a)*(p-b)*(p-c));
				printf("dien tich cua tam giac la: %.2f",s);
			}else{printf("day khong phai tam giac, xin thu lai");}
		}else{printf("day khong phai tam gia, xin thu lai");}
	}else{printf("day khong phai tam gia, xin thu lai");}
	
}
