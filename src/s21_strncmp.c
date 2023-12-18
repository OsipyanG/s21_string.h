#include "s21_string.h"

int s21_strncmp(const char *str1, const char *str2, s21_size_t n) {
  if (n == 0) return 0;
  s21_size_t counter = 0;
  int result = 0;
  unsigned char *p_str1 = (unsigned char *)--str1;
  unsigned char *p_str2 = (unsigned char *)--str2;
  do {
    p_str1++;
    p_str2++;
    if (*p_str1 != *p_str2) {
      result = *p_str1 - *p_str2;
      counter = n;
    }
    counter++;
  } while (counter < n && *p_str1 != '\0' && *p_str2 != '\0');
  return result;
}
