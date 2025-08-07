#include <stdio.h>
#include <string.h>

int main(){
    char s[10000], t[10000];
    scanf("%s", s);
    scanf("%s", t);
    
    int n = strlen(s);
    for(int i=0; i<n; i++){
        printf("%c", (s[i]-'0' ^ t[i]-'0') + '0');
    }
    
    return 0;
}