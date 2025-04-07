#include <stdio.h>
int main() {
    int a[6]={4,2,6,5,3,1};
    for(int j = 0; j < 6; j++){
        int min = j;
        for(int i = j + 1;  i < 6; i++){
           if(a[min] > a[i]){
               min = i;
           }
        }
        int tmp = a[j];
        a[j]=a[min];
        a[min]=tmp;
    }
    for(int i = 0; i < 6 ; i++) {
        printf("%d", a[i]);
    }
}