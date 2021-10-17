#include <stdio.h>

#define N 100
int n, a[N];

void solution(){
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

int try(int k){
    for(int v = 0; v < 2; v++){
        a[k] = v;
        if(k == n - 1){
            solution();
        }
        else try(k + 1);
    }
}

int main(){ 
    printf("Enter the string length: ");
    scanf("%d", &n);
    try(0);
    return 0;
}