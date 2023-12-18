#include "s21_string.h"

char *s21_strtok(char *str, const char *delim) {
  static char *last_position = S21_NULL;
  if (str == S21_NULL) {
    str = last_position;
  }
  while (s21_strchr(delim, *str) != S21_NULL && *str != '\0') str++;
  if (*str == '\0') return S21_NULL;
  char *tok_begin = str;

  while (s21_strchr(delim, *str) == S21_NULL && *str != '\0') str++;
  if (*str != '\0') {
    *str = '\0';
    str++;
  }
  while (s21_strchr(delim, *str) != S21_NULL && *str != '\0') str++;
  last_position = str;
  return tok_begin;
}
