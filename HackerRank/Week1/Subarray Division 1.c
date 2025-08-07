//Solution - 1
#include <stdio.h>

void birthday(int s[], int n, int d, int m){
    int count = 0;
    for(int i=0; i<=n-m; i++){
        int sum = 0;
        for(int j=i; j<i+m; j++){
            sum+= s[j];
        }
        if(sum == d){
            count++;
        }
    }
    printf("%d", count);
}

int main(){
    int n, d, m;
    scanf("%d", &n);
    
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d", &s[i]);
    }
    
    scanf("%d %d", &d, &m);
    
    birthday(s, n, d, m);
    
    return 0;
}

//Solution - 2
#include <stdio.h>

void birthday(int s[], int n, int d, int m){
    int count = 0, sum = 0;
    for(int i=0; i<m; i++){
        sum+= s[i];
    }
    if(sum == d){count++;}
    for(int i=m; i<n; i++){
        sum = sum - s[i-m] + s[i];
        if(sum == d){count++;}
    }
    printf("%d", count);
}

int main(){
    int n, d, m;
    scanf("%d", &n);
    
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d", &s[i]);
    }
    
    scanf("%d %d", &d, &m);
    
    birthday(s, n, d, m);
    
    return 0;
}