#include <stdio.h>
#include <math.h>
int main() {
    double R, S, V;
    const double PI = 3.141592653589793;
    scanf("%lf", &R);
    S = 4 * PI * pow(R,2);
    V = ( (float) 4/3 ) * PI * pow(R,3);
    printf("dien tich :%.2f\n", S);
    printf("the tich :%.2f\n", V);
    return 0;
}