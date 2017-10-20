#include <stdio.h>

float vol(float larg, float comp, float alt){    
    float v = larg*comp*alt;
    return v;
}

main(){
    float l,c,h;
    scanf("%f %f %f",&l,&c,&h);

    float y = vol(l,c,h);
    printf("%0.2f\n",y);    
}
