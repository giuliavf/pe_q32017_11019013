#include <stdio.h>

double vol(double larg, double comp, double alt){    
    double v = larg*comp*alt;
    return v;
}

main(){
    double l,c,h;
    scanf("%lf",&l);
    scanf("%lf",&c);
    scanf("%lf",&h);

    double y = vol(l,c,h);
    printf("%lf\n",y);    
}
