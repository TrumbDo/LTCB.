#include <stdio.h>
int main()
{
    int a[] = {2,-1,5,6,-7,9,1,-4,-3};
    int n = sizeof(a)/sizeof(0);
    printf("mảng trước khi thay thế các phần tử âm bằng 0 là :\n");
    for(int i = 0 ; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for(int i = 0; i < n; i++)
    {
        if(a[i] < 0 )
        a[i] = 0;
    }
    printf("mảng sau khi thay thế các phần tử âm bằng 0 là :\n");
    for(int i = 0 ; i < n; i++)
    {
    printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}