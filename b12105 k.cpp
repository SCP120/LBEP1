#include<stdio.h>
int main(){
	int n,c=0,e=1;
	int *p;
	printf("nhap so cac so nguyen: ");
	scanf("%d",&n);
	int a[n],b[n];
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
			b[c]=e;
			break;
		}
		}else
			e=0;
		}
		int max = 0;
	for(int c=0; c<n;c++){
		if (max < b[c])
            max = b[c];
	}
	printf("so luong cac so duong lien tiep nhieu nhat la: %d",max);
}
