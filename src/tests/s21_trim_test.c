#include "s21_string_test.h"

START_TEST(test_1) {
  char st[100] = "   abc";
  char ins[100] = "a";
  char *ret = s21_trim(st, ins);
  ck_assert_str_eq(ret, "   abc");
  if (ret) {
    free(ret);
    ret = S21_NULL;
  }
}
END_TEST

START_TEST(test_2) {
  char st[100] = "   abc";
  char ins[100] = "a";
  char *ret = s21_trim(st, ins);
  ck_assert_str_eq(ret, "   abc");
  if (ret) {
    free(ret);
    ret = S21_NULL;
  }
}
END_TEST
START_TEST(test_3) {
  char st[100] = "abc";
  char ins[100] = "a";
  char *ret = s21_trim(st, ins);
  ck_assert_str_eq(ret, "bc");
  if (ret) {
    free(ret);
    ret = S21_NULL;
  }
}
END_TEST
START_TEST(test_4) {
  char st[100] = "     abc";
  char ins[100] = " ";
  char *ret = s21_trim(st, ins);
  ck_assert_str_eq(ret, "abc");
  if (ret) {
    free(ret);
    ret = S21_NULL;
  }
}
END_TEST

START_TEST(test_5) {
  char st[100] = "cccccccccc";
  char ins[100] = " c";
  char *ret = s21_trim(st, ins);
  ck_assert_str_eq(ret, "");
  if (ret) {
    free(ret);
    ret = S21_NULL;
  }
}
END_TEST

START_TEST(test_6) {
  char st[100] = "cccccccccc";
  char ins[100] = "";
  char *ret = s21_trim(st, ins);
  ck_assert_str_eq(ret, "cccccccccc");
  if (ret) {
    free(ret);
    ret = S21_NULL;
  }
}
END_TEST

Suite *create_trim_suite() {
  Suite *suite = suite_create("Trim tests");
  TCase *tc = tcase_create("Trim");

  tcase_add_test(tc, test_1);
  tcase_add_test(tc, test_2);
  tcase_add_test(tc, test_3);
  tcase_add_test(tc, test_4);
  tcase_add_test(tc, test_5);
  tcase_add_test(tc, test_6);

  suite_add_tcase(suite, tc);

  return suite;
}