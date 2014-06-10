#include <stdio.h>
#include <string.h>

struct data {
    char dia;
    char mes;
    int ano;
};

typedef struct data Data;

struct obra {
    char tombo[10];
    Data dataCompra;
    int nExemplar;
};

typedef struct obra Obra;

void printObra(Obra *obra) {
    printf("#obra-inicio#\n");
    printf("#tombo:%s#\n", obra->tombo);
    printf("#data:%d/%d/%d#\n", obra->dataCompra.dia, 
                                    obra->dataCompra.mes, 
                                    obra->dataCompra.ano);
    printf("#nexemplar:%d#\n", obra->nExemplar);
    printf("#obra-fim#\n");
}
    
void salvarObra(Obra *obra, FILE *f) {
    fprintf(f, "#obra_inicio#\n");
    fprintf(f, "#tombo:%s#\n", obra->tombo);
    fprintf(f, "#data:%d/%d/%d#\n", obra->dataCompra.dia, 
                                    obra->dataCompra.mes, 
                                    obra->dataCompra.ano);
    fprintf(f, "#nexemplar:%d#\n", obra->nExemplar);
    fprintf(f, "#obra_fim#\n");
}

int recuperarObra(Obra *obra, FILE *f) {
    int result = 0;
    char cmd[10];
    fscanf(f, "#obra_%s#", cmd);
    printf("Len str: %ld\n", strlen(cmd));
    //printf("last: %d\n", cmd[strlen(cmd)]);
    if(strcmp(cmd, "inicio") == 0) {
        fscanf(f, "#tombo:%s#", obra->tombo);
        int d, m, a;
        fscanf(f, "#data:%d/%d/%d#", &d, &m, &a);
        obra->dataCompra.dia = d; 
        obra->dataCompra.mes = m;
        obra->dataCompra.ano = a;
        fscanf(f, "#nexemplar:%d#", &obra->nExemplar);
        fscanf(f, "#obra_%s#", cmd);
        if(strcmp(cmd, "obra_fim") != 0) {
            result = 1;
            //printObra(obra);
        }
    } else {
        printf("AQUI!");
        result = -1;
    }
    return result;
}

void write() {
    FILE * tFile = fopen("test.txt", "w");
    fprintf(tFile, "Hello world!\n");
    fclose(tFile);
}

void read() {
    char text[50];
    FILE * tFile = fopen("test.txt", "r");
    fscanf(tFile, "%[^\n]s", text);
    fclose(tFile);
    printf("Conteúdo do arquivo: %s\n", text);
}

void writeObra() {
    FILE * tFile = fopen("test.txt", "w");
    Obra obra = {"012345ABCD", {10, 04, 1995}, 10};
    salvarObra(&obra, tFile);
    fclose(tFile);
}

void readObra() {
    FILE * tFile = fopen("test.txt", "r");
    Obra obra2;
    int result = recuperarObra(&obra2, tFile);
    if(result) {
        printf("Arquivo invalido:Error %d\n", result);
    } else {
        
    }
    printObra(&obra2);
    fclose(tFile);
}

int main() {
    writeObra();
    readObra();
//    write();
//    read();
    return 0;
}