#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,q;
    scanf("%d %d", &n, &q);
    int **arr = calloc(n, sizeof(int*));
    int *arr_size = calloc(n, sizeof(int));
    int lastAnswer =0;
    while(q--){
        int type, x, y;
        scanf("%d %d %d", &type, &x, &y);
        int idx= ((x^lastAnswer)%n);
        
        if(type == 1){
            arr[idx] = realloc(arr[idx], (arr_size[idx]+1)*sizeof(int));
            arr[idx][arr_size[idx]]= y;
            arr_size[idx]++;
        }
        if(type == 2){
            lastAnswer = arr[idx][y%arr_size[idx]];
            printf("%d\n", lastAnswer);
        }
    }
    return 0;
}