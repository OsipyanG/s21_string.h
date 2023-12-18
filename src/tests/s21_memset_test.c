//
// Created by maksim on 22.11.23.
//
#include "s21_string_test.h"

START_TEST(valid_test_1) {
  char s21_str[10];
  char original_str[sizeof(s21_str)];
  int c = 97;

  memset(original_str, c, sizeof(s21_str));
  s21_memset(s21_str, c, sizeof(s21_str));

  ck_assert(memcmp(s21_str, original_str, sizeof(s21_str)) == 0);
}
END_TEST

START_TEST(valid_test_2) {
  char s21_str[10];
  char original_str[sizeof(s21_str)];
  int c = 254;

  memset(original_str, c, 10);
  s21_memset(s21_str, c, 10);

  ck_assert(memcmp(s21_str, original_str, sizeof(s21_str)) == 0);
}
END_TEST

START_TEST(valid_test_3) {
  char s21_str[10];
  char original_str[sizeof(s21_str)];
  int c = 256;

  memset(original_str, c, 10);
  s21_memset(s21_str, c, 10);

  ck_assert(memcmp(s21_str, original_str, sizeof(s21_str)) == 0);
}
END_TEST

Suite *create_memset_suite() {
  Suite *suite = suite_create("memset tests");
  TCase *tc = tcase_create("valid tests");

  tcase_add_test(tc, valid_test_1);
  tcase_add_test(tc, valid_test_2);
  tcase_add_test(tc, valid_test_3);

  suite_add_tcase(suite, tc);
  return suite;
}
