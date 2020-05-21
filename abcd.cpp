#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,j,b,s;
	int *a;
	printf("nhap cac so nguyen: ");
	scanf("%d",&n);
	a=(int *)calloc(n,sizeof(int));
	for( i=0;i<n;i++){
		printf("a[%d]= ",i);
		scanf("%d",(a+i));
	
	}
	int n1=0;
	printf("nhap so nguyen thu hai: ");
	scanf("%d",&n1);
	int tong=n1+n;
	a=(int*)realloc(a,tong*sizeof(int));
	for(i=n;i<tong;i++){
		printf("a[%d]= ",i);
		scanf("%d",(a+i));
	}
	
	for(j=1;j<tong;j++){
		b=j-1;
		s=*(a+j);
		while((b>=0)&&(s<*(a+b))){
			*(a+b+1)=*(a+b);
			b--;
		}
		*(a+b+1)=s;
	}
	for(j=0;j<tong;j++){
		printf("%5d",*(a+j));
	}
}
