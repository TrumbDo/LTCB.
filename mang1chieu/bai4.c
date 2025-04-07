#include <stdio.h>
void minval(int a[], int n, int *tmp1, int *min)
{
    *min = a[0];
    *tmp1=0;
    for(int i = 1; i < n; i ++)
    {
        if( *min > a[i])
        {
            *min = a[i];
            *tmp1 = i;
        }
    }
}
void maxval(int a[], int n, int *tmp2, int *max)
{
    *max = a[0];
    *tmp2=0;
    for(int i = 1; i < n; i ++)
    {
        if( *max < a[i])
        {
            *max = a[i];
            *tmp2 = i;
        }
    }
}
int main()
{
    int a[] = {11,23,56,77,93,21,44,55};
    int n = sizeof(a)/sizeof(a[0]), min, max, tmp1, tmp2;
    minval(a, n, &tmp1, &min);
    maxval(a, n, &tmp2, &max);
    printf("phần tử nhỏ nhất của mảng a là %d, có vị trí a[%d]\n", min, tmp1);
    printf("phần tử lớn nhất của mảng a là %d, có vị trí a[%d]\n", max, tmp2);
    return 0;
}