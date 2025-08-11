#include <stdio.h>

int pageCount(int n, int p){
    if(p>n/2){return (n/2)-(p/2);}
    else{return p/2;}
}

int main(){
    int n,p;
    scanf("%d", &n);
    scanf("%d", &p);
    printf("%d", pageCount(n,p));
    
    return 0;
}