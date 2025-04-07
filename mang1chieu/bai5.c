#include <stdio.h>
int main()
{
    int n, x, cnt = 0;
    printf("nhập số lượng phần tử của mảng :");
    scanf("%d", &n);
    int a[n];
    printf("nhập số :\n");
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("nhập 1 số bất kì :");
    scanf("%d", &x);
    for(int i = 0; i < n; i++)
    {
        if(x == a[i])
        cnt++;
    }
    printf("số %d suất hiện %d lần trong mảng", x, cnt);
    return 0;
}