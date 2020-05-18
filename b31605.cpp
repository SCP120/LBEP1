#include<stdio.h>
int main(){
	int a[100],n,b,e[100];
	printf("nhap so trong mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("nhap mang a[%d]: ",i);
		scanf("%d",&a[i]);
		
		for(int d=0;d<i;d++){
			for(;e[d]==a[i];){
			printf("bi trung,xin nhap lai so %d : ",i);
			scanf("%d",&a[i]);
			}
		}
	}printf("nhap dung");
}
