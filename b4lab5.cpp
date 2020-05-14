#include<stdio.h>
#include<math.h>
int main(){
	int a;
	printf("nhap so nguyen to: ");
	scanf("%d",&a);
	for(int b=1;b<=sqrt(a);b++){
		if(a%b==0){
			printf("day khong phai so nguyen to: ");
			
		}else{printf("day la so nguyen to\n");
		}
	}
}
