#include<stdio.h>
#include<conio.h>
int main(){ 
	int a[4][3],b[3][4],c;
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(int i=1;i<4;i++){
		for(int j=0;j<i;j++){
			c=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=c;
			
		}
		
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("%5d",a[j][i]);
		}
		printf("\n");
	}

}
