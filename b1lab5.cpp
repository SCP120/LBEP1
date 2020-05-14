#include<stdio.h>
int main(){
	int n;
	int e=1;
	printf("nhap giai thua: ");
	scanf("%d",&n);
	for(int a=1;a<=n;a++){
			e=a*e;
	}printf("giai thua cua %d la: %d",n,e);
}
