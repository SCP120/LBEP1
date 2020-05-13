#include<stdio.h>
int main(){
	int a;
	printf("nhap so tu nhien: ");
	scanf("%d",&a);
	for(;a>0;){
		a=a-1;
		float n=a%3;
		if(n!=0){
		}else{printf("cac so tu nhien chia het cho 3 la: %d \n",a);
	}
	}
}
