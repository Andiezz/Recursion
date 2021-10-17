#include <stdio.h>

#define N 100
int a[N], n;

void solution(){
    for(int i = 1; i <= n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

int try(int k){
    for(int v = 0; v < 2; v++){
        if(a[k - 1] + v < 2){
            a[k] = v;
            if(k == n){
                solution();
            }
            else{
                try(k + 1);
            }
        }
    }
}

int main(){
    printf("No bit 1 right next to another\n");
    printf("Enter the string length: ");
    scanf("%d", &n);
    try(1);
}