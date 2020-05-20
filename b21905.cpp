#include<stdio.h>
int main(){
	int a[4][3],b[4][3];
	float c;
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("----------------------------- \n");
		for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
			
		}
	}
		for(int i=0;i<4;i++){
			for(int j=0;j<3;j++){
				a[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("tong cua 2 ma tran la: \n");
	for(int i=0;i<4;i++){
			for(int j=0;j<3;j++){
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
}
