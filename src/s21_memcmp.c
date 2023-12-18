#include "s21_string.h"

int s21_memcmp(const void* str1, const void* str2, s21_size_t n) {
  int result = 0;
  s21_size_t counter = 0;

  unsigned char* i = (unsigned char*)str1;
  unsigned char* j = (unsigned char*)str2;

  while (counter < n) {
    if (*i != *j) {
      result = *i - *j;
      counter = n;
    }
    counter++;
    i++;
    j++;
  }

  return result;
}
