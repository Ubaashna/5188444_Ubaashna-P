#include <stdio.h>

void countingSort(int n, int arr[], int max){
    int result[max];
    for(int i=0;i<max;i++){
        result[i] = 0;
        for(int j=0;j<n;j++){
            if(i==arr[j]){
                result[i]+=1;
            }
        }
        printf("%d ", result[i]);
    }
}

int main(){
    int n,i;
    scanf("%d", &n);
    
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    
    int max=100;
    
    countingSort(n, arr, max);
    
    return 0;
}