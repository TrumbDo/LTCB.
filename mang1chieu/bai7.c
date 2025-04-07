#include <stdio.h>
int main()
{
    int n;
    printf("nhập số lượng phần tử của mảng :");
    scanf("%d", &n);
    int a[n];
    printf("nhập %d số vào mảng :\n", n);
    for(int i = 0; i< n ; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++)
    {
        int min = i;
        for(int j = i + 1; j < n; j++)
        {
            if(a[min] > a[j])
            {
                min = j;
            }
        }
        int tmp = a[i];
        a[i] =  a[min];
        a[min] = tmp; 
    }
    printf("mảng sau khi đã sắp xếp :");
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}