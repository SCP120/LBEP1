#include<stdio.h>
#include<string.h>

void NhapMang(char str[],int n){
	char str1[100];
	printf("nhap cac so trong mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("nhap chuoi: ");
		scanf("%s",str1);
		strcat(str,str1);
	}
}

void SX(char a[]){
	int b,j,tmp,e;
	e=strlen(a);
	for(int j=1;j<e;j++){
		b=j-1;
		tmp=a[j];
		while((b>=0)&&(tmp<a[b])){
			a[b+1]=a[b];
			b--;
		}
			a[b+1]=tmp;
	}
	printf("%s",a);

}

int main(){
	char a[100];
	int n;
	NhapMang(a,n);
	SX(a);
}
