#include <stdbool.h>

#include "s21_string.h"

void *s21_trim(const char *src, const char *trim_chars) {
  if (src == S21_NULL) return S21_NULL;
  char *ret = S21_NULL;
  bool sourceStrCh[256] = {};
  s21_size_t shiftTrimChars = 0;
  unsigned char *pTrimChars = (unsigned char *)trim_chars;
  unsigned char *pSrc = (unsigned char *)src;

  while (pTrimChars[shiftTrimChars]) {
    sourceStrCh[pTrimChars[shiftTrimChars]] = true;
    shiftTrimChars++;
  }

  s21_size_t lenSrc = s21_strlen(src);
  s21_size_t startCopy = 0;
  s21_size_t endCopy = lenSrc - 1;

  bool startCh = true;
  bool endCh = true;
  bool cutStart = false;
  bool cutEnd = false;

  for (s21_size_t i = 0; i < lenSrc + 1 && startCh; i++) {
    if (sourceStrCh[pSrc[i]]) {
      startCopy = i;
      cutStart = true;
    } else {
      startCh = false;
    }
  }
  if (cutStart) {
    startCopy++;
  }

  for (s21_size_t i = lenSrc - 1;
       (i + 1 != 0) && endCh && (lenSrc != startCopy); i--) {
    if (sourceStrCh[pSrc[i]]) {
      endCopy = i;
      cutEnd = true;
    } else {
      endCh = false;
    }
  }
  if (lenSrc == startCopy) {
    endCopy = startCopy;
  } else if (cutEnd) {
    endCopy--;
  }

  ret = (char *)calloc(endCopy - startCopy + 2, sizeof(char));
  if (ret) {
    s21_size_t indexRet = 0;
    for (s21_size_t i = 0; i < lenSrc + 1; i++) {
      if (i >= startCopy && i <= endCopy) {
        ret[indexRet] = (char)(src[i]);
        indexRet++;
      }
    }
    ret[indexRet] = '\0';
  }
  return ret;
}
