#include<stdio.h>
int main(){
	int a[100],n,b=0;
	int c;
	printf("nhap so trong mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("nhap mang: a[%d] ",i);
		scanf("%d",&a[i]);
		if(a[i]%2==0){
		 continue;
		}	c=a[i];
	}
	printf("so le cuoi cung la: %d",c);
}
