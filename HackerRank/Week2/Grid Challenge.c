#include <stdio.h>
#include <stdlib.h>

int comp_asc(const void* a, const void* b){
    return(*(char*)a - *(char*)b);
}

void gridChallenge(int n, char grid[n][n+1]){
    for(int i=0; i<n; i++){
        qsort(grid[i], n, sizeof(char), comp_asc);
    }
    for(int col=0; col<n; col++){
        for(int row=0; row<n-1; row++){
            if(grid[row][col]>grid[row+1][col]){
                printf("NO\n");
                return;
            }
        }
    }
    printf("YES\n");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        char arr[n][n+1];
        for(int i=0; i<n; i++){
            scanf("%s\n", arr[i]);
        }
        gridChallenge(n, arr);
    }
    return 0;
}