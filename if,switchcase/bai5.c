#include <stdio.h>
#include <math.h>
int main(){
    double a, b, c, delta;
    scanf("%lf %lf %lf", &a, &b ,&c);
    delta = pow(b,2)-4*a*c;
    if(delta < 0) {
        printf("vo nghiem");
    }else if(delta == 0) {
        printf("x1 = x2 = %lf", -b/(2*a)); 
    } else {
        printf("x1=%lf \nx2=%lf\n", (-b + sqrt(delta)) / (2*a), (-b - sqrt(delta)) / (2*a));
    }
    return 0;
}