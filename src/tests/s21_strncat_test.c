#include "s21_string_test.h"

START_TEST(valid_test_1) {
  char s21Str[100] = "qwertyuioutrew";
  char sourceStr[100] = "qwertyuioutrew";
  const char str2[100] = "abc";
  int n = 5;
  ck_assert_str_eq(s21_strncat(s21Str, str2, n), strncat(sourceStr, str2, n));
}
END_TEST

START_TEST(valid_test_2) {
  char s21Str[100] = "";
  char sourceStr[100] = "";
  const char str2[100] = "abc";
  int n = 5;
  ck_assert_str_eq(s21_strncat(s21Str, str2, n), strncat(sourceStr, str2, n));
}
END_TEST

START_TEST(valid_test_3) {
  char s21Str[100] = "qwertyuioutrew";
  char sourceStr[100] = "qwertyuioutrew";
  const char str2[100] = "abc";
  int n = 0;
  ck_assert_str_eq(s21_strncat(s21Str, str2, n), strncat(sourceStr, str2, n));
}
END_TEST
START_TEST(valid_test_4) {
  char s21Str[100] = "qwertyuioutrew";
  char sourceStr[100] = "qwertyuioutrew";
  const char str2[100] = "";
  int n = 5;
  ck_assert_str_eq(s21_strncat(s21Str, str2, n), strncat(sourceStr, str2, n));
}
END_TEST

START_TEST(valid_test_5) {
  char s21Str[100] = "\n";
  char sourceStr[100] = "\n";
  const char str2[100] = "\n\n\n\n\n\n\n";
  int n = 5;
  ck_assert_str_eq(s21_strncat(s21Str, str2, n), strncat(sourceStr, str2, n));
}
END_TEST

START_TEST(valid_test_6) {
  char s21Str[100] = "Shin shap shoppy";
  char sourceStr[100] = "Shin shap shoppy";
  const char str2[100] = "shappy shoppy shnop";
  int n = 5;
  ck_assert_str_eq(s21_strncat(s21Str, str2, n), strncat(sourceStr, str2, n));
}

Suite* create_strncat_suite() {
  Suite* suite = suite_create("strncat tests");
  TCase* tc = tcase_create("valid tests");
  tcase_add_test(tc, valid_test_1);
  tcase_add_test(tc, valid_test_2);
  tcase_add_test(tc, valid_test_3);
  tcase_add_test(tc, valid_test_4);
  tcase_add_test(tc, valid_test_5);
  tcase_add_test(tc, valid_test_6);
  suite_add_tcase(suite, tc);
  return suite;
}
