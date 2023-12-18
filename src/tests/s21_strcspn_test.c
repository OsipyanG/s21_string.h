#include "s21_string_test.h"

START_TEST(valid_test_1) {
  char str1[] = "123456";
  char str2[] = "123";

  ck_assert_uint_eq(s21_strcspn(str1, str2), strcspn(str1, str2));
}
END_TEST

START_TEST(valid_test_2) {
  char str1[] = "123";
  char str2[] = "123456";
  ck_assert_uint_eq(s21_strcspn(str1, str2), strcspn(str1, str2));
}
END_TEST
START_TEST(valid_test_3) {
  char str1[] = "123";
  char str2[] = "123456123";
  ck_assert_uint_eq(s21_strcspn(str1, str2), strcspn(str1, str2));
}
END_TEST
START_TEST(valid_test_4) {
  char str1[] = "123456123456789123";
  char str2[] = "123";
  ck_assert_uint_eq(s21_strcspn(str1, str2), strcspn(str1, str2));
}
END_TEST
START_TEST(valid_test_5) {
  char str1[] = "/n";
  char str2[] = "";
  ck_assert_uint_eq(s21_strcspn(str1, str2), strcspn(str1, str2));
}
END_TEST

START_TEST(valid_test_6) {
  char str1[] = "/qwerty";
  char str2[] = "\nsdasd";
  ck_assert_uint_eq(s21_strcspn(str1, str2), strcspn(str1, str2));
}
END_TEST

START_TEST(valid_test_7) {
  char str1[] = "qwertyuioutrew";
  char str2[] = "\n";
  ck_assert_uint_eq(s21_strcspn(str1, str2), strcspn(str1, str2));
}
END_TEST

START_TEST(valid_test_8) {
  char str1[] = "abc";
  char str2[] = "b";
  ck_assert_uint_eq(s21_strcspn(str1, str2), strcspn(str1, str2));
}
END_TEST
START_TEST(valid_test_9) {
  char str1[] = "abc";
  char str2[] = "c";
  ck_assert_uint_eq(s21_strcspn(str1, str2), strcspn(str1, str2));
}
END_TEST

END_TEST
START_TEST(valid_test_10) {
  char str1[] =
      "!#$&'()*+,-./"
      "0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[]^_`"
      "abcdefghijklmnopqrstuvwxyz{|}~";
  char str2[] =
      "!#$&'()*+,-./"
      "0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[]^_`"
      "abcdefghijklmnopqrstuvwxyz{|}~";
  ck_assert_uint_eq(s21_strcspn(str1, str2), strcspn(str1, str2));
}
END_TEST

Suite* create_strcspn_suite() {
  Suite* suite = suite_create("strcspn tests");
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
