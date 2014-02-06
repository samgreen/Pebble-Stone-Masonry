

inline GSize gsize_half(const GSize * const size) {
    return GSize(size->w / 2, size->h / 2);
}

inline GSize gsize_double(const GSize * const size) {
    return GSize(size->w * 2, size->h * 2);
}

#define GSizeFullScreen GSize(144, 168)