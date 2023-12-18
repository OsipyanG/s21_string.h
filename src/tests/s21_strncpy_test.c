#include "s21_string_test.h"

START_TEST(test_1) {
  char str1[4] = "abc";
  char dest1[4] = "111";
  char dest2[4] = "111";

  strncpy(dest1, str1, 1);
  s21_strncpy(dest2, str1, 1);
  ck_assert(strcmp(dest1, dest2) == 0);
}
END_TEST

START_TEST(test_2) {
  char str1[4] = "abc";
  char dest1[10] = "123456789";
  char dest2[10] = "123456789";

  strncpy(dest1, str1, 3);
  s21_strncpy(dest2, str1, 3);

  ck_assert(strcmp(dest1, dest2) == 0);
}
END_TEST

START_TEST(test_3) {
  char str1[11] = "abcdefgaaa";
  char dest1[11] = "0123456789";
  char dest2[11] = "0123456789";

  strncpy(dest1, str1, 10);
  s21_strncpy(dest2, str1, 10);

  ck_assert(strcmp(dest1, dest2) == 0);
}
END_TEST

START_TEST(test_4) {
  char str1[12] = "hello world";
  char dest1[9] = "Hi Petay";
  char dest2[9] = "Hi Petay";

  strncpy(dest1, str1, 5);
  s21_strncpy(dest2, str1, 5);

  ck_assert(strcmp(dest1, dest2) == 0);
}
END_TEST

START_TEST(test_5) {
  char str1[2] = "2";
  char dest1[2] = "1";
  char dest2[2] = "1";

  strncpy(dest1, str1, 1);
  s21_strncpy(dest2, str1, 1);

  ck_assert(strcmp(dest1, dest2) == 0);
}
END_TEST

START_TEST(test_6) {
  char str1[] = "123";
  char dest1[100];
  char dest2[100];

  strncpy(dest1, str1, 10);
  s21_strncpy(dest2, str1, 10);

  ck_assert(strcmp(dest1, dest2) == 0);
}
END_TEST

Suite *create_strncpy_suite() {
  Suite *suite = suite_create("strncpy tests");
  TCase *tc = tcase_create("strncpy");

  tcase_add_test(tc, test_1);
  tcase_add_test(tc, test_2);
  tcase_add_test(tc, test_3);
  tcase_add_test(tc, test_4);
  tcase_add_test(tc, test_5);
  tcase_add_test(tc, test_6);
  suite_add_tcase(suite, tc);

  return suite;
}