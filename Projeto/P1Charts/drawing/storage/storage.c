#include "storage.h"

json_t * openJSONFile(char *filePath) {
    json_t *root = 0;

    json_error_t error;

    root = json_load_file(filePath, 0, &error);
    
    if(!root){
        fprintf(stderr, "P1Charts:Storage:Error:%s\n", error.text);
        exit(1);
    } else {
        printf("Success!\n");
    }
    return root;
}

Chart *loadChart(char *fileName) {
    
    Chart *chart = malloc(sizeof(Chart));
    json_t *root = openJSONFile(fileName);
    
    // File name --------------------------------------------- 
    json_t * jFileName = json_object_get(root, "fileName");    
    chart->fileName = json_string_value(jFileName);
    printf("File name: %s\n", chart->fileName);
    free(jFileName);
    // Width -------------------------------------------------
    json_t * jWidth = json_object_get(root, "width");    
    chart->width = json_integer_value(jWidth);
    printf("Width: %d\n", chart->width);
    free(jWidth);
    // Color -------------------------------------------------
    json_t * jArrayColor = json_object_get(root, "color");
    int i;
    for(i = 0; i < 4; ++i){
        json_t *jFactor = json_array_get(jArrayColor, i);
        chart->color[i] = json_integer_value(jFactor);
    }
    printf("Cor R: %d\n", (int) chart->color[0]);
    printf("Cor G: %d\n", (int) chart->color[1]);
    printf("Cor B: %d\n", (int) chart->color[2]);
    printf("Cor A: %d\n", (int) chart->color[3]);
    free(jArrayColor);
    // Content -----------------------------------------------
    json_t * jArrayContent = json_object_get(root, "content");
    Point *points = malloc(sizeof(Point) * json_array_size(jArrayContent));
    for(i = 0; i < json_array_size(jArrayContent); ++i){
        json_t *jPoint = json_array_get(jArrayContent, i);
        json_t * jX = json_object_get(jPoint, "x");
        points[i].x = json_integer_value(jX);
        json_t * jY = json_object_get(jPoint, "y");
        points[i].y = json_integer_value(jY);
        free(jX);
        free(jY);
        free(jPoint);
    }
    
    for(i = 0; i < json_array_size(jArrayContent); ++i){
        printf("Point(%d, %d)\n", points[i].x, points[i].y);
    }
    free(jArrayContent);
    chart->content = points;
    return chart;
}
