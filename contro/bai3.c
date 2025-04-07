#include <stdio.h>
#include <stdlib.h>
void max(int *a)
{
    int max = *a;
    for(int i = 0; i < 10; i++)
    {
        if(max < *(a + i)) max = *(a + i);
    }
    printf("%d\n", max);
}
void min(int *a)
{
    int min = *a;
    for(int i = 0; i < 10; i++)
    {
        if(min > *(a + i)) min = *(a + i);
    }
    printf("%d\n", min);
}
int main()
{
    int *a = (int*)malloc(10*sizeof(int));
    if (a == NULL) {
        printf("Không đủ bộ nhớ!\n");
        return 1;
    }    
    printf(" nhập các phần tử của mảng :\n");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", a+i);
    }
    printf("giá trị lớn nhất của mảng là : ");
    max(a);
    printf("giá trị nhỏ nhất của mảng là : ");
    min(a);
    free(a);
    return 0;
}