#include <stdio.h>
#include <stdlib.h>

void le(int n,int * v)
{
    int i;
    
    for (i = 0;i < n;i++) {
        scanf("%d",&v[i]);
    }
}

int cmpfunc(const void * a, const void * b) {
    return ( *(int*)a - *(int*) b);
}

void mediana(int n, int * v)
{
    qsort(v,n,sizeof(int),cmpfunc);
    
    int meio;
    if (n%2 != 0) {
        meio = n/2 + 1;
        printf("%.2lf\n",(double)v[meio-1]); 
    } else {
        meio = n/2;
        double k = v[meio-1] + v[meio];
        printf("%.2lf\n",k/2);
    }    
}

int main()
{
    int n;
    scanf("%d",&n);
    
    int * v = malloc(n * sizeof(int));
    le(n,v);
    
    mediana(n,v);   
    
    free(v);
        
    return 0;
}
