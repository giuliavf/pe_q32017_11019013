#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

void f1(ulint *a, ulint *b)
{
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

void f2(ulint *a, ulint *b)
{
    if (*a > *b) {
        *a ^= *b;
        *b ^= *a;
        *a ^= *b;
    }
}

int main(void)
{
    clock_t tempo_init, tempo_fim;
    double tempo_gasto;
    
    tempo_init = clock();
    for (ulint i=0; i<BIGNUM; i++) {
        for (ulint j=0; j<BIGNUM; j++) {
            ulint k = i,l = j;
            f1(&i,&j);
            printf("%ld %ld\n",i,j);
            i = k;
            j = l;
        }
    }
    tempo_fim = clock();
    tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
    printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);
    
    tempo_init = clock();
    for (ulint i=0; i<BIGNUM; i++) {
        for (ulint j=0; j<BIGNUM; j++) {
            ulint k = i,l = j;
            f2(&i,&j);
            printf("%ld %ld\n",i,j);
            i = k;
            j = l;
        }
    }
    tempo_fim = clock();
    tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
    printf("Tempo gasto na versao bitwise: %lf\n",tempo_gasto);
    
    return 0;
}
