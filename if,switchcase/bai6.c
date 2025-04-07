#include <stdio.h>
int main() {
    double a, b, c, d, e, f, x, y;
    printf("phương trình có dạng :\nax + by = c \ndx + ey = f \n"); 
    printf("nhập a, b, c, d, e, f lần lượt theo thứ tư: \n");
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e ,&f);
    if(a*e == d*b) {
        printf("vô số nghiệm");
    }else {
        y = (a*f-d*c)/(a*e-d*b);
        x = (c-b*y)/a;
        printf("x=%lf \ny=%lf", x, y);
        return 0;
    }
}