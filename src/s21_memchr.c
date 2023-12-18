#include "s21_string.h"

void* s21_memchr(const void* str, int c, s21_size_t n) {
  void* result = S21_NULL;
  s21_size_t counter = 0;
  unsigned char* i = (unsigned char*)str;

  while (counter < n) {
    if ((*i) == (unsigned char)c) {
      result = (void*)i;
      counter = n;
    }
    counter++;
    i++;
  }
  return result;
}
