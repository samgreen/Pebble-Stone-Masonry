#include "../sg_lib.h"

// Forward Declarations
static GPath* create_star_path(uint16_t points, uint16_t radius);


void sg_graphics_fill_star(GContext *context, GPoint center, uint16_t points, uint16_t radius) {
    // Get the star path
    GPath *star_path = create_star_path(points, radius);
    // Move the path to the center point
    gpath_move_to(star_path, center);
    // Fill the path
    gpath_draw_filled(context, star_path);
}

void sg_graphics_stroke_star(GContext *context, GPoint center, uint16_t points, uint16_t radius) {
    // Get the star path
    GPath *star_path = create_star_path(points, radius);
    // Move the path to the center point
    gpath_move_to(star_path, center);
    // Stroke the path
    gpath_draw_outline(context, star_path);
}

// Probably belongs elsewhere
void sg_graphics_fill_gradient(GContext *context, GRect rect) {
    // Can we set levels of black / grey?
}

// TODO: Patterns, Stipling

static GPath* create_star_path(uint16_t points, uint16_t radius) {
    static GPath *star_path = NULL;

    if (star_path == NULL) {
        // Do some magic to plot the star's points around a circle    
    }

    return star_path;
}