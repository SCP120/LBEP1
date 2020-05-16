#include<stdio.h>
#include<math.h>
int main(){
	int a[100],n,b=0,x;
	float c;
	printf("nhap so x: ");
	scanf("%d",&x);
	printf("nhap so trong mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("nhap mang: ");
		scanf("%d",&a[i]);
	}for(int i=0;i<n;i++){
		if(x!=a[i]){
			continue;
		}printf("day la so trong mang");
	}
}
