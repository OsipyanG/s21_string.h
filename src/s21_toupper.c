#include "s21_string.h"

void *s21_to_upper(const char *str) {
  char *str_copy = S21_NULL;

  if (str == S21_NULL) {
    return S21_NULL;
  }

  s21_size_t len = s21_strlen(str);

  str_copy = (char *)calloc(len + 1, sizeof(char));

  if (!str_copy) {
    return S21_NULL;
  }

  for (s21_size_t i = 0; i < len; i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      str_copy[i] = (str[i] - 'a') + 'A';
    } else {
      str_copy[i] = str[i];
    }
  }
  str_copy[len] = '\0';

  return (void *)str_copy;
}
