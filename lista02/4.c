#include <stdio.h>
#include <math.h>

float opcao_A(float x, float y)
{
    return x + y;
}

float opcao_B(float x, float y)
{
    return x - y;
}

float opcao_C(float x, float y)
{
    return x * y;
}

float opcao_D(float x, float y)
{
    return x / y;
}

float opcao_E(float x, float y)
{
    return pow(x,y);
}


float calculadora(int opc, float x, float y)
{
    switch (opc) {
        case 1:
            return opcao_A(x,y);
        case 2:
            return opcao_B(x,y);
        case 3:
            return opcao_C(x,y);
        case 4:
            return opcao_D(x,y);
        case 5:
            return opcao_E(x,y);
        default:
            printf("Opcao invalida\n");
    }
}

int main()
{
    int opc;
    float a,b;

    scanf("%d %f %f",&opc,&a,&b);

    printf("%f\n",calculadora(opc,a,b));

    return 0;
       
}
