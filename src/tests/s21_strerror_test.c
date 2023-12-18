#include "s21_string_test.h"

START_TEST(test_1) {
  char *buf1 = NULL;
  char *buf2 = NULL;
  for (int errnum = 0; errnum < S21_ERRORS_COUNT; errnum++) {
    buf1 = strerror(errnum);
    buf2 = s21_strerror(errnum);
    ck_assert(strcmp(buf1, buf2) == 0);
    buf1 = NULL;
    buf2 = NULL;
  }
}
END_TEST

Suite *create_strerror_suite() {
  Suite *suite = suite_create("strerror tests");
  TCase *tc = tcase_create("strerror");

  tcase_add_test(tc, test_1);
  suite_add_tcase(suite, tc);

  return suite;
}