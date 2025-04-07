#include <stdio.h>
int main()
{
   int a[10], sum = 0;
   printf("nhập 10 số bất kì :\n");
   for(int i = 0; i < 10; i++)
   {
    scanf("%d", &a[i]);
    sum += a[i];
   }
   printf("ket qua :%d\n", sum);
   return 0;
}