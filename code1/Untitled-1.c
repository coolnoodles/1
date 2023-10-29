#include<stdio.h>
int main(){
    int i,j;
    double n,e=1,lei=1.0,a;
    scanf("%d",&n);
    for(i=1;lei>=n;i++){
        a=1;
        for(j=1;j<=i;j++)
        a*=j;
        lei=1/a*1.0;
       e+=lei;
    }
e+=lei;
    printf("%.10lf",e);


    return 0;
}