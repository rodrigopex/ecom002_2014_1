#include <cairo/cairo.h>
//#include <math.h>
//#include "drawing.h"

#define PI 3.1416

void drawBackground(cairo_t *context, int width, int height) {
    cairo_save(context);
    cairo_rectangle (context, 0, 0, width, height);
	cairo_set_source_rgba(context,
						  255,
						  255,
						  255,
						  255);
	cairo_fill(context);
    cairo_restore(context);
}

void drawXAxis(cairo_t *context, int width, int height) {
    cairo_save(context);
    cairo_rectangle (context, 20, height - 20, width - 40, 3);
	cairo_set_source_rgba(context,
						  0,
						  0,
						  0,
						  255);
	cairo_fill(context);
    cairo_restore(context);
}

void drawYAxis(cairo_t *context, int width, int height) {
    cairo_save(context);
    cairo_rectangle (context, 20, height - 20, 3, - (height - 40));
	cairo_set_source_rgba(context,
						  0,
						  0,
						  0,
						  255);
	cairo_fill(context);
    cairo_restore(context);
}
void drawDot(cairo_t *context, int x, int y) {
    cairo_set_source_rgba(context,
                              255,
                              0,
                              0,
                              255);
    cairo_arc (context,
               x,
               y,
               3,
               0,
               2*PI);
    cairo_fill(context);
}
int main() {
    int width = 800, height = 600;
    cairo_surface_t *surface = 
        cairo_image_surface_create(CAIRO_FORMAT_ARGB32, width, height);
    cairo_t *context = cairo_create(surface);
    
    drawBackground(context, width, height);
    drawXAxis(context, width, height);
    drawYAxis(context, width, height);
    
    cairo_move_to(context, 30, height - 20);
    cairo_line_to(context, 30, 20);
    cairo_line_to(context, 80, 200);
    cairo_line_to(context, 100, 300);
    cairo_line_to(context, 400, 400);
    cairo_line_to(context, 400, height - 20);
//    cairo_stroke(context);
    cairo_fill(context);
    
    drawDot(context, 30, 20);
    drawDot(context, 80, 200);
    drawDot(context, 100, 300);
    drawDot(context, 400, 400);
    
    
    cairo_surface_write_to_png(surface, "test.png");
    cairo_destroy(context);
    cairo_surface_destroy(surface);
	return 0;
}
