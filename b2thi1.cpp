#include<stdio.h>
#include<string.h>
void NhapChuoi(char s1[]){
	printf("nhap chuoi: ");
	scanf("%s",s1);
}



int main(){
	char s1[100];
	float a=0,e=0,i=0,o=0,u=0,l=0;
	NhapChuoi(s1);
	for (int i=0;i<100;i++){
		if(s1[i]=='a'){
			a++;
			l++;
		}
		if(s1[i]=='e'){
			e++;
			l++;
		}
		if(s1[i]=='i'){
			i++;
			l++;
		}
		if(s1[i]=='o'){
			o++;
			l++;
		}
		if(s1[i]=='u'){
			u++;
			l++;
		}
	}
	strlen(s1);
	int n=strlen(s1);
	l=n-l;
	printf("a=%.0f,e=%.0f,i=%.0f,o=%.0f,u=%.0f,rest=%.0f  \n",a,e,i,o,u,l);
	
	e=(e/n)*100;
	a=(a/n)*100;
	i=(i/n)*100;
	o=(o/n)*100;
	u=(u/n)*100;

	printf("a=%.0f %,e=%.0f ,i=%.0f %,o=%.0f %,u=%.0f %",a,e,i,o,u);
	
	
}
