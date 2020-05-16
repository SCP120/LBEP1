#include<stdio.h>
int main(){
	int a,b,c=0,d=0;
	printf("nhap so dau tien: ");
	scanf("%d",&a);
	printf("nhap so con lai: ");
	scanf("%d",&b);
	if(a==0||b==0){
		printf("UCLN cua 0 la 0");
	}
	for(;a!=b;){
		if(a>b){
			a=a-b;
		}else{
			b=b-a;
		}
	}printf("UCLN= %d",a);
	
}



