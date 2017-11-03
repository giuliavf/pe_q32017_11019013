#include <stdio.h>
#include <stdlib.h>

void le(int * v, int n)
{
    int i;
    
    for (i = 0;i < n;i++) {
        scanf("%d",&v[i]);
    }
}

int cmpfunc(const void * a, const void * b) {
    return ( *(int*)a - *(int*) b);
}

double mediana(int * v, int n)
{
    qsort(v,n,sizeof(int),cmpfunc);
    
    int meio;
    if (n%2 != 0) {
        meio = n/2 + 1;
        return v[meio-1];
    } else {
        meio = n/2;
        double k = v[meio-1] + v[meio];
        return k/2;
    }    
}

int main()
{
    int tam;
    scanf("%d",&tam);
    
    int * v = malloc(tam * sizeof(int));
    le(v,tam);
    
    double med = mediana(v,tam);
    
    printf("%.2lf\n",med);
    
    free(v);
        
    return 0;
}
