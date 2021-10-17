#include <stdio.h>

#define N 100
int a[N], n, k;

void solution(){
    for(int i = 1; i <= k; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

int try(int i){
    for(int v = a[i - 1] + 1; v <= n - k + i; v++){
        a[i] = v;
        if(i == k){
            solution();
        }
        else try(i + 1);
    }
}

int main(){
    a[0] = 0;
    printf("Enter length: ");
    scanf("%d", &n);
    printf("Enter k: ");
    scanf("%d", &k);
    try(1);
    return 0;
}