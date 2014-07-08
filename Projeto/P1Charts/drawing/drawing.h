#include <cairo/cairo.h>
#include "storage.h"

void drawBackground(cairo_t *context, int width, int height);

void drawXAxis(cairo_t *context, int width, int height);

void drawYAxis(cairo_t *context, int width, int height);

void drawDot(cairo_t *context, int x, int y);

void createChart(char *sourceJSON);