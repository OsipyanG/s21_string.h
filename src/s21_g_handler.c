#include "s21_string.h"

void g_handler(char** buf, long double number, spec_params_t params) {
  e_style style = {};

  get_sign(number, &style);
  calc_power(number, &style);

  s21_size_t P = 0;
  if (params.has_accuracy && params.accuracy) {
    P = params.accuracy;
  } else if (params.has_accuracy && 0 == params.accuracy) {
    P = 1;
  } else if (!params.has_accuracy) {
    params.has_accuracy = true;
    params.accuracy = 6;
    P = params.accuracy;
  }

  int sign = 1;
  if (style.sign_exp) {
    sign = -1;
  }

  if (((long int)P > (long int)style.power) &&
      (((long int)style.power * sign) >= -4)) {
    params.accuracy = P - 1 - style.power;
    float_handler(buf, number, params);
  } else {
    params.accuracy = P - 1;
    e_handler(buf, number, params);
  }
}
