#include <stdio.h>
#include <math.h>

float celParaFah (float n) // 1 -> 2
{
    float resp;
    resp = n * 1.8 + 32;
    return resp;
}

float celParaKel (float n) // 1 -> 3
{
    return n + 273.15;
}

float fahParaCel (float n) // 2 -> 1
{
    float resp;
    resp = n - 32;
    resp /= 1.8;
    return resp;
}

float fahParaKel (float n) // 2 -> 3
{
    float resp;
    resp = fahParaCel (n);
    resp = celParaKel (resp);
    return resp;
}

float kelParaCel (float n) // 3 -> 1
{
    return n - 273.15;
}

float kelParaFah (float n) // 3 -> 2
{
    float resp;
    resp = kelParaCel (n);
    resp = celParaFah (resp);
    return resp;
}

float decParaBin (float n) // 1 -> 2
{
    float resto, a = 0.0,resp = 0.0;
    while (n != 0) {
        resto = fmod (n,2);
        n /= 2.0;
        resp += resto * a;
        a *= 10.0;
    }
    return resp;
}

float binParaDec (float n) // 2 -> 1
{
    int a = 0; 
    float resto,resp = 0;
    while (n != 0) {
        resto = fmod (n,10);
        n /= 10.0;
        resp += resto * pow (2.0,a);
        a++;
    }
    return resp;
}

float converteTemperatura (int in, int out, float n)
{
    int opc;

    opc = in * 10 + out;

    switch (opc) {
        case 11:
            return n;
        case 12:
            return celParaFah (n);
        case 13:
            return celParaKel (n);
        case 21:
            return fahParaCel (n);
        case 22:
            return n;
        case 23:
            return fahParaKel (n);
        case 31:
            return kelParaCel (n);
        case 32:
            return kelParaFah (n);
        case 33:
            return n;
        default:
            printf("Opcao invalida\n");
    }
}

float converteBase (int in, int out, float n)
{
    int opc;

    opc = in * 10 + out;

    switch (opc) {
        case 11:
            return n;
        case 12:
            return decParaBin(n);
        case 21:
            return binParaDec(n);
        case 22:
            return n;
        default:
            printf("Valores invalidos\n");
    }
}

void conversor (int opc, int in, int out, float valor)
{
    float resp;
    switch (opc){
        case 1:
            resp = converteTemperatura (in,out,valor);
        case 2:
            resp = converteBase (in,out,valor);
    }
    printf("%.2f ",resp);

    if (opc == 1){
        if (out == 1) 
             printf("C\n");
        if (out == 2) 
             printf("F\n");
        if (out == 3) 
             printf("K\n");
     }
}

int main ()
{
    int tipo, in, out;
    float valor;

    scanf ("%d "%d "%d "%f",&tipo,&in,&out,&valor);

    conversor (tipo,in,out,valor);

    return 0;

}
