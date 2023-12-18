#include "s21_string.h"

char *s21_strncat(char *dest, const char *src, s21_size_t n) {
  s21_size_t shiftSource = 0;
  char *pDest = dest;
  while (*pDest) {
    pDest++;
  }
  s21_size_t i = 0;
  while (src[shiftSource] && i != n) {
    *pDest = src[shiftSource];
    pDest++;
    shiftSource++;
    i++;
  }
  *pDest = '\0';
  return dest;
}
