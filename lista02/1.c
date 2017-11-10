#include <stdio.h>

int par_impar(int n)
{
    if (n%2 == 0) return 0;
    return 1;  
}

int main()
{
    int n;
    scanf("%d",&n);
    
    printf("%d\n", par_impar(n));  
}
