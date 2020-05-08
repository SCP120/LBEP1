#include<stdio.h>
#include <cmath>
int main(){
	float a,b,c;
	float e,h,f,g,d;
	printf("nhap a,b,c \n");
	printf("a= ");
	scanf("%f",&a);
	printf("b= ");
	scanf("%f",&b);
	printf("c= ");
	scanf("%f",&c);
	if(a==0){
		if(b!=0){
		d=(-c)/b;
		printf("nghiem cua phuong trinh la: %.2f",d);}else{
			printf("phuong trinh nay vo so nghiem");
		}
	}else{e=b*b-4*a*c;
	if(e==0){d=-b/2*a;
	printf("nghiem cua phuong trinh la: %.2f ",d);
	}else{if(e>0){
		h=sqrt(e);
		f= (-b-h)/(2*a);
		g= (-b+h)/(2*a);
		printf("phuong trinh co 2 nghiem \n");
		printf("nghiem dau tien la xap xi: %.1f \n",f);
		printf("nghiem con lai la xap xi: %.1f \n",g);
	}else{printf("phuong trinh nay vo nghiem");}
	}
	}
	
}
