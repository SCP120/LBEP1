#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d;
    
    a=4000+4000*0.08;
    b=a+(a*0.08);
    c=b+(b*0.08);
    d=c+(c*0.08);
    
    printf("so tien sau 4 nam gui ngan hang la %.2f $ ",d);
}