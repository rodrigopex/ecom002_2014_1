#include <stdio.h>

void last(char * msg) {
    int i = 0;
    for(; msg[i] != '\0'; ++i);
    for(; msg[i] != ' '; --i);
    printf("%s\n", msg + i + 1);
}

void lastP(char * msg) {
    char * cursor = msg;
    for(; *cursor != '\0'; ++cursor);
    for(; *cursor != ' '; --cursor);
    printf("%s\n", cursor + 1);
}

void printUpper(char * msg) {
    int i = 0;
    for(; msg[i] != 0; ++i) {
        if(97 <= msg[i] && msg[i] <= 122) {
            printf("%c", msg[i] - 32); 
        } else {
            printf("%c", msg[i]); 
        }
    }
    printf("\n");
}

void printUpperP(char * msg) {
    char * i = msg;
    for(; *i != 0; ++i) {
        if(97 <= *i && *i <= 122) {
            printf("%c", *i - 32); 
        } else {
            printf("%c", *i); 
        }
    }
    printf("\n");
}

int main() {
//    char * name = "Hello World!";
//    last(name);
//    lastP(name);
    char * test = "Fulano de_tal-cicrano";
    printUpper(test);
    printUpperP(test);
    return 0;
}