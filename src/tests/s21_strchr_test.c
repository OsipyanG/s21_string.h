#include "s21_string_test.h"

START_TEST(test_1) {
  const char *str = "Hello word";
  int c = 'o';
  ck_assert_ptr_eq(s21_strchr(str, c), strchr(str, c));
}
END_TEST

START_TEST(test_2) {
  const char *str = "0123456789";
  int c = '6';
  ck_assert_ptr_eq(s21_strchr(str, c), strchr(str, c));
}
END_TEST

START_TEST(test_3) {
  const char *str = "1q2w3e4r5t6y7u8i9o0p";
  int c = 'y';
  ck_assert_ptr_eq(s21_strchr(str, c), strchr(str, c));
}
END_TEST

START_TEST(test_4) {
  const char *str = "Yes, we`ll do everything in a best possible way!";
  int c = '`';
  ck_assert_ptr_eq(s21_strchr(str, c), strchr(str, c));
}
END_TEST

START_TEST(test_5) {
  const char *str = "Yes, we`ll do everything in a best possible way!";
  int c = '\0';
  ck_assert_ptr_eq(s21_strchr(str, c), strchr(str, c));
}
END_TEST

START_TEST(test_6) {
  const char *str = "Yes, we`ll do everything in a best possible way! ";
  int c = '6';
  ck_assert_ptr_eq(s21_strchr(str, c), strchr(str, c));
}
END_TEST

START_TEST(test_7) {
  const char *str = "Hello word";
  int c = 'H';
  ck_assert_ptr_eq(s21_strchr(str, c), strchr(str, c));
}
END_TEST

Suite *create_strchr_suite() {
  Suite *suite = suite_create("strchr tests");
  TCase *tc = tcase_create("strchr");

  tcase_add_test(tc, test_1);
  tcase_add_test(tc, test_2);
  tcase_add_test(tc, test_3);
  tcase_add_test(tc, test_4);
  tcase_add_test(tc, test_5);
  tcase_add_test(tc, test_6);
  tcase_add_test(tc, test_7);
  suite_add_tcase(suite, tc);

  return suite;
}