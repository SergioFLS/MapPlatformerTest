#ifndef VARIABLES_H
#define VARIABLES_H

uint8_t level = 0;
uint8_t gravity_timer = 0;

struct Player {
  bool initialized = false;
  int8_t x = 64;
  int8_t y = 32;
  float x_velocity = 0;
  float y_velocity = 0;
};

#endif
