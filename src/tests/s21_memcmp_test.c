#include "s21_string_test.h"

START_TEST(test_1) {
  char str1_arr[] = "abc";
  char str2_arr[] = "acc";

  const void *str1 = (const void *)str1_arr;
  const void *str2 = (const void *)str2_arr;

  s21_size_t n = 1;

  ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
}
END_TEST

START_TEST(test_2) {
  char str1_arr[] = "abc";
  char str2_arr[] = "acc";

  const void *str1 = (const void *)str1_arr;
  const void *str2 = (const void *)str2_arr;

  s21_size_t n = 3;

  ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
}
END_TEST

START_TEST(test_3) {
  char str1_arr[] = "abc";
  char str2_arr[] = "acc";

  const void *str1 = (const void *)str1_arr;
  const void *str2 = (const void *)str2_arr;

  s21_size_t n = 3;

  ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
}
END_TEST

START_TEST(test_4) {
  char str1_arr[] = "aaa";
  char str2_arr[] = "aaa";

  const void *str1 = (const void *)str1_arr;
  const void *str2 = (const void *)str2_arr;

  s21_size_t n = 3;

  ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
}
END_TEST

START_TEST(test_5) {
  char str1_arr[] = "bbb";
  char str2_arr[] = "bbb";

  const void *str1 = (const void *)str1_arr;
  const void *str2 = (const void *)str2_arr;

  s21_size_t n = 3;

  ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
}
END_TEST

START_TEST(test_6) {
  char str1_arr[] = " ";
  char str2_arr[] = "abcder";

  const void *str1 = (const void *)str1_arr;
  const void *str2 = (const void *)str2_arr;

  s21_size_t n = 1;

  ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
}
END_TEST

START_TEST(test_7) {
  char str1_arr[] = "abcadsf";
  char str2_arr[] = "";

  const void *str1 = (const void *)str1_arr;
  const void *str2 = (const void *)str2_arr;

  s21_size_t n = 0;

  ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
}
END_TEST

START_TEST(test_8) {
  char str1_arr[] = "000000000000";
  char str2_arr[] = "000000000000";

  const void *str1 = (const void *)str1_arr;
  const void *str2 = (const void *)str2_arr;

  s21_size_t n = 12;

  ck_assert_int_eq(s21_memcmp(str1, str2, n), memcmp(str1, str2, n));
}
END_TEST

Suite *create_memcmp_suite() {
  Suite *suite = suite_create("Memcmp tests");
  TCase *tc = tcase_create("Memcmp");

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
