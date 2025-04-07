#include <stdio.h>
int main()
{
    int a[5] = {1,2,5,7,9};
    int b[5] = {0,3,4,6,8};
    int c[10];
    int j = 0, k = 0;
    for(int i = 0; i < 10; i++)
    {
        if(k < 5 && (j >= 5 || a[j] > b[k]))
        {
            c[i] = b[k];
            k++;
        }
        else
        {
            c[i]=a[j];
            j++;
        }
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}