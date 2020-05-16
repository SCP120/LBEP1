#include<stdio.h>
#include<math.h>
int main(){
	int a[100],n,b=0;
	float c;
	printf("nhap so trong mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("nhap mang: a[%d] ",i);
		scanf("%d",&a[i]);
		if(a[i]%2==0){
		 continue;
		}if(i%2!=0){continue;
		}
			c=(c+a[i]);
			b=b+1;
	}c=c/b; 
	printf("TBC cua mang la: %.2f",c);
}
