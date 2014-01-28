#include <stdio.h>

#define MAXLINE 1000

void reverse(char s[], int i);
int mgetline(char line[], int maxline); 


int main() {

    char c; 
    int len; 
    char line[MAXLINE];

    while ((len = mgetline(line, MAXLINE)) > 0) {
        reverse(line, len - 1);   
        printf("%s\n", line);
    }

    return 0; 

}

void reverse(char s[], int len) {
    
    int i; 
    char temp; 

    for (i = 0; i <= len/2; ++i) {
        temp = s[i];
        s[i] = s[len-i];
        s[len-i] = temp;
    }

    s[len+1] = '\0';

}

int mgetline(char s[], int lim) {
    int c, i; 

    for (i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c; 
    }
     
    return i; 
}




