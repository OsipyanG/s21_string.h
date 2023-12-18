#include "s21_string.h"

char *s21_strrchr(const char *str, int c) {
  char *a = S21_NULL;
  int i = 0;
  for (; str[i]; i++)
    if (c == str[i]) a = (char *)str + i;
  if (c == '\0') a = (char *)str + i;
  return a;
}