#include "s21_string_test.h"

START_TEST(test_1) {
  const void *str = "hello world";
  int c = ' ';
  s21_size_t n = 10;

  ck_assert_ptr_eq(s21_memchr(str, c, n), memchr(str, c, n));
}
END_TEST

START_TEST(test_2) {
  const void *str = "hello world";
  int c = 'h';
  s21_size_t n = 5;

  ck_assert_ptr_eq(s21_memchr(str, c, n), memchr(str, c, n));
}
END_TEST

START_TEST(test_3) {
  const void *str = "hello world";
  int c = '3';
  s21_size_t n = 11;

  ck_assert_ptr_eq(s21_memchr(str, c, n), memchr(str, c, n));
}
END_TEST

START_TEST(test_4) {
  const void *str = "hello world";
  int c = 'd';
  s21_size_t n = 11;

  ck_assert_ptr_eq(s21_memchr(str, c, n), memchr(str, c, n));
}
END_TEST

START_TEST(test_5) {
  const void *str = "";
  int c = 54;
  s21_size_t n = 1;

  ck_assert_ptr_eq(s21_memchr(str, c, n), memchr(str, c, n));
}
END_TEST

START_TEST(test_6) {
  const void *str = S21_NULL;
  int c = 39;
  s21_size_t n = 0;

  ck_assert_ptr_eq(s21_memchr(str, c, n), memchr(str, c, n));
}
END_TEST

START_TEST(test_7) {
  const void *str = "world";
  int c = '3';
  s21_size_t n = 6;

  ck_assert_ptr_eq(s21_memchr(str, c, n), memchr(str, c, n));
}
END_TEST

START_TEST(test_8) {
  const void *str = "\200";
  int c = '\200';
  s21_size_t n = 1;

  ck_assert_ptr_eq(s21_memchr(str, c, n), memchr(str, c, n));
}
END_TEST

START_TEST(test_9) {
  const void *str = "\257";
  int c = '\257';
  s21_size_t n = 2;

  ck_assert_ptr_eq(s21_memchr(str, c, n), memchr(str, c, n));
}
END_TEST

START_TEST(test_10) {
  const void *str = "\200\201\124";
  int c = '\124';
  s21_size_t n = 3;

  ck_assert_ptr_eq(s21_memchr(str, c, n), memchr(str, c, n));
}
END_TEST

Suite *create_memchr_suite() {
  Suite *suite = suite_create("Memchr tests");
  TCase *tc = tcase_create("Memchr");

  tcase_add_test(tc, test_1);
  tcase_add_test(tc, test_2);
  tcase_add_test(tc, test_3);
  tcase_add_test(tc, test_4);
  tcase_add_test(tc, test_5);
  tcase_add_test(tc, test_6);
  tcase_add_test(tc, test_7);
  tcase_add_test(tc, test_8);
  tcase_add_test(tc, test_9);
  tcase_add_test(tc, test_10);

  suite_add_tcase(suite, tc);

  return suite;
}
