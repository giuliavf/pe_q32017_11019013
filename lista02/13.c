#include <stdio.h>

int MDC (int m, int n){
    if (n==0) return m;
    return MDC (n,m % n);
}

int main (){
    int n,m,mdc;

    scanf("%d %d",&m,&n); 

    mdc = MDC(m,n);

    printf("%d\n",mdc); 
    return 0;
}
