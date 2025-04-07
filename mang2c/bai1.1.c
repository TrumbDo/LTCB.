#include <stdio.h>
void in(int a[][3])
{
    for(int i = 0; i < 9; i++)
    {
        if(i % 3 == 0 ) printf("\n");
        printf("%d ", *((int*)a + i));
    }
    printf("\n");
}
int main()
{
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3] = {{3,2,5},{5,4,7},{6,5,9}};
    printf("Ma trận A :\n");
    in(a);
    printf("Ma trận B :\n");
    in(b);
    return 0;
}