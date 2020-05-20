#include<stdio.h>
int main(){
	int a[4][4],i=0,j=0;
	float b;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			b=float (a[0][0]+a[1][1]+a[2][2]+a[3][3])/4;
			
		}
	}
	printf("TBC %.2f",b);
}
