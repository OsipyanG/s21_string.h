#include "s21_string.h"

void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
  if (n == 0) return dest;

  unsigned char *p_dest = (unsigned char *)dest;
  unsigned char *p_src = (unsigned char *)src;
  s21_size_t counter = 0;

  while (counter < n) {
    *p_dest = *p_src;
    p_dest++;
    p_src++;
    counter++;
  }
  return dest;
}
