#include <stdio.h>

int fatorial(int x)
{
    int i;
    for (i = x - 1;i > 0;i--) {
        x = x * i;
    }
}

int coef_bin(int n, int k)
{
    int p1 = fatorial (n);
    int p2 = fatorial (k);
    int p3 = fatorial (n-k);

    return p1/(p2*p3);
}

int main(){
    int n,k;

    scanf("%d %d",&n,&k);

    printf ("%d\n",coef_bin(n,k));   
    return 0;    
}
