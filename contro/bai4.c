#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int min, int i)
{
    int tmp = *(a+min);
    *(a+min) = *(a+i);
    *(a+i) = tmp;
}
void sort(int *a,int size)
{
    for(int i = 0; i < size; i++)
    {
       int min = i;
       for(int j = 1 + i; j < size; j++)
       {
            if(*(a + min) > *(a + j))
            {
                min = j;
            }
       }
       swap(a,min,i);
    }
}
int main()
{
    int size;
    printf("nhập kích thước của mảng a : ");
    scanf("%d", &size);
    int *a = (int*)malloc(size*sizeof(int));
    if (a == NULL) {
        printf("Không đủ bộ nhớ!\n");
        return 1;
    }    
    printf("nhập phần tử của mảng :\n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", a + i);
    }
    sort(a,size);
    for(int i = 0; i < size; i++)
    {
        printf("%d ", *(a+i));
    }
    free(a);
    return 0;
}