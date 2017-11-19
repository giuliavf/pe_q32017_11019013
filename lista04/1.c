#include <stdio.h>
#include <math.h>

typedef struct ponto {
    float x;
    float y;
    float z;
} ponto;

float distancia(ponto p1, ponto p2)
{    
    float dist, soma;
    soma = pow((p2.x - p1.x),2);
    soma += pow((p2.y - p1.y),2);
    soma += pow((p2.z - p1.z),2);
    dist = sqrt(soma);
    
    return dist;
}

int main()
{
    ponto p1, p2;
    scanf("%f, %f, %f", &(p1.x), &(p1.y), &(p1.z));
    scanf("%f, %f, %f", &(p2.x), &(p2.y), &(p2.z));
    
    printf("%.2f\n",distancia(p1,p2));    
        
    return 0;
}

/*
scanf("%f %f %f", &(p1.x), &(p1.y), &(p1.z));

*/
