#include <stdlib.h>

#include "s21_string_test.h"

START_TEST(valid_test1) {
  char s1[] = "test test";
  char s3[] = "tEST teSt";
  char *s2 = s21_to_lower(s3);
  ck_assert_pstr_eq(s1, s2);
  if (s2) {
    free(s2);
    s2 = S21_NULL;
  }
}
END_TEST

START_TEST(valid_test2) {
  char s1[] = "\nh\t\\t45444";
  char s3[] = "\nH\t\\t45444";
  char *s2 = s21_to_lower(s3);
  ck_assert_pstr_eq(s1, s2);
  if (s2) {
    free(s2);
    s2 = S21_NULL;
  }
}
END_TEST

START_TEST(valid_test3) {
  char s1[] = "test tets";
  char s3[] = "test tets";
  char *s2 = s21_to_lower(s3);
  ck_assert_pstr_eq(s1, s2);
  if (s2) {
    free(s2);
    s2 = S21_NULL;
  }
}
END_TEST

START_TEST(valid_test4) {
  char s1[] = "";
  char s3[] = "";
  char *s2 = s21_to_lower(s3);
  ck_assert_pstr_eq(s1, s2);
  if (s2) {
    free(s2);
    s2 = S21_NULL;
  }
}
END_TEST

START_TEST(valid_test5) {
  char s1[] = "abcdefghijklmnopqrstuvwxyz";
  char s3[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char *s2 = s21_to_lower(s3);
  ck_assert_pstr_eq(s1, s2);
  if (s2) {
    free(s2);
    s2 = S21_NULL;
  }
}
END_TEST

START_TEST(valid_test6) {
  char s1[] = "_?};!234";
  char s3[] = "_?};!234";
  char *s2 = s21_to_lower(s3);
  ck_assert_pstr_eq(s1, s2);
  if (s2) {
    free(s2);
    s2 = S21_NULL;
  }
}
END_TEST

START_TEST(valid_test7) {
  char *s1 = S21_NULL;
  char *s3 = S21_NULL;
  char *s2 = s21_to_lower(s3);
  ck_assert_pstr_eq(s1, s2);
  if (s2) {
    free(s2);
    s2 = S21_NULL;
  }
}
END_TEST

START_TEST(valid_test8) {
  char s1[] =
      "!#$&'()*+,-./"
      "0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[]^_`"
      "abcdefghijklmnopqrstuvwxyz{|}~";
  char s3[] =
      "!#$&'()*+,-./"
      "0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[]^_`"
      "abcdefghijklmnopqrstuvwxyz{|}~";
  char *s2 = s21_to_lower(s3);
  ck_assert_pstr_eq(s1, s2);
  if (s2) {
    free(s2);
    s2 = S21_NULL;
  }
}
END_TEST

Suite *create_tolower_suite(void) {
  Suite *suite = suite_create("tolower tests");
  TCase *tc = tcase_create("tolower");

  tcase_add_test(tc, valid_test1);
  tcase_add_test(tc, valid_test2);
  tcase_add_test(tc, valid_test3);
  tcase_add_test(tc, valid_test4);
  tcase_add_test(tc, valid_test5);
  tcase_add_test(tc, valid_test6);
  tcase_add_test(tc, valid_test7);
  tcase_add_test(tc, valid_test8);

  suite_add_tcase(suite, tc);

  return suite;
}
