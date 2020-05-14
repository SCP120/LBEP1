#include<stdio.h>
int main(){
	int n;
	float s;
	printf("nhap n: ");
	scanf("%d",&n);
	for(int a=1;a<=n;a++){
		s=s+1/float(a);
	}printf("%f",s);
}
