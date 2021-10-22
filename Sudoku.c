#include <stdio.h>

int x[9][9] = {0}, r, c;

void solution(){
    for(int i = 0; i <= 9; i++){
        for(int j = 0; j <= 9; j++){
            printf("%d  ", x[i][j]);
        }
        printf("\n");
    }
}

void check(int v, int r, int c){
    for(int i = 0; i <= r - 1; i++){
        if(v == x[r][i]){
            return 0;
        }
    }
    for(int j = 0; j <= c - 1; j++){
        if(v == x[j][c]){
            return 0;
        }
    ]
    int I = r / 3;
    int J = c / 3;
    int i = r - 3 * I;
    int j = c - 3 * J;
    for(int i1 = 0; i1 <= i - 1; i1++){
        for(int j1 = 0; j1 <= 2)
    }
}

void try(int r, int c){
    for(int v = 1; v <= 9; v++){
        if(check(v, r, c)){
            x[r][c] = v;
            if(r == 8 && c == 8){
                solution();
            }
            else if(c == 8 && r != 8){
                try(r + 1, 0);
            }
            else try(r + 1, c + 1);
        }
    }
}
