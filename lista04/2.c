#include <stdio.h>
#include <math.h>

typedef struct cronometro {
    int minutos;
    int segundos;
    int decimos;
} tempo;

void desconverte(double valor)
{
    tempo t;
    t.minutos = 0;
    t.segundos = 0;
    int negativo = 0;
    
    if (valor < 0.0) {
        negativo = 1;
        valor *= -1;
    }
    
    while (valor >= 60) {
        t.minutos++;
        valor -= 60;
    }    
    while (valor >= 1) {
        t.segundos++;
        valor -= 1;
    }   
    
    double parcial = valor * 100;  
    t.decimos = parcial + 1;  
        
    if (negativo == 0) {
        printf("%dm %ds %d\n", (t.minutos), (t.segundos), (t.decimos));
    } else {
        printf("-%dm %ds %d\n", (t.minutos), (t.segundos), (t.decimos));
    }
}

double converte(tempo t)
{
    return t.minutos * 60 + t.segundos + (t.decimos)/100.0;
}

double diferenca(tempo t1, tempo t2)
{    
    double v1,v2;
    
    v1 = converte(t1);
    v2 = converte(t2);
    
    return v2 - v1;
}

int main()
{
    tempo t1, t2;
    scanf("%dm %ds %d", &(t1.minutos), &(t1.segundos), &(t1.decimos));
    scanf("%dm %ds %d", &(t2.minutos), &(t2.segundos), &(t2.decimos));
    
    desconverte(diferenca(t1,t2));    
        
    return 0;
}
