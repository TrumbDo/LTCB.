#include <stdio.h>
int fibonacci(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    return fibonacci( n - 1 ) + fibonacci( n - 2);
}
int main()
{
    int n;
    printf("nhập vị trí phần tử fibonacci cần tìm : ");
    scanf("%d", &n);
    printf("giá trị của phần tử thứ %d trong dãy fibonacci là : %d\n", n, fibonacci(n));
    return 0;
}