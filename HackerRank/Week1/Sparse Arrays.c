#include <stdio.h>
#include <string.h>

#define MAX_LEN 101

void matchingStrings(char strings[][MAX_LEN], int strlen, char queries[][MAX_LEN], int quelen){
    int result[quelen];
    for(int j=0;j<quelen;j++){
        int count = 0;
        for(int k=0;k<strlen;k++){
            if(strcmp(queries[j], strings[k])==0){
                count++;
            }
        }
        result[j] = count;
    }
    for(int l=0;l<quelen;l++){
        printf("%d\n",result[l]);
    }
    
}

int main(){
    int n,q,i;
    
    scanf("%d",&n);
    char strings[n][MAX_LEN];
    for(i=0;i<n;i++){
        scanf("%s", strings[i]);
    }
    
    scanf("%d",&q);
    char queries[q][MAX_LEN];
    for(i=0;i<q;i++){
        scanf("%s", queries[i]);
    }
    
    matchingStrings(strings, n, queries, q);
    
    return 0;
}