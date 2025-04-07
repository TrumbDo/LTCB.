#include <stdio.h>
int main(){
    int n, gt = 1;
    printf("nhập soó nguyên bất kì :\n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        gt *= i;
    }
    printf("giai thừa của %d là %d", n, gt);
    return 0;
}