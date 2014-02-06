#include "../masonry.h"

static Window *window;
static Layer *draw_layer;

// This is the layer update callback which is called on render updates
static void draw_layer_update_callback(Layer *draw_layer, GContext *ctx) {
  GRect bounds = layer_get_bounds(draw_layer);
  fill_grect_with_pattern(ctx, &bounds, DRAW_PATTERN_HORIZONTAL_LINES);
}


static void window_load(Window *window) {
  Layer *window_layer = window_get_root_layer(window);
  GRect bounds = layer_get_bounds(window_layer);

  draw_layer = layer_create(bounds);
  layer_set_update_proc(draw_layer, draw_layer_update_callback);
  layer_add_child(window_layer, draw_layer);
}

static void window_unload(Window *window) {

}

static void init() {
  window = window_create();
  window_set_window_handlers(window, (WindowHandlers) {
    .load = window_load,
    .unload = window_unload,
  });
  const bool animated = true;
  window_stack_push(window, animated);
}

static void deinit() {
  window_destroy(window);
}

int main() {
  init();
  app_event_loop();
  deinit();
}
