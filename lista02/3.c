#include <stdio.h>
#include <math.h>

main(){
    double a = 1.0, b = 1.0/sqrt(2), t = 1.0/4.0, p = 1.0,a1,PI,n,m;
    int i;

    for(i = 0;i < 10; i++){
        a1 = (a+b)/2.0;
        b = sqrt (a*b);
        n = (a - a1);
        m = pow(n,2);
        t = t - p*m;
        p = 2.0*p;
        a = a1;
    }

    double k = (a+b), j = pow (k,2);

    PI = j/(4.0*t);

    printf("%0.20lf\n",PI);    
}
