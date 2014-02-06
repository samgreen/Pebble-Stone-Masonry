#include "../masonry.h"

//
//  Forward Static Declarations
//
static void pattern_half(GContext * const ctx, const GRect * const rect);
static void pattern_vertical(GContext * const ctx, const GRect * const rect);
static void pattern_horizontal(GContext * const ctx, const GRect * const rect);


//
//  Public Functions
//
void fill_grect_with_pattern(GContext * const ctx, const GRect * const rect, const DrawPattern pattern) {
    
    switch (pattern) {

        case DRAW_PATTERN_HALF:
            pattern_half(ctx, rect);
            break;
        case DRAW_PATTERN_VERTICAL_LINES:
            pattern_vertical(ctx, rect);
            break;
        case DRAW_PATTERN_HORIZONTAL_LINES:
            pattern_horizontal(ctx, rect);
            break;
        default:
            INFO_LOG("Not implemented.");
            break;
    }
}

void outline_grect_with_pattern(GContext * const ctx, const GRect * const rect, const DrawPattern pattern) {

}


//
//  Static Implementations
//
static void pattern_half(GContext * const ctx, const GRect * const rect) {

    // Get the max X and Y for this rect
    uint16_t maxX = grect_get_max_x(rect), maxY = grect_get_max_y(rect);
    for (uint16_t x = rect->origin.x; x < maxX; ++x) {

        uint8_t row_result = x % 2;
        for (uint16_t y = rect->origin.y; y < maxY; ++y) {

            if (y % 2 == row_result) graphics_draw_pixel(ctx, GPoint(x, y));
        }
    }
}

static void pattern_vertical(GContext * const ctx, const GRect * const rect) {
    // Get the max X and Y for this rect
    uint16_t maxX = grect_get_max_x(rect), maxY = grect_get_max_y(rect);
    for (uint16_t x = rect->origin.x; x < maxX; x += 2) {
        
        graphics_draw_line(ctx, GPoint(x, rect->origin.y), GPoint(x, maxY));
    }
}

static void pattern_horizontal(GContext * const ctx, const GRect * const rect) {
    // Get the max X and Y for this rect
    uint16_t maxX = grect_get_max_x(rect), maxY = grect_get_max_y(rect);
    for (uint16_t y = rect->origin.y; y < maxY; y += 2) {
        graphics_draw_line(ctx, GPoint(rect->origin.x, y), GPoint(maxX, y));
    }
}

// static void pattern_right_diagonal(GContext * const ctx, const GRect * const rect) {
    
// }

// static void pattern_left_diagonal(GContext * const ctx, const GRect * const rect) {
    
// }