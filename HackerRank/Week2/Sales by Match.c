#include <stdio.h>

int sockMerchant(int n, int arr[]){
    int count = 0;
    for(int i=0;i<n-1;i++){
        if(arr[i]==0){continue;}
        for(int j=i+1;j<n;j++){
            if(arr[j]==0){continue;}
            if(arr[i]==arr[j]){
                count++;
                arr[i]=0, arr[j]=0;
            }
        }
    }
    return count;
}

int main(){
    int n;
    scanf("%d", &n);
    
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    
    printf("%d", sockMerchant(n, ar));
    
    return 0;
}