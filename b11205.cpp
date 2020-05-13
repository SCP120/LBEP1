#include<stdio.h>
int main(){
	int a,b,c;
	printf("nhap 3 canh cua tam giac \n");
	printf("nhap canh dau tien: ");
	scanf("%d",&a);
	printf("nhap canh thu hai: ");
	scanf("%d",&b);
	printf("nhap canh con lai: ");
	scanf("%d",&c);
	if(a+b>c&&a+c>b&&b+c>a){
		printf("day la 3 canh cua tam giac");
	}else{
		for(;a+b<c||a+c<b||b+c<a||c-(a+b)==0||b-(a+c)==0||a-(b+c)==0;){
			printf("day khong phai la tam giac,xin nhap lai \n");
			printf("nhap canh dau tien: ");
			scanf("%d",&a);
			printf("nhap canh thu hai: ");
			scanf("%d",&b);
			printf("nhap canh con lai: ");
			scanf("%d",&c);
		}printf("day la 3 canh cua tam giac");
	}

}

