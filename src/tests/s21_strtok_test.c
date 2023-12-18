#include <check.h>
#include <stdbool.h>

#include "s21_string_test.h"
#include "stdio.h"
void assert_results_equal_arrays(char* str_template1, char* str_template2,
                                 char* delims);
START_TEST(valid_test_1) {
  char str_template1[] = "Hello, world!";
  char str_template2[] = "Hello, world!";
  char delims[] = " ";
  assert_results_equal_arrays(str_template1, str_template2, delims);
}
START_TEST(valid_test_2) {
  char str_template1[] = "Hello, world! It`s";
  char str_template2[] = "Hello, world! It`s";
  char delims[] = " ";
  assert_results_equal_arrays(str_template1, str_template2, delims);
}
END_TEST
START_TEST(valid_test_3) {
  char str_template1[] = "Hello, world!;It`s";
  char str_template2[] = "Hello, world!;It`s";
  char delims[] = " ;";
  assert_results_equal_arrays(str_template1, str_template2, delims);
}
START_TEST(valid_test_4) {
  char str_template1[] = "  Hello, world!;It`s  ";
  char str_template2[] = "  Hello, world!;It`s  ";
  char delims[] = " ;";
  assert_results_equal_arrays(str_template1, str_template2, delims);
}
START_TEST(valid_test_5) {
  char str_template1[] = "  Hello,;  ;; world!;It`s  me ";
  char str_template2[] = "  Hello,;  ;; world!;It`s  me ";
  char delims[] = "";
  assert_results_equal_arrays(str_template1, str_template2, delims);
}
START_TEST(valid_test_6) {
  char str_template1[] = "";
  char str_template2[] = "";
  char delims[] = "qwerty    ;fsfasf,.//";
  assert_results_equal_arrays(str_template1, str_template2, delims);
}
START_TEST(valid_test_7) {
  char str_template1[] = "Hello,world! My name;is@capybara-I'am>from>Laplandia";
  char str_template2[] = "Hello,world! My name;is@capybara-I'am>from>Laplandia";
  char delims[] = ",! ;@-'>";
  assert_results_equal_arrays(str_template1, str_template2, delims);
}
START_TEST(valid_test_8) {
  char str_template1[] = "                          ";
  char str_template2[] = "                          ";
  char delims[] = " ";
  assert_results_equal_arrays(str_template1, str_template2, delims);
}
START_TEST(valid_test_9) {
  char str_template1[] = "                          ";
  char str_template2[] = "                          ";
  char delims[] = "";
  assert_results_equal_arrays(str_template1, str_template2, delims);
}
START_TEST(valid_test_10) {
  char str_template1[] = "123456781234567812345678";
  char str_template2[] = "123456781234567812345678";
  char delims[] = "12345678";
  assert_results_equal_arrays(str_template1, str_template2, delims);
}
END_TEST
START_TEST(valid_test_11) {
  char str_template1[] = "";
  char str_template2[] = "";
  char delims[] = "";
  assert_results_equal_arrays(str_template1, str_template2, delims);
}
END_TEST

void assert_results_equal_arrays(char* str_template1, char* str_template2,
                                 char* delims) {
  char* original_tok = strtok(str_template1, delims);
  char* s21_tok = s21_strtok(str_template2, delims);
  while (original_tok != NULL || s21_tok != NULL) {
    ck_assert_str_eq(original_tok, s21_tok);
    original_tok = strtok(NULL, delims);
    s21_tok = s21_strtok(NULL, delims);
  }
}

Suite* create_strtok_suite() {
  Suite* suite = suite_create("strtok tests");
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
  suite_add_tcase(suite, tc);
  return suite;
}
