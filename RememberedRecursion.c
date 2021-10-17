#include <stdio.h>

#define MAX 20

int m[MAX][MAX];

int C(int k, int n){
    if(k == 0 || k == n){
        m[k][n] = 1;
    }
    else{
        if(m[k][n] < 0){
            m[k][n] = C(k - 1, n - 1) + C(k, n - 1);
        }         
    }
    return m[k][n];
}

int main(){
    int k, n;
    for(int k = 0; k < MAX; k++){
        for(int n = 0; n < MAX; n++){
            m[k][n] = -1;
        }
    }
    printf("Chinh hop chap k cua n\n");
    printf("Nhap k: ");
    scanf("%d", &k);
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Ket qua: %d\n", C(k, n));
    return 0;
}