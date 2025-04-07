#include <stdio.h>
int main()
{
    int n;
    printf("nhập số bất kì:");
    scanf("%d", &n);
    printf("các ước của %d là :", n);
    for(int i = 1; i <= n; i++)
    {
        if(n%i==0)
            printf("%d ", i);
    }
    return 0;
}