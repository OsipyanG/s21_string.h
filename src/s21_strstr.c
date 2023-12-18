#include <stdbool.h>
#include <string.h>

#include "s21_string.h"

char *s21_strstr(const char *haystack, const char *needle) {
  char *result = S21_NULL;
  bool flag = true;

  s21_size_t len_substr = strlen(needle);
  s21_size_t len_str = strlen(haystack);
  if ((len_str == 0) && (len_substr == 0)) result = (char *)haystack;

  while (*haystack && flag) {
    if (!s21_memcmp(haystack, needle, len_substr)) {
      result = (char *)haystack;
      flag = false;
    }
    haystack++;
  }

  return result;
}
