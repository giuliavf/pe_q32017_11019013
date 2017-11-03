#include <stdio.h>
#include <stdlib.h>

void le(int m[][3])
{
    int i,j;
    
    for (i = 0;i < 3;i++) {
        for (j = 0;j < 3; j++) {
            scanf("%d",&m[i][j]);
        }
    }
}

void imprime(int **m)
{
    int i,j;
    
    for (i = 0;i < 3;i++) {
        for (j = 0;j < 3; j++) {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}


int ** transpoe(int m1[][3])
{
    int ** m = (int**)malloc(sizeof(int*)*3);
    int i,j;
    
    for (i = 0;i < 3;i++) {
        m[i] = (int*)malloc(sizeof(int)*3);
        for (j = 0;j < 3; j++) {
            m[i][j] = m1[j][i];
        }
    }
    
    return m;   
}

int main() 
{
    int m1[3][3];
    
    le(m1);
    
    int ** m2 = transpoe(m1);
    
    imprime(m2);
    
    int i;
    for (i = 0;i < 3;i++) {
        free(m2[i]);
    }
    free(m2);
        
    return 0;
}
