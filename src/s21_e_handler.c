#include <math.h>

#include "s21_string.h"

s21_size_t count_nums_in_number(s21_size_t number);
void countSpace(spec_params_t params, e_style* style);
void count_zero_before_num(spec_params_t params, e_style* style);

void write_string_in_e_buffer(char** buf, char* notation, spec_params_t params,
                              e_style style);
void change_default_accuracy(spec_params_t* params);
void normalize(long double* num);

void e_handler(char** buf, long double number, spec_params_t params) {
  e_style style = {};
  change_default_accuracy(&params);
  char* str_num = (char*)calloc(params.accuracy + 5, sizeof(char));

  get_sign(number, &style);
  calc_power(number, &style);
  normalize(&number);
  double_to_array(fabsl(number), str_num, params);
  countSpace(params, &style);
  count_zero_before_num(params, &style);

  write_string_in_e_buffer(buf, str_num, params, style);

  free(str_num);
}
void change_default_accuracy(spec_params_t* params) {
  if (!(params->has_accuracy) && params->accuracy == 0) {
    params->has_accuracy = true;
    params->accuracy = 6;
  }
}

void write_string_in_e_buffer(char** buf, char* notation, spec_params_t params,
                              e_style style) {
  bool printed_sign_before_num = false;

  if (style.zero_before && params.plus && !style.sign_num) {
    add_chars_to_buf(buf, '+', 1);
    printed_sign_before_num = true;
  }

  if (params.space && style.zero_before) {
    add_chars_to_buf(buf, ' ', 1);
    style.zero_before--;
  }

  if (style.zero_before) {
    add_chars_to_buf(buf, '0', style.zero_before);
  }

  if (style.space_before && !style.zero_before) {
    add_chars_to_buf(buf, ' ', style.space_before);
  } else if (params.space && !style.zero_before) {
    add_chars_to_buf(buf, ' ', 1);
  }

  if (params.plus && !style.sign_num && !printed_sign_before_num) {
    add_chars_to_buf(buf, '+', 1);
  } else if (style.sign_num) {
    add_chars_to_buf(buf, '-', 1);
  }

  if (params.accuracy == 0 && !params.sharp) {
    s21_strncpy(*buf, notation, params.accuracy + 1);
    *buf += params.accuracy + 1;
  } else {
    s21_strncpy(*buf, notation, params.accuracy + 2);
    *buf += params.accuracy + 2;
  }

  if (params.upper_case) {
    add_chars_to_buf(buf, 'E', 1);
  } else {
    add_chars_to_buf(buf, 'e', 1);
  }

  if (style.sign_exp) {
    add_chars_to_buf(buf, '-', 1);
  } else {
    add_chars_to_buf(buf, '+', 1);
  }

  if (style.power < 10) {
    add_chars_to_buf(buf, '0', 1);
    add_chars_to_buf(buf, style.power + '0', 1);
  } else {
    char str_pw[100] = "";
    u_itoa(style.power, str_pw);
    s21_memcpy(*buf, str_pw, s21_strlen(str_pw));
    *buf += s21_strlen(str_pw);
  }

  if (style.space_after) {
    add_chars_to_buf(buf, ' ', style.space_after);
  }
}
void normalize(long double* num) {
  long double value = *num;

  if (fabsl(value) >= 1) {
    while (fabsl(value) >= 10.0f) {
      value /= 10.0f;
    }
  } else {
    while (fabsl(value) <= 1 && fabsl(value) > S21_EPS) {
      value *= 10.0f;
    }
  }
  *num = value;
}

void countSpace(spec_params_t params, e_style* style) {
  size_t count = 0;
  s21_size_t count_nums = count_nums_in_number(style->power);
  s21_size_t size_power = 2;

  if (count_nums > 2) {
    size_power = count_nums;
  }
  if (params.width > params.accuracy) {
    if (!params.sharp && params.accuracy == 0) {
      count = params.width - (3 + params.accuracy + size_power);
    } else {
      count = params.width - (4 + params.accuracy + size_power);
    }
  }
  if (params.plus && count != 0) {
    count--;
  }

  if (params.minus) {
    style->space_after = count;
  } else {
    style->space_before = count;
  }
}

void count_zero_before_num(spec_params_t params, e_style* style) {
  if (params.zero) {
    if (style->space_before) {
      style->zero_before = style->space_before;
      style->space_before = 0;
    }
  }
}

void calc_power(long double num, e_style* style) {
  long int power = 0;
  num = fabsl(num);
  if (num >= 1) {
    while (num >= 10.0f) {
      num /= 10.0f;
      power++;
    }
  } else {
    while (num < 1 && num > S21_EPS) {
      num *= 10.0f;
      power++;
    }
  }

  style->power = power;
}

void get_sign(long double num, e_style* style) {
  if (fabsl(num) < 1 && num != 0) {
    style->sign_exp = true;
  } else {
    style->sign_exp = false;
  }
  if (num < 0) {
    style->sign_num = true;
  } else {
    style->sign_num = false;
  }
}

s21_size_t count_nums_in_number(s21_size_t number) {
  s21_size_t count = 0;
  while (0 != number) {
    number /= 10.0;
    count++;
  }
  return count;
}
