#include<stdio.h>  
#include<conio.h>  

int main()  
{  
 int n1=0,n2=1,n3,i,a;  
  
 printf("nhap so n:  ");  
 scanf("%d",&a);   
  
 for(i=2;n3<a;i++) 
 {  
  n3=n1+n2;  
  n1=n2;  
  n2=n3;
  }printf("so gan nhat voi so n la:",n3);
}
 
