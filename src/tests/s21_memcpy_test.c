//
// Created by maksim on 21.11.23.
//
#include "s21_string_test.h"

START_TEST(valid_test_1) {
  char str1[] = "abc";
  const size_t size_of_str = sizeof(str1) / sizeof(char);
  char str_copy1[size_of_str];

  char str_copy2[size_of_str];

  memcpy((void*)str_copy1, (void*)str1, size_of_str);
  s21_memcpy((void*)str_copy2, (void*)str1, size_of_str);

  ck_assert(memcmp((void*)str_copy1, (void*)str_copy2, size_of_str) == 0);
}
END_TEST
START_TEST(valid_test_2) {
  char str1[] = "";
  const size_t size_of_str = sizeof(str1) / sizeof(char);
  char str_copy1[size_of_str];

  char str_copy2[size_of_str];

  memcpy((void*)str_copy1, (void*)str1, size_of_str);
  s21_memcpy((void*)str_copy2, (void*)str1, size_of_str);

  ck_assert(memcmp((void*)str_copy1, (void*)str_copy2, size_of_str) == 0);
}
END_TEST

START_TEST(valid_test_4) {
  char str1[] = "1234326246246";
  char str_copy1[4];

  char str_copy2[4];

  memcpy((void*)str_copy1, (void*)str1, 4);
  s21_memcpy((void*)str_copy2, (void*)str1, 4);

  ck_assert(memcmp((void*)str_copy1, (void*)str_copy2, 4) == 0);
}
END_TEST
START_TEST(valid_test_5) {
  char str1[] = "\200\377\205\210";

  const size_t size_of_str = sizeof(str1) / sizeof(char);
  char str_copy1[size_of_str];

  char str_copy2[size_of_str];

  memcpy((void*)str_copy1, (void*)str1, size_of_str);
  s21_memcpy((void*)str_copy2, (void*)str1, size_of_str);

  ck_assert(memcmp((void*)str_copy1, (void*)str_copy2, size_of_str) == 0);
}
END_TEST
Suite* create_memcpy_suite() {
  Suite* suite = suite_create("memcpy tests");
  TCase* tc = tcase_create("valid tests");
  tcase_add_test(tc, valid_test_1);
  tcase_add_test(tc, valid_test_2);
  tcase_add_test(tc, valid_test_4);
  tcase_add_test(tc, valid_test_5);
  suite_add_tcase(suite, tc);
  return suite;
}
