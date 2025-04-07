#include <stdio.h>
int gt(int n)
{
    int gt = 1;
    for(int i = 1; i <= n; i++)
    {
        gt *= i;
    }
    return gt;
}
int main()
{
    int n;
    double sum = 0;
    printf("nhập số nguyên bất kì :");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
       sum += (1.0/gt(i));
    }
    printf("ket qua :%.2lf\n", sum);
    return 0;
}