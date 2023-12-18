#include "tests/s21_string_test.h"

void run_tests() {
  int count_of_tests = 20;
  Suite *suite = NULL;
  SRunner *sRunner = NULL;
  Suite *suite_array[] = {
      create_memchr_suite(),  create_memcmp_suite(),  create_strstr_suite(),
      create_memcpy_suite(),  create_memset_suite(),  create_strncat_suite(),
      create_strchr_suite(),  create_strncpy_suite(), create_strerror_suite(),
      create_strlen_suite(),  create_strrchr_suite(), create_strpbrk_suite(),
      create_strtok_suite(),  create_strncmp_suite(), create_insert_suite(),
      create_trim_suite(),    create_tolower_suite(), create_toupper_suite(),
      create_strcspn_suite(), create_sprintf_suite()};

  for (int i = 0; i < count_of_tests; i++) {
    suite = suite_array[i];
    sRunner = srunner_create(suite);
    srunner_set_fork_status(sRunner, CK_NOFORK);

    srunner_run_all(sRunner, CK_NORMAL);
    srunner_free(sRunner);

    suite = NULL;
    sRunner = NULL;
  };
}

int main() { run_tests(); }
