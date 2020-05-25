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

void NhapChuoi(char str[]){
	printf("nhap chuoi thu hai: ");
	scanf("%s",str);
}
void KTC(char str[],char str1[]){
	if(strstr(str,str1)!=NULL){
		printf(" %s co trong mang chuoi",str1,str);
	}else{
		printf("%s khong co trong mang chuoi f",str1,str);
	}
	
}
int main(){
	char a[100],b[100];
	int n;
	NhapMang(a,n);
	NhapChuoi(b);
	KTC(a,b);
}
