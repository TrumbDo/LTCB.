#include <stdio.h>
int gt(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n*gt(n-1);
}
int main()
{
    int n;
    printf("nhập n để tính giai thừa : ");
    scanf("%d", &n);
    printf("%d! có giá trị là : %d", n, gt(n));
    return 0;
}