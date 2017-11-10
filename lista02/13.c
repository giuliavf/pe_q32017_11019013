#include <stdio.h>

int MDC(int m, int n)
{
    if (n==0) return m;
    return MDC(n,m % n);
}

int main ()
{
    int n,m;

    scanf("%d %d",&m,&n); 


    printf("%d\n",MDC(m,n)); 
    return 0;
}
