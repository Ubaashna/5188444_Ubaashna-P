#include <stdio.h>

void lonelyinteger(int a[], int n){
    for(int j=0;j<n;j++){
        int count = 0;
        for(int k=0;k<n;k++){
            if(a[j]==a[k]){
                count++;
            }
        }
        if(count==1){
            printf("%d",a[j]);
            break;
        }
    }
}

int main(){
    int n,i;
    scanf("%d", &n);
    
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    lonelyinteger(a,n);
    
    return 0;
}