#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,c=0,e=1;
	int *p;
	printf("nhap so cac so nguyen: ");
	scanf("%d",&n);
	int a[n];
	p=(int *)calloc(n,sizeof(int));
	for(int i=0;i<n;i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
		if(a[i]<0){
			e=0;
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]>=0){
			e=e+1;
			c++;
			for(;c<n;){
			*(p+c)=e;
			break;
		}
		}else
			e=0;
		}
		int max = 0;
	for(int c=0; c<n;c++){
		if (max < *(p+c))
            max = *(p+c);
	}
	printf("so luong cac so duong lien tiep nhieu nhat la: %d",max);
}

