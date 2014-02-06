
// Min 
inline int16_t grect_get_min_x(const GRect * const rect) {
    return rect->origin.x;
}

inline int16_t grect_get_min_y(const GRect * const rect) {
    return rect->origin.y;
}


// Mid
inline int16_t grect_get_mid_x(const GRect * const rect) {
    return rect->origin.x + (rect->size.w / 2);
}

inline int16_t grect_get_mid_y(const GRect * const rect) {
    return rect->origin.y + (rect->size.h / 2);
}


// Max
inline int16_t grect_get_max_x(const GRect * const rect) {
    return rect->origin.x + rect->size.w;
}

inline int16_t grect_get_max_y(const GRect * const rect) {
    return rect->origin.y + rect->size.h;
}


// Offset
inline void grect_offset(GRect * rect, const GPoint * const offset) {
    rect->origin.x += offset->x;
    rect->origin.y += offset->y;
}


#define GRectFullScreen GRect(0, 0, 144, 168)