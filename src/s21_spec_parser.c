#include "s21_string.h"

void L_long_handler(spec_params_t* spec_params, const char** buf);
void l_long_handler(spec_params_t* spec_params, const char** buf);
void h_long_handler(spec_params_t* spec_params, const char** buf);
void standart_long_handler(spec_params_t* spec_params, const char** buf);
void non_standart_spec_output_handler(spec_params_t* spec_params,
                                      const char** buf);

spec_params_t spec_parser(const char** buf_const) {
  spec_params_t spec_params = {0};
  const char* str_begin = *buf_const;
  const char** buf = buf_const;
  (*buf)++;
  while (s21_strchr("-+ #0", **buf)) {
    if (**buf == '-')
      spec_params.minus = true;
    else if (**buf == '+')
      spec_params.plus = true;
    else if (**buf == ' ')
      spec_params.space = true;
    else if (**buf == '#')
      spec_params.sharp = true;
    else if (**buf == '0')
      spec_params.zero = true;
    (*buf)++;
  }
  if (**buf == '*') {
    spec_params.width_from_args = true;
    (*buf)++;
  } else
    spec_params.width = strtoull(*buf, (char**)buf, 10);

  if (**buf == '.') {
    spec_params.has_accuracy = true;
    (*buf)++;
    if (**buf == '*') {
      (*buf)++;
      spec_params.accuracy_from_args = true;
    } else {
      spec_params.accuracy = strtoull(*buf, (char**)buf, 10);
    }
  }

  if (**buf == 'L')
    L_long_handler(&spec_params, buf);
  else if (**buf == 'l')
    l_long_handler(&spec_params, buf);
  else if (**buf == 'h')
    h_long_handler(&spec_params, buf);
  else
    standart_long_handler(&spec_params, buf);

  non_standart_spec_output_handler(&spec_params, buf);

  (*buf)++;

  if (spec_params.spec == NONE) *buf = str_begin;
  return spec_params;
}
void l_long_handler(spec_params_t* spec_params, const char** buf) {
  (*buf)++;
  if (s21_strchr("id", **buf))
    spec_params->spec = LD;
  else if (s21_strchr("ouXx", **buf))
    spec_params->spec = LU;
  else if (**buf == 'c')
    spec_params->spec = LC;
  else if (**buf == 's')
    spec_params->spec = LS;
  else if (**buf == 'f')
    spec_params->spec = F;
  else
    spec_params->spec = NONE;
}

void L_long_handler(spec_params_t* spec_params, const char** buf) {
  (*buf)++;
  if (s21_strchr("eEgGf", **buf))
    spec_params->spec = LF;
  else
    spec_params->spec = NONE;
}

void h_long_handler(spec_params_t* spec_params, const char** buf) {
  (*buf)++;
  if (s21_strchr("id", **buf))
    spec_params->spec = HD;
  else if (s21_strchr("ouXx", **buf))
    spec_params->spec = HU;
  else
    spec_params->spec = NONE;
}
void standart_long_handler(spec_params_t* spec_params, const char** buf) {
  if (s21_strchr("id", **buf))
    spec_params->spec = D;
  else if (s21_strchr("ouXx", **buf))
    spec_params->spec = U;
  else if (**buf == 'c')
    spec_params->spec = C;
  else if (**buf == 's')
    spec_params->spec = S;
  else if (s21_strchr("eEgGf", **buf))
    spec_params->spec = F;
  else if (**buf == '%')
    spec_params->spec = PERCENT;
  else if (**buf == 'p')
    spec_params->spec = P;
  else
    spec_params->spec = NONE;
}
void non_standart_spec_output_handler(spec_params_t* spec_params,
                                      const char** buf) {
  switch (**buf) {
    case 'E':
      spec_params->upper_case = true;
      spec_params->e_spec = true;
      break;
    case 'e':
      spec_params->e_spec = true;
      break;
    case 'G':
      spec_params->g_spec = true;
      spec_params->upper_case = true;
      break;
    case 'g':
      spec_params->g_spec = true;
      break;
    case 'o':
      spec_params->number_system = 8;
      break;
    case 'X':
      spec_params->number_system = 16;
      spec_params->upper_case = true;
      break;
    case 'x':
      spec_params->number_system = 16;
      break;
    default:
      spec_params->number_system = 10;
      break;
  }
}
