#include <stdio.h>
int main(){
	int a,b,d=0;
	printf("nhap a: ");
	scanf("%d",&a);
	printf("nhap b: ");
	scanf("%d",&b);
	if(a>0&&b>0){
		for(;a>=b;){
			printf("nhap sai,xin nhap lai/n");
			printf("nhap a: ");
			scanf("%d",&a);
			printf("nhap b: ");
			scanf("%d",&b);
		}for(int n=a;n<=b;n++){
			d=d+n;
		}printf("tong tu a->b la: %d",d);
		
	}else{printf("day khong phai so nguyen duong");
	}
}
