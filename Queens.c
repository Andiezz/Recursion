#include <stdio.h>

#define MAX 100
int a[MAX], n;

void solution(){
    for(int i = 1; i <= n; i++){
        printf("%d   ", a[i]);
    }
    printf("\n");
}

int check(int v, int k){
    for(int i = 1; i <= k - 1; i++){
        if(a[i] == v) return 0;
        if(a[i] + i == v + k) return 0;
        if(a[i] - i == v - k) return 0;
    }
    return 1;
}

void try(int k){
    for(int v = 1; v <= n; v++){
        if(check(v, k)){
            a[k] = v;
            if(k == n){
                solution();
            } 
            else try(k + 1);
        }
    }
}

int main(){
    printf("Enter the number of square: ");
    scanf("%d", &n);
    try(1);
    return 0;
}
