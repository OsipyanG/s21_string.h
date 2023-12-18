//
// Created by maksim on 20.11.23.
//
#include "s21_string_test.h"

START_TEST(valid_test_1) {
  char str1[] = "qwertyuioutrew";
  char str2[] = "abc";

  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(valid_test_2) {
  char str1[] = "qwertyuioutrew";
  char str2[] = "                        .";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST
START_TEST(valid_test_3) {
  char str1[] = "";
  char str2[] = "abc";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST
START_TEST(valid_test_4) {
  char str1[] = "qwertyuioutrew";
  char str2[] = "";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST
START_TEST(valid_test_5) {
  char str1[] = "";
  char str2[] = "";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(valid_test_6) {
  char str1[] = "qwertyuiuytrewqwertyuiytrewertyu\nwertyutrewqwertytrewert";
  char str2[] = "\nsdasd";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(valid_test_7) {
  char str1[] = "qwertyuioutrew";
  char str2[] = "\n";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

START_TEST(valid_test_8) {
  char str1[] = "abc";
  char str2[] = "a";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST
START_TEST(valid_test_9) {
  char str1[] = "abc";
  char str2[] = "c";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

END_TEST
START_TEST(valid_test_10) {
  char str1[] = "abc";
  char str2[] = "b";
  ck_assert_ptr_eq(s21_strpbrk(str1, str2), strpbrk(str1, str2));
}
END_TEST

Suite* create_strpbrk_suite() {
  Suite* suite = suite_create("strpbrk tests");
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
  suite_add_tcase(suite, tc);
  return suite;
}
