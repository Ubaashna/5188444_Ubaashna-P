#include <stdio.h>
#include <stdlib.h>

int comp_asc(const void* a, const void* b){
    return(*(int*)a - *(int*)b);
}

int maxMin(int k, int n, int arr[]){
    qsort(arr, n, sizeof(int), comp_asc);
    int maxMin = arr[k-1] - arr[0];
    for(int i=1; i<=n-k; i++){
        int dif = arr[i+k-1] - arr[i];
        if(dif<maxMin) maxMin = dif;
    }
    return maxMin;
}

int main(){
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("%d", maxMin(k, n, arr));
    return 0;
}