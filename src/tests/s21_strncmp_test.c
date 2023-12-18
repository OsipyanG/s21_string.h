//
// Created by maksim on 20.11.23.
//
#include "s21_string_test.h"

START_TEST(valid_test_1) {
  char str1[] = "abc";
  char str2[] = "abc";
  ck_assert_int_eq(strncmp(str1, str2, 4), s21_strncmp(str1, str2, 4));
}
END_TEST
START_TEST(valid_test_2) {
  char str1[] = "abc";
  char str2[] = "abc";
  ck_assert_int_eq(strncmp(str1, str2, 2), s21_strncmp(str1, str2, 2));
}
END_TEST
START_TEST(valid_test_3) {
  char str1[] = "abc";
  char str2[] = "abcd";
  ck_assert_int_eq(strncmp(str1, str2, 4), s21_strncmp(str1, str2, 4));
}
END_TEST
START_TEST(valid_test_4) {
  char str1[] = "abcd";
  char str2[] = "abc";
  ck_assert_int_eq(strncmp(str1, str2, 4), s21_strncmp(str1, str2, 4));
}
END_TEST
START_TEST(valid_test_5) {
  char str1[] = "bbc";
  char str2[] = "abc";
  ck_assert_int_eq(strncmp(str1, str2, 4), s21_strncmp(str1, str2, 4));
}
END_TEST
START_TEST(valid_test_6) {
  char str1[] = "abcdf";
  char str2[] = "adddf";
  ck_assert_int_eq(strncmp(str1, str2, 6), s21_strncmp(str1, str2, 6));
}
END_TEST
START_TEST(valid_test_7) {
  char str1[] = "bbc";
  char str2[] = "abc";
  ck_assert_int_eq(strncmp(str1, str2, 1), s21_strncmp(str1, str2, 1));
}
END_TEST
START_TEST(valid_test_8) {
  char str1[] = "bbc";
  char str2[] = "abc";
  ck_assert_int_eq(strncmp(str1, str2, 0), s21_strncmp(str1, str2, 0));
}
END_TEST
START_TEST(valid_test_9) {
  char str1[] = "";
  char str2[] = "";
  ck_assert_int_eq(strncmp(str1, str2, 0), s21_strncmp(str1, str2, 0));
}
END_TEST
START_TEST(valid_test_10) {
  char str1[] = "";
  char str2[] = "abc";
  ck_assert_int_eq(strncmp(str1, str2, 0), s21_strncmp(str1, str2, 0));
}
END_TEST
START_TEST(valid_test_11) {
  char str1[] = "abc";
  char str2[] = "";
  ck_assert_int_eq(strncmp(str1, str2, 0), s21_strncmp(str1, str2, 0));
}
END_TEST
START_TEST(valid_test_12) {
  char* str1 = NULL;
  char str2[] = "";
  ck_assert_int_eq(strncmp(str1, str2, 0), s21_strncmp(str1, str2, 0));
}
END_TEST
START_TEST(valid_test_13) {
  char* str2 = NULL;
  char str1[] = "";
  ck_assert_int_eq(strncmp(str1, str2, 0), s21_strncmp(str1, str2, 0));
}
END_TEST
START_TEST(valid_test_14) {
  char* str2 = NULL;
  char* str1 = NULL;
  ck_assert_int_eq(strncmp(str1, str2, 0), s21_strncmp(str1, str2, 0));
}
END_TEST
START_TEST(valid_test_15) {
  char str1[] = "";
  char str2[] = "";
  ck_assert_int_eq(strncmp(str1, str2, 0), s21_strncmp(str1, str2, 0));
}
END_TEST
START_TEST(valid_test_16) {
  char str1[] = "";
  char str2[] = "abc";
  ck_assert_int_eq(strncmp(str1, str2, 1), s21_strncmp(str1, str2, 1));
}
END_TEST
START_TEST(valid_test_17) {
  char str1[] = "abc";
  char str2[] = "";
  ck_assert_int_eq(strncmp(str1, str2, 1), s21_strncmp(str1, str2, 1));
}

Suite* create_strncmp_suite() {
  Suite* suite = suite_create("strncmp tests");
  TCase* tc = tcase_create("valid tests");
  tcase_add_test(tc, valid_test_1);
  tcase_add_test(tc, valid_test_2);
  tcase_add_test(tc, valid_test_3);
  tcase_add_test(tc, valid_test_4);
  tcase_add_test(tc, valid_test_5);
  tcase_add_test(tc, valid_test_6);
  tcase_add_test(tc, valid_test_7);
  tcase_add_test(tc, valid_test_8);
  tcase_add_test(tc, valid_test_9);
  tcase_add_test(tc, valid_test_10);
  tcase_add_test(tc, valid_test_11);
  tcase_add_test(tc, valid_test_12);
  tcase_add_test(tc, valid_test_13);
  tcase_add_test(tc, valid_test_14);
  tcase_add_test(tc, valid_test_15);
  tcase_add_test(tc, valid_test_16);
  tcase_add_test(tc, valid_test_17);
  suite_add_tcase(suite, tc);
  return suite;
}
