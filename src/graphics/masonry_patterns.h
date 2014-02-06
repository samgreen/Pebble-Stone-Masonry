
typedef enum {
    DRAW_PATTERN_EMPTY,
    DRAW_PATTERN_SOLID,
    DRAW_PATTERN_HALF,

    DRAW_PATTERN_VERTICAL_LINES,
    DRAW_PATTERN_HORIZONTAL_LINES,
    DRAW_PATTERN_RIGHT_DIAGONAL_LINES,
    DRAW_PATTERN_LEFT_DIAGONAL_LINES,

    DRAW_PATTERN_COUNT
} DrawPattern;

void fill_grect_with_pattern(GContext * const ctx, const GRect * const rect, const DrawPattern pattern);
void outline_grect_with_pattern(GContext * const ctx, const GRect * const rect, const DrawPattern pattern);