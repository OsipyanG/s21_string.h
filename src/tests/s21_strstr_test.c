#include "s21_string_test.h"

START_TEST(test_1) {
  const char* str1 = "hello world";
  const char* str2 = "";

  ck_assert_ptr_eq(s21_strstr(str1, str2), strstr(str1, str2));
}
END_TEST

START_TEST(test_2) {
  const char* str1 = "";
  const char* str2 = "";

  ck_assert_ptr_eq(s21_strstr(str1, str2), strstr(str1, str2));
}
END_TEST

START_TEST(test_3) {
  const char* str1 = "";
  const char* str2 = "hello";

  ck_assert_ptr_eq(s21_strstr(str1, str2), strstr(str1, str2));
}
END_TEST
START_TEST(test_4) {
  const char* str1 = "hello world";
  const char* str2 = "llo";

  ck_assert_ptr_eq(s21_strstr(str1, str2), strstr(str1, str2));
}
END_TEST

START_TEST(test_5) {
  const char* str1 = "hello world";
  const char* str2 = "old";

  ck_assert_ptr_eq(s21_strstr(str1, str2), strstr(str1, str2));
}
END_TEST

START_TEST(test_6) {
  const char* str1 = "hello world";
  const char* str2 = "\n";

  ck_assert_ptr_eq(s21_strstr(str1, str2), strstr(str1, str2));
}
END_TEST

START_TEST(test_7) {
  const char* str1 = "hello world";
  const char* str2 = "hel";

  ck_assert_ptr_eq(s21_strstr(str1, str2), strstr(str1, str2));
}
END_TEST

START_TEST(test_8) {
  const char* str1 = "hello world";
  const char* str2 = "alksdjfk";

  ck_assert_ptr_eq(s21_strstr(str1, str2), strstr(str1, str2));
}
END_TEST

Suite* create_strstr_suite() {
  Suite* suite = suite_create("strstr tests");
  TCase* tc = tcase_create("strstr");

  tcase_add_test(tc, test_1);
  tcase_add_test(tc, test_2);
  tcase_add_test(tc, test_3);
  tcase_add_test(tc, test_4);
  tcase_add_test(tc, test_5);
  tcase_add_test(tc, test_6);
  tcase_add_test(tc, test_7);
  tcase_add_test(tc, test_8);

  suite_add_tcase(suite, tc);

  return suite;
}
