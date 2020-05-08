#include<stdio.h>
int main(){
	int a,b,c;
	printf("nhap 3 so \n");
	printf("so dau tien: ");
	scanf("%d",&a);
	printf("so thu hai: ");
	scanf("%d",&b);
	printf("so thu ba: ");
	scanf("%d",&c);
	if(a<b){
		if(a<c){
			printf("%d la so nho nhat",a);
		}else{printf("%d la so nho nhat ",c);}
	}else{if(b<c){printf("%d la so nho nhat",b);
		}else{printf("%d la so nho nhat ",c);}
	}
	
}
