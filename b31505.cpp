#include<stdio.h>
int main(){
	int a,b,c;
	c=0;
	b=0;
	printf("nhap so nguyen duong: ");
	scanf("%d",&a);
	if(a>=0){
		for(;a!=0;){
		b=a%10;
		a=a/10;
		c=c+b;
		}printf("tong cac chu so la: %d",c);
		
	}else{printf("day khong phai so nguyen duong");
	}
}
