#include<stdio.h>
#include<string.h>
void NhapMang(char str1[]){
	printf("nhap chuoi: ");
	scanf("%s",str1);
}

void ConCat(char str1[],char str2[]){
	strcat(str1," ");
	strcat(str1, str2);
	printf("%s",str1);
}

int main(){
	char str1[100],str2[100];
	NhapMang(str1);
	NhapMang(str2);
	ConCat(str1,str2);
	return 0;
	
}
