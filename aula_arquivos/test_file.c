#include <stdio.h>

void write() {
    FILE * tFile = fopen("test.txt", "w");
    fprintf(tFile, "Hello world!");
    fclose(tFile);
}

void read() {
    char text[50];
    FILE * tFile = fopen("test.txt", "r");
    fscanf(tFile, "%[^\n]s", text);
    fclose(tFile);
    printf("Conteúdo do arquivo: %s\n", text);
}

int main() {
    write();
    read();
    return 0;
}