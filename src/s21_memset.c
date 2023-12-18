#include "s21_string.h"
void *s21_memset(void *str, int c, s21_size_t n) {
  unsigned char byte = (unsigned char)c;
  unsigned char *p_str = (unsigned char *)str;
  s21_size_t counter = 0;

  while (counter < n) {
    *p_str = byte;
    p_str++;
    counter++;
  }

  return str;
}
