#include <stdio.h>
#include <math.h>
int tam_giac(float a,float b,float c) {
    if(a + b > c && a + c > b && b + c > a )
        return 1;
    else 
        return 0;
}
int vuong(int a, int b, int c){
    if(pow(a,2) == pow(b,2) + pow(c,2) || pow(b,2) == pow(a,2) + pow(c,2) || pow(c,2) == pow(b,2) + pow(a,2))
       return 1;
    else 
       return 0;
}
int deu(int a, int b, int c){
    if(a == b && a == c)
       return 1;
    else 
       return 0;
}
int can(int a, int b, int c){
    if(a == b || a == c || c == b)
       return 1;
    else 
       return 0;
}
int main(){
    float a, b, c, P, S, C;
    printf("nhập lần lượt ba cạnh của tam giác:\n");
    scanf("%f %f %f", &a, &b, &c);
    if(tam_giac(a, b, c)) {
        if(vuong(a , b, c) && can(a ,b ,c))
           printf("la tam giac vuong can\n");
        else if(vuong(a, b, c))
           printf("la tam giac vuong\n");
        else if(deu(a , b, c))
           printf("la tam giac deu\n");
        else if(can(a ,b ,c))
           printf("la tma giac can\n");
        else
           printf("la tam giac thuong\n");
        C = a+b+c;
        P = C/2;
        S = sqrt(P*(P-a)*(P-b)*(P-c));
        printf("dien tich :%.2f\n", S);
        printf("chu vi :%.2f\n", C);
    } else 
        printf("không là tam giác\nn");
    return 0;
}