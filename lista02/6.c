#include <stdio.h>
#include <math.h>

double delta(double a, double b, double c)
{
    double k1, k2;
    k1 = b * b;
    k2 = k1 - 4*a*c;
    if (k2 < 0) return -k2;
    return k2;
}

double bask1(double a, double b, double c)
{
    double k1,k2,k3,k4,resp1;
    k1 = delta (a,b,c);
    k2 = sqrt(k1);
    k3 = -b + k2;
    k4 = 2*a;
    resp1 = k3/k4;
    return resp1;
}

double bask2(double a, double b, double c)
{
    double k1,k2,k3,k4,resp1;
    k1 = delta(a,b,c);
    k2 = sqrt(k1);
    k3 = -b - k2;
    k4 = 2*a;
    resp1 = k3/k4;
    return resp1;
}


int main()
{
    double a,b,c,r1,r2;

    scanf("%lf %lf %lf",&a,&b,&c);

    printf("%.2lf ",r1);       
    printf("%.2lf\n",r2);   

    return 0;
}
