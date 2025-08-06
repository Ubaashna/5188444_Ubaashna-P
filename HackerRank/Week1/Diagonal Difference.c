#include <stdio.h>
#include <stdlib.h>

int diagonalDifference(int n, int a[][n]){
    int lr, rl = 0;
    for(int i=0;i<n;i++){
        lr+=a[i][i];
        rl+=a[i][n-1-i];
    }
    return abs(lr-rl);
}

int main(){
    int n,i,j,dif;
    scanf("%d", &n);
    
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    dif = diagonalDifference(n, a);
    printf("%d", dif);
    
    return 0;
}