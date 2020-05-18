#include<stdio.h>
int main(){
	int a[100],n,b=0;
	float c;
	printf("nhap so trong mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("nhap mang a[%d]: ",i);
		scanf("%d",&a[i]);}
		
		int max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max){
		max=a[i];
	}
	}
		int min=max;
	for(int i=0;i<n;i++){
		if(a[i]>=0&&min>0){
		if(a[i]<min){
		min=a[i];
	}
	} 
	}printf(" so duong nho nhat trong mang la: %d",min);
}
