#include<stdio.h>
#include<string.h>

void NhapChuoi(char str[]){
	printf("nhap chuoi: ");
	scanf("%s",str);
}
void KTC(char str[],char str1[]){
	if(strstr(str,str1)!=NULL){
		printf(" %s chua chuoi %s",str,str1);
	}else{
		printf("%s khong co trong chuoi %s",str,str1);
	}
	
}
int main(){
	char a[100],b[100];
	NhapChuoi(a);
	NhapChuoi(b);
	KTC(a,b);
}
