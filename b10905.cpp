#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	b=0;
	printf("nhap so nguyen: ");
	scanf("%d",&a);
	if(a>=-9999&&a<=9999){
	while(a>0||a<0){
		int c=a%10;
		b=b*10+c;
		a=a/10;
	}printf("so nghich dao la: %d",b);
	
	}else{printf("khong phai so 4 chu so");
	}
	
	
	
}
