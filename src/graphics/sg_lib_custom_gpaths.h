#include <pebble.h>


void sg_graphics_fill_star(GContext *context, GPoint center, uint16_t points, uint16_t radius);
void sg_graphics_stroke_star(GContext *context, GPoint center, uint16_t points, uint16_t radius);
void sg_graphics_fill_gradient(GContext *context, GRect rect);

#if !USE_OWN_NAMESPACE
    #define graphics_fill_star sg_graphics_fill_star
    #define graphics_stroke_star sg_graphics_stroke_star
    #define graphics_fill_gradient sg_graphics_fill_gradient
#endif