#include "s21_string_test.h"

START_TEST(test_1) {
  char st[10] = "abc";
  char ins[10] = "123";
  s21_size_t n = 1;
  char *ret = s21_insert(st, ins, n);
  ck_assert_str_eq(ret, "a123bc");
  if (ret) {
    free(ret);
    ret = S21_NULL;
  }
}
END_TEST

START_TEST(test_2) {
  char st[10] = "abc";
  char ins[10] = "";
  s21_size_t n = 1;
  char *ret = s21_insert(st, ins, n);
  ck_assert_str_eq(ret, "abc");
  if (ret) {
    free(ret);
    ret = S21_NULL;
  }
}
END_TEST
START_TEST(test_3) {
  char st[10] = "";
  char ins[10] = "123";
  s21_size_t n = 0;
  char *ret = s21_insert(st, ins, n);
  ck_assert_str_eq(ret, "123");
  if (ret) {
    free(ret);
    ret = S21_NULL;
  }
}
END_TEST
START_TEST(test_4) {
  char st[10] = "";
  char ins[10] = "123";
  s21_size_t n = 1;
  char *ret = s21_insert(st, ins, n);
  ck_assert_ptr_null(ret);
  if (ret) {
    free(ret);
    ret = S21_NULL;
  }
}
END_TEST

START_TEST(test_5) {
  char st[10] = "as";
  char ins[10] = "";
  s21_size_t n = 100;
  char *ret = s21_insert(st, ins, n);
  ck_assert_ptr_null(ret);
  if (ret) {
    free(ret);
    ret = S21_NULL;
  }
}
END_TEST

START_TEST(test_6) {
  char st[10] = "abc";
  char ins[10] = "123";
  s21_size_t n = 3;
  char *ret = s21_insert(st, ins, n);
  ck_assert_str_eq(ret, "abc123");
  if (ret) {
    free(ret);
    ret = S21_NULL;
  }
}
END_TEST
Suite *create_insert_suite() {
  Suite *suite = suite_create("Insert tests");
  TCase *tc = tcase_create("Insert");

  tcase_add_test(tc, test_1);
  tcase_add_test(tc, test_2);
  tcase_add_test(tc, test_3);
  tcase_add_test(tc, test_4);
  tcase_add_test(tc, test_5);
  tcase_add_test(tc, test_6);

  suite_add_tcase(suite, tc);

  return suite;
}
