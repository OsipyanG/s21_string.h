#include "s21_string.h"

s21_size_t s21_strcspn(const char *str1, const char *str2) {
  char *res = s21_strpbrk(str1, str2);
  s21_size_t i;
  if (res != S21_NULL)
    i = res - str1;
  else
    i = s21_strlen(str1);
  return i;
}