#include "s21_string.h"

void hd_itoa(short n, char s[]) {
  int i;
  long long int sign;

  if ((sign = n) < 0) n = -n;
  i = 0;
  do {
    s[i++] = (char)(n % 10 + '0');
  } while ((n /= 10) > 0);
  //  if (sign < 0) s[i++] = '-';
  s[i] = '\0';
  reverse(s);
}

void hu_itoa(unsigned short n, char s[]) {
  int i;
  long long int sign;

  if ((sign = n) < 0) n = -n;
  i = 0;
  do {
    s[i++] = (char)(n % 10 + '0');
  } while ((n /= 10) > 0);
  //  if (sign < 0) s[i++] = '-';
  s[i] = '\0';
  reverse(s);
}

void d_itoa(int n, char s[]) {
  int i;
  long long int sign;

  if ((sign = n) < 0) n = -n;
  i = 0;
  do {
    s[i++] = (char)(n % 10 + '0');
  } while ((n /= 10) > 0);
  //  if (sign < 0) s[i++] = '-';
  s[i] = '\0';
  reverse(s);
}

void ld_itoa(long n, char s[]) {
  int i;
  long long int sign;

  if ((sign = n) < 0) n = -n;
  i = 0;
  do {
    s[i++] = (char)(n % 10 + '0');
  } while ((n /= 10) > 0);
  //  if (sign < 0) s[i++] = '-';
  s[i] = '\0';
  reverse(s);
}

void u_itoa(unsigned int n, char s[]) {
  int i;
  long long int sign;

  if ((sign = n) < 0) n = -n;
  i = 0;
  do {
    s[i++] = (char)(n % 10 + '0');
  } while ((n /= 10) > 0);
  //  if (sign < 0) s[i++] = '-';
  s[i] = '\0';
  reverse(s);
}

void lu_itoa(unsigned long n, char s[]) {
  int i;
  long long int sign;

  if ((sign = n) < 0) n = -n;
  i = 0;
  do {
    s[i++] = (char)(n % 10 + '0');
  } while ((n /= 10) > 0);
  //  if (sign < 0) s[i++] = '-';
  s[i] = '\0';
  reverse(s);
}

void o_itoa(unsigned int n, char s[]) {
  int i = 0;
  do {
    s[i++] = (char)(n % 8 + '0');
  } while ((n /= 8) > 0);
  s[i] = '\0';
  reverse(s);
}

void ho_itoa(short unsigned int n, char s[]) {
  int i = 0;
  do {
    s[i++] = (char)(n % 8 + '0');
  } while ((n /= 8) > 0);
  s[i] = '\0';
  reverse(s);
}

void lo_itoa(unsigned long n, char s[]) {
  int i = 0;
  do {
    s[i++] = (char)(n % 8 + '0');
  } while ((n /= 8) > 0);
  s[i] = '\0';
  reverse(s);
}

void hx_itoa(unsigned short n, char s[], bool upper_case) {
  int i = 0;
  do {
    s[i++] = get_x_number(n, upper_case);
  } while ((n /= 16) > 0);
  s[i] = '\0';
  reverse(s);
}

void x_itoa(unsigned int n, char s[], bool upper_case) {
  int i = 0;
  do {
    s[i++] = get_x_number(n, upper_case);
  } while ((n /= 16) > 0);
  s[i] = '\0';
  reverse(s);
}

void lx_itoa(unsigned long n, char s[], bool upper_case) {
  int i = 0;
  do {
    s[i++] = get_x_number(n, upper_case);
  } while ((n /= 16) > 0);
  s[i] = '\0';
  reverse(s);
}

void p_itoa(unsigned long int n, char s[]) {
  int i = 0;
  s[i++] = '0';
  s[i++] = 'x';
  do {
    s[i++] = get_x_number(n, false);
  } while ((n /= 16) > 0);
  s[i] = '\0';
  s += 2;
  reverse(s);
}

char get_x_number(unsigned int number, bool upper_case) {
  unsigned int mod = number % 16;
  char c;
  switch (mod) {
    case 10:
      c = upper_case ? 'A' : 'a';
      break;
    case 11:
      c = upper_case ? 'B' : 'b';
      break;
    case 12:
      c = upper_case ? 'C' : 'c';
      break;
    case 13:
      c = upper_case ? 'D' : 'd';
      break;
    case 14:
      c = upper_case ? 'E' : 'e';
      break;
    case 15:
      c = upper_case ? 'F' : 'f';
      break;
    default:
      c = (char)(mod + '0');
  }
  return c;
}

void reverse(char s[]) {
  s21_size_t i;
  s21_size_t j;
  char c;

  for (i = 0, j = s21_strlen(s) - 1; i < j; i++, j--) {
    c = s[i];
    s[i] = s[j];
    s[j] = c;
  }
}
