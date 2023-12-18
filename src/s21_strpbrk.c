#include "s21_string.h"

char *s21_strpbrk(const char *str1, const char *str2) {
  char *ret = S21_NULL;
  bool sourceStr[256] = {};
  s21_size_t shiftSourceStr = 0;
  s21_size_t shiftFindStr = 0;

  unsigned char *pStr1 = (unsigned char *)str1;
  unsigned char *pStr2 = (unsigned char *)str2;

  while (pStr2[shiftSourceStr]) {
    sourceStr[pStr2[shiftSourceStr]] = true;
    shiftSourceStr++;
  }
  while (pStr1[shiftFindStr] && !ret) {
    if (sourceStr[pStr1[shiftFindStr]]) {
      ret = &((char *)pStr1)[shiftFindStr];
    }
    shiftFindStr++;
  }
  return ret;
}
