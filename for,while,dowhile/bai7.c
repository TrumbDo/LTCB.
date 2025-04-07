#include <stdio.h>
int main()
{
    int n;
    double sum = 0;
    printf("nhập soó nguyên bất kì :\n");
    scanf("%lf", &n);
    for(int i = 1; i <= n; i++)
    {
        sum += (1.0/i);
    }
    printf("ket qua %.2lf", sum);
    return 0;
}