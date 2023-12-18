#include "s21_string_test.h"

START_TEST(test_1) {
  const void *str = "";

  ck_assert_int_eq(s21_strlen(str), strlen(str));
}
END_TEST

START_TEST(test_2) {
  const void *str = "0";

  ck_assert_int_eq(s21_strlen(str), strlen(str));
}
END_TEST

START_TEST(test_3) {
  const void *str = "Hello World";

  ck_assert_int_eq(s21_strlen(str), strlen(str));
}
END_TEST

START_TEST(test_4) {
  const void *str = "Hello \0World";

  ck_assert_int_eq(s21_strlen(str), strlen(str));
}
END_TEST

Suite *create_strlen_suite() {
  Suite *suite = suite_create("strlen tests");
  TCase *tc = tcase_create("strlen");

  tcase_add_test(tc, test_1);
  tcase_add_test(tc, test_2);
  tcase_add_test(tc, test_3);
  tcase_add_test(tc, test_4);

  suite_add_tcase(suite, tc);

  return suite;
}
