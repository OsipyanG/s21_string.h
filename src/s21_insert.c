#include "s21_string.h"

void *s21_insert(const char *src, const char *str, s21_size_t start_index) {
  if (src == S21_NULL) return S21_NULL;
  char *ret = S21_NULL;
  s21_size_t lenStr = s21_strlen((char *)str);
  s21_size_t lenSrc = s21_strlen((char *)src);
  if (start_index <= lenSrc) {
    ret = (char *)calloc(lenSrc + lenStr + 1, sizeof(char));
  }
  if (start_index <= lenSrc && NULL != ret) {
    s21_size_t index = 0;
    s21_size_t countSrc = 0;
    s21_size_t countStr = 0;
    while (index != (lenStr + lenSrc)) {
      if (index < start_index || index >= (lenStr + start_index)) {
        ret[index] = src[countSrc];
        countSrc++;
      } else {
        ret[index] = str[countStr];
        countStr++;
      }
      index++;
    }
    ret[index] = '\0';
  }
  return ret;
}
