#include <stdio.h>
int fibonacci(int n)
{
    if(n == 1) return 0;
    if(n == 2) return 1;
    int f1=0,f2=1,f;
    for(int i  = 2; i < n ; i++)
    {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
    }
    return f;
}
int main()
{
    int n;
    printf("nhập số nguyên dương bất kì :");
    scanf("%d", &n);
    printf(" số thứ %d của dãy fibonacci là :%d\n", n, fibonacci(n));
    return 0;
}