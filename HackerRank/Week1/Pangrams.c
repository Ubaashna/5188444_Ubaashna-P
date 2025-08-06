//Solution-1
#include <stdio.h>
#include <string.h>

void pangrams(char str[]){
    int n = strlen(str);
    int count = 0;
    for(int i=0;i<26;i++){
        for(int j=0;j<n;j++){
            if((int)str[j]-65 == i || (int)str[j]-97 == i){
                count+=1;
                break;
            }
        }       
    }
    if(count==26){
        printf("pangram");
    }
    else{
        printf("not pangram");
    }
}

int main(){
    char s[1001];
    fgets(s, sizeof(s), stdin);
    
    pangrams(s);
    
    return 0;
}

//Solution-2
#include <stdio.h>
#include <ctype.h>

void pangrams(char str[]){
    int alpha[26]={0};
    int count = 0;
    for(int i=0;str[i]!='\0';i++){
        if(isalpha(str[i])){
            int index = tolower(str[i]) - 'a';
            if(alpha[index]==0){
                alpha[index] = 1;
                count+=1;
            }
        }
        if(count==26){
            printf("pangram");
            break;
        }
    }
    if(count!=26){
        printf("not pangram");
    }
}

int main(){
    char s[1001];
    fgets(s, sizeof(s), stdin);
    
    pangrams(s);
    
    return 0;
}