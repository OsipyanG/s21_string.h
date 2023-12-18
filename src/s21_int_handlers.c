#include "s21_string.h"

void call_hu_case(char s[], long long int number, spec_params_t* params);
void call_u_case(char s[], long long int number, spec_params_t* params);
void call_lu_case(char s[], long long int number, spec_params_t* params);

void add_to_number_to_buffer(char** buf, long long int number,
                             spec_params_t* params, const char* str_number,
                             s21_size_t number_len, int_style* output_parms);

void int_handler(char** buf, long long number, spec_params_t params) {
  char str_number[21] = {};
  s21_size_t number_len;
  int_style output_parms = {0};

#if defined(__linux__)
  if (params.spec == P && number == 0) {
    s21_strncat(str_number, "(nil)", 5);
  } else
    itoa_handler(str_number, number, params);
#endif
#if defined(__APPLE__)
  itoa_handler(str_number, number, params);
#endif

  number_len = (int)s21_strlen(str_number);

  //  if (number  < 0) number_len++;

  parse_int_spec(params, number_len, &output_parms);

  add_to_number_to_buffer(buf, number, &params, str_number, number_len,
                          &output_parms);
}

void add_to_number_to_buffer(char** buf, long long int number,
                             spec_params_t* params, const char* str_number,
                             s21_size_t number_len, int_style* output_parms) {
  if ((*params).minus) {
    if ((*params).plus && number > 0 && (*params).number_system == 10) {
      add_chars_to_buf(buf, '+', 1);
    } else if (number < 0) {
      output_parms->count_of_spaces--;
      add_chars_to_buf(buf, '-', 1);
    } else if ((*params).space) {
      add_chars_to_buf(buf, ' ', 1);
    }
    if ((*params).accuracy > (*params).width ||
        (*params).accuracy > number_len) {
      add_chars_to_buf(buf, '0', (*output_parms).count_of_zeros);
    }
    s21_memcpy(*buf, str_number, number_len);
    *buf += number_len;
    if ((*params).width > number_len) {
      add_chars_to_buf(buf, ' ', (*output_parms).count_of_spaces);
    }

  } else {
    if (((*params).plus && number > 0) || (*params).space || number < 0) {
      (*output_parms).count_of_spaces--;
    }
    add_chars_to_buf(buf, ' ', (*output_parms).count_of_spaces);
    if ((*params).plus && number > 0) {
      add_chars_to_buf(buf, '+', 1);
    } else if ((*params).space && number > 0) {
      add_chars_to_buf(buf, ' ', 1);
    } else if (number < 0) {
      add_chars_to_buf(buf, '-', 1);
    }
    if (((*params).number_system != 10) && (*params).sharp) {
      add_chars_to_buf(buf, '0', 1);
      char ch = (*params).upper_case ? 'X' : 'x';
      if ((*params).number_system == 16) add_chars_to_buf(buf, ch, 1);
    }
    add_chars_to_buf(buf, '0', (*output_parms).count_of_zeros);

    s21_memcpy(*buf, str_number, number_len);
    (*buf) += number_len;
  }
}

void parse_int_spec(spec_params_t params, s21_size_t number_len,
                    int_style* output_params) {
  if ((params).width > number_len) {
    if ((params).has_accuracy) {
      if ((params).accuracy < number_len) {
        output_params->count_of_spaces += params.width - number_len;
      } else {
        if ((params).accuracy > (params).width) {
          output_params->count_of_zeros += params.accuracy - number_len;
        } else {
          output_params->count_of_spaces += (params).width - (params).accuracy;
          output_params->count_of_zeros += params.accuracy - number_len;
        }
      }
    } else {
      if (params.zero) {
        output_params->count_of_zeros += params.width - number_len;
      } else {
        output_params->count_of_spaces += params.width - number_len;
      }
    }
  } else {
    if ((params).has_accuracy && (params).accuracy > number_len)
      output_params->count_of_zeros += params.accuracy - number_len;
  }
}

void add_chars_to_buf(char** buf, char c, int n) {
  for (int i = 0; i < n; i++) {
    *(*buf) = c;
    (*buf)++;
  }
}
void itoa_handler(char s[], long long number, spec_params_t params) {
  switch (params.spec) {
    case HD:
      hd_itoa((short)number, s);
      break;
    case HU:
      call_hu_case(s, number, &params);
      break;
    case D:
      d_itoa((int)number, s);
      break;
    case LD:
      ld_itoa((long)number, s);
      break;
    case U:
      call_u_case(s, number, &params);
      break;
    case LU:
      call_lu_case(s, number, &params);
      break;
    case P:
      p_itoa((unsigned long)number, s);
      break;
    case C:
    case S:
    case LC:
    case LS:
    case PERCENT:
    case F:
    case LF:
    case NONE:
      break;
  }
}
void call_lu_case(char s[], long long int number, spec_params_t* params) {
  if ((*params).number_system == 10)
    lu_itoa((unsigned long)number, s);
  else if ((*params).number_system == 8)
    lo_itoa((unsigned long)number, s);
  else if ((*params).number_system == 16)
    lx_itoa((unsigned long)number, s, (*params).upper_case);
}
void call_u_case(char s[], long long int number, spec_params_t* params) {
  if ((*params).number_system == 10)
    u_itoa((unsigned)number, s);
  else if ((*params).number_system == 8)
    o_itoa((unsigned int)number, s);
  else if ((*params).number_system == 16)
    x_itoa((unsigned int)number, s, (*params).upper_case);
}

void call_hu_case(char s[], long long int number, spec_params_t* params) {
  if ((*params).number_system == 10)
    hu_itoa((unsigned short)number, s);
  else if ((*params).number_system == 8)
    ho_itoa((unsigned short)number, s);
  else if ((*params).number_system == 16)
    hx_itoa((unsigned short)number, s, (*params).upper_case);
}
