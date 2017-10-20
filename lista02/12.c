#include <stdio.h>

int pascal (int n, int k) 
{
    if (k == 0 || k == n){
        return 1;
    }else {
        return pascal(n - 1, k - 1) + pascal(n - 1, k);
    }
}

int main()
{
    int n,k;

    scanf ("%d",&n);
    scanf ("%d",&k);

    int t = pascal (n,k);

    printf ("%d\n",t);   
    return 0;
}