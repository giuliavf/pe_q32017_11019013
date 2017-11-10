#include <stdio.h>

double descontos(int sal, int faltas)
{
    double tax;
    tax = 0.05 * sal * (double)faltas;
    return tax;
}

double acrescimos(int sal, int acresc)
{
    double tax,k;
    k = 40 + (double)sal/160;
    tax = k * (double)acresc;
    return tax;
}

double salario(int sal,int faltas,int acresc)
{
    double des,acr,nov_sal;

    des = descontos(sal,faltas);
    acr = acrescimos(sal, acresc);
    nov_sal = (double)sal - des + acr;

    return nov_sal;
}

int main()
{
    int cargo,faltas,acresc,sal,nov_sal;

    scanf("%d %d %d",&cargo,&faltas,&acresc);

    switch(cargo) {
        case 1: 
            sal = 10000;            
            break;
        case 2: 
            sal = 8000;            
            break;
        case 3: 
            sal = 5000;            
            break;
        case 4: 
            sal = 3000;            
            break;
        case 5: 
            sal = 2000;            
            break;
    }

    nov_sal = salario(sal,faltas,acresc);

    printf("%d\n",nov_sal);    
}
