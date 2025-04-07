#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a = (int*)malloc(10*sizeof(int));
    if (a == NULL) {
        printf("Không đủ bộ nhớ!\n");
        return 1;
    }
    
    for(int i = 0; i < 10; i++)
    {
        *(a + i) = i;
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", *( a + i));
    }
    free(a);
    return 0;
}