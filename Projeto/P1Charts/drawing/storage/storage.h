#include <stdio.h>
#include <jansson.h>

struct _point {
    int x;
    int y;
};

typedef struct _point Point;

struct _chart {
    const char *fileName;
    int width;
    unsigned char color[4];
    Point *content;
};

typedef struct _chart Chart;
    
json_t * openJSONFile(char *filePath);
Chart *loadChart(char *fileName);