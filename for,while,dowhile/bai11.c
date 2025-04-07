#include <stdio.h>
void nhi_phan(int n)
{
    int binarynum[32];
    int i = 0;
    while(n>0)
    {
        binarynum[i] = n % 2;
        n /= 2;
        i++;
    }
    printf("hệ 2 : ");
    for(int j = i - 1; j >= 0; j--)
    {
        printf("%d", binarynum[j]);
    }
    printf("\n");
}
void bat_phan(int n)
{
    int octoralnum[32];
    int i = 0;
    while(n>0)
    {
        octoralnum[i] = n % 8;
        n /= 8;
        i++;
    }
    printf("hệ 8 : ");
    for(int j = i - 1; j >= 0; j--)
    {
        printf("%d", octoralnum[j]);
    }
    printf("\n");
}
void luc_thap_phan(int n)
{
    int hexanum[32];
    int i = 0;
    int tmp;
    while(n>0)
    {
        tmp = n % 16;
        if( tmp < 10 )
        {
            hexanum[i] = tmp + 48;
        }else
        {
            hexanum[i] = tmp + 55;
        }
            n /= 16;
            i++;
    }
    printf("hệ 16 : ");
    for(int j = i - 1; j >= 0; j--)
    {
        printf("%c", hexanum[j]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("nhập một số nguyên dương :");
    scanf("%d", &n);
    nhi_phan(n);
    bat_phan(n);
    luc_thap_phan(n);
    return 0;
}