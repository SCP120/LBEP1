#include<stdio.h>
int main(){
	int a,b,c;
	c=0;
	b=0;
	printf("nhap so nguyen duong: ");
	scanf("%d",&a);
	if(a>=0){
		for(;a!=0;){
		a=a/10;
		c=c+1;
		}printf("day la so co %d chu so",c);
		
	}else{printf("day khong phai so nguyen duong");
	}
}
