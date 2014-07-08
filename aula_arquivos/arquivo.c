#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long getFileSize(FILE *file) {
    fseek (file , 0 , SEEK_END);
    long lSize = ftell(file);
    printf("File size: %ld\n", lSize);
    rewind(file);
    return lSize;
}

void readFile(char *fileName) {
    FILE *log;
    log = fopen(fileName, "r");
    if(!log) {
        printf("File opening error.\n");
        exit(1);
    }
    long logSize = getFileSize(log);
    char hello[logSize + 1];
    hello[logSize] = 0;
    //fscanf(log, "%[^\n]s", hello);
    //fgets(hello, logSize, log);
    fread(hello, 1, logSize, log);
    printf("File content: %s\n", hello);
    fclose(log);
}

void readFileDateTime(char *fileName) {
    FILE *log;
    log = fopen(fileName, "r");
    if(!log) {
        printf("File opening error.\n");
        exit(1);
    }
    int d, m, a, h, mn;
    fscanf(log, "%d/%d/%d,%d:%d", &d, &m, &a, &h, &mn);
//    fscanf(log, "%d", &b);
//    fscanf(log, "%d", &c);
    fprintf(stdout, "Date and time: %d/%02d/%d %d:%d\n", d, m, a, h, mn);
    fclose(log);
}

void writeFile(char *fileName) {
    FILE *log;
    log = fopen(fileName, "a");
    if(!log) {
        printf("File opening error.\n");
        exit(1);
    }
    char hello[] = "Hello Writer!\n";
    fprintf(log, "%s", hello);
    fclose(log);
}


int main() {
    time_t t = time(0);
    printf("open:%s\n", ctime(&t));
    readFileDateTime("../file.txt");
    t = time(0);
    printf("open:%s\n", ctime(&t));
    //writeFile("../file_W.txt");
    //readFile("../file_W.txt");
    return 0;
}