#include <stdio.h>
#include <math.h>

float opcaoA (float x, float y)
{
    return x + y;
}

float opcaoB (float x, float y)
{
    return x - y;
}

float opcaoC (float x, float y)
{
    return x * y;
}

float opcaoD (float x, float y)
{
    return x / y;
}

float opcaoE (float x, float y)
{
    return pow(x,y);
}


float calculadora (int opc, float x, float y)
{
    switch (opc) {
        case 1:
            return opcaoA (x,y);
        case 2:
            return opcaoB (x,y);
        case 3:
            return opcaoC (x,y);
        case 4:
            return opcaoD (x,y);
        case 5:
            return opcaoE (x,y);
        default:
            printf("Opcao invalida\n");
    }
}

int main()
{
    int opc;
    float a,b;

    scanf("%d",&opc);
    scanf("%f",&a);
    scanf("%f",&b);


    printf("%f\n",calculadora(opc,a,b));

    return 0;
       
}
