#include <locale.h>

#include "s21_string_test.h"
START_TEST(test_d_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%d";
  int a = 1849237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_d_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "% d";
  int b = 9473542;
  sprintf(buf1, format_test, b);
  s21_sprintf(buf2, format_test, b);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_d_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10d";
  int c = 2381590;
  sprintf(buf1, format_test, c);
  s21_sprintf(buf2, format_test, c);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_d_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.20d";
  int d = 3485322;
  sprintf(buf1, format_test, d);
  s21_sprintf(buf2, format_test, d);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_d_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50d";
  int e = 3458358;
  sprintf(buf1, format_test, e);
  s21_sprintf(buf2, format_test, e);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_d_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+50d";
  int f = 4382132;
  sprintf(buf1, format_test, f);
  s21_sprintf(buf2, format_test, f);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_d_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+070.10d";
  int g = -3425134;
  sprintf(buf1, format_test, g);
  s21_sprintf(buf2, format_test, g);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_d_8) {
  char buf1[1000];
  char buf2[1000];
  char *format_test = "%-070.10d";
  int h = 3245345;
  sprintf(buf1, format_test, h);
  s21_sprintf(buf2, format_test, h);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_ld_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%ld";
  long int a = 641849237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_ld_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "% 10ld";
  long int a = 641849237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_ld_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10ld";
  long int a = 641849237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_ld_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.20ld";
  long int a = 641849237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_ld_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50ld";
  long int a = 641849237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_ld_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+50ld";
  long int a = -641849237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_ld_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+070.10ld";
  long int a = 641849237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_ld_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10ld";
  long int a = 641849237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hd_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%hd";
  short a = 30454;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hd_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "% hd";
  short a = 30454;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hd_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10hd";
  short a = 30454;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hd_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+50hd";
  short a = -30454;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hd_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.20hd";
  short a = 30454;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hd_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50hd";
  short a = 30454;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hd_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%070.10hd";
  short a = 30454;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hd_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10hd";
  short a = 30454;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_c_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%c";
  char a = 'a';
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_c_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%11c";
  char a = 'a';
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_c_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%91c";
  char a = 'a';
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_c_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-5c";
  char a = 'a';
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_c_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-c";
  char a = 'a';
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_c_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-22c";
  char a = 'a';
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_c_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-1c";
  char a = 'a';
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_c_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%c";
  char a = '/';
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_s_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%s";
  char *a = "The legend of zelda: tears of the kindoms";
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_s_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%.10s";
  char *a = "The legend of zelda: tears of the kindoms";
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_s_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-11s";
  char *a = "The legend of zelda: tears of the kindoms";
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_s_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10s";
  char *a = "The legend of zelda: tears of the kindoms";
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_s_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.20s";
  char *a = "The legend of zelda: tears of the kindoms";
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_s_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-8.4s";
  char *a = "The legend of zelda: tears of the kindoms";
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_s_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%11.5s";
  char *a = "The legend of zelda: tears of the kindoms";
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_s_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-.11s";
  char *a = "The legend of zelda: tears of the kindoms";
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_u_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%u";
  unsigned int a = 49237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_u_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%u";
  unsigned int a = 49237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_u_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10u";
  unsigned int a = 49237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_u_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.20u";
  unsigned int a = 49237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_u_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50u";
  unsigned int a = 49237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_u_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%50u";
  unsigned int a = 49237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_u_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%070.10u";
  unsigned int a = 49237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_u_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10u";
  unsigned int a = 49237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lu_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%lu";
  unsigned long a = 1641849237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lu_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%lu";
  unsigned long a = 1641849237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lu_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10lu";
  unsigned long a = 1641849237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lu_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.20lu";
  unsigned long a = 1641849237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lu_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50lu";
  unsigned long a = 1641849237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lu_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%50lu";
  unsigned long a = 1641849237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lu_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%070.10lu";
  unsigned long a = 1641849237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lu_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10lu";
  unsigned long a = 1641849237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hu_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%hu";
  unsigned short a = 30454;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hu_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%hu";
  unsigned short a = 30454;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hu_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10hu";
  unsigned short a = 30454;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hu_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%50hu";
  unsigned short a = 30454;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hu_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.20hu";
  unsigned short a = 30454;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hu_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50hu";
  unsigned short a = 30454;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hu_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%070.10hu";
  unsigned short a = 30454;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hu_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10hu";
  unsigned short a = 30454;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_i_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%i";
  int a = 304345354;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_i_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "% i";
  int a = 304345354;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_i_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10i";
  int a = 304345354;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_i_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%50i";
  int a = 304345354;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_i_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.20i";
  int a = 304345354;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_i_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50i";
  int a = 304345354;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_i_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+070.10i";
  int a = -304345354;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_i_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10i";
  int a = 304345354;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_li_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%li";
  long int a = 1641849237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_li_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "% li";
  long int a = 1641849237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_li_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10li";
  long int a = 1641849237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_li_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.20li";
  long int a = 1641849237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_li_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50li";
  long int a = 1641849237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_li_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+50li";
  long int a = -1641849237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_li_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+070.10li";
  long int a = 1641849237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_li_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10li";
  long int a = 1641849237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hi_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%hi";
  unsigned short a = 18237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hi_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "% hi";
  unsigned short a = 18237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hi_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.1hi";
  unsigned short a = 18237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hi_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.20hi";
  unsigned short a = 18237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hi_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50hi";
  unsigned short a = 18237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hi_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%50hi";
  unsigned short a = 18237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hi_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%070.10hi";
  unsigned short a = 18237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hi_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10hi";
  unsigned short a = 18237;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_o_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%o";
  unsigned long a = 4000000;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_o_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%#o";
  unsigned long a = 4000000;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_o_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10o";
  unsigned long a = 4000000;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_o_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.20o";
  unsigned long a = 4000000;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_o_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50o";
  unsigned long a = 4000000;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_o_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%50o";
  unsigned long a = 4000000;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_o_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%070.10o";
  unsigned long a = 4000000;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_o_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10o";
  unsigned long a = 4000000;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lo_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%lo";
  unsigned long a = 4000000;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lo_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%#lo";
  unsigned long a = 4000000;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lo_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10lo";
  unsigned long a = 4000000;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lo_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.20lo";
  unsigned long a = 4000000;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lo_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50lo";
  unsigned long a = 4000000;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lo_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%50lo";
  unsigned long a = 4000000;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lo_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%070.10lo";
  unsigned long a = 4000000;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lo_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10lo";
  unsigned long a = 4000000;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_ho_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%ho";
  unsigned short a = 40000;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_ho_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%#ho";
  unsigned short a = 40000;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_ho_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10ho";
  unsigned short a = 40000;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_ho_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.20ho";
  unsigned short a = 40000;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_ho_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50ho";
  unsigned short a = 40000;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_ho_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%50ho";
  unsigned short a = 40000;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_ho_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%070.10ho ";
  unsigned short a = 40000;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_ho_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10ho";
  unsigned short a = 40000;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_x_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%x";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_x_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%#x";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_x_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10x";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_x_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.20x";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_x_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50x";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_x_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%50x";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_x_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%070.10x";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_x_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10x";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lx_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%lx";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lx_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%#lx";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lx_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10lx";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lx_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.20lx";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lx_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50lx";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lx_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%50lx";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lx_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%070.10lx";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lx_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10lx";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hx_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%hx";
  unsigned short a = 39325;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hx_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%#hx";
  unsigned short a = 39325;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hx_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10hx";
  unsigned short a = 39325;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hx_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.20hx";
  unsigned short a = 39325;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hx_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50hx";
  unsigned short a = 39325;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hx_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%50hx";
  unsigned short a = 39325;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hx_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%070.10hx";
  unsigned short a = 39325;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hx_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10hx";
  unsigned short a = 39325;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_X_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%X";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_X_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%#X";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_X_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10X";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_X_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.20X";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_X_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50X";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_X_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%50X";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_X_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%070.10X";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_X_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10X";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lX_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%lX";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lX_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%#lX";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lX_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10lX";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lX_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.20lX";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lX_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50lX";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lX_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%50lX";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lX_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%070.10lX";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_lX_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10lX";
  unsigned long a = 85273943;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hX_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%hX";
  unsigned short a = 39325;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hX_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%#hX";
  unsigned short a = 39325;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hX_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10hX";
  unsigned short a = 39325;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hX_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.20hX";
  unsigned short a = 39325;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hX_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50hX";
  unsigned short a = 39325;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hX_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%50hX";
  unsigned short a = 39325;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hX_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%070.10hX";
  unsigned short a = 39325;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_hX_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10hX";
  unsigned short a = 39325;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_p_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%p";
  int a = 0;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_p_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%p";
  char a = 'c';
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_p_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%p";
  char *a = "Hello world";
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_p_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%p";
  unsigned short a = 34532;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_f_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%f";
  double a = 1849237.5248520349;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_f_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%#f";
  double a = 1849237.5248520349;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_f_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10f";
  double a = 1849237.5248520349;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_f_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.18f";
  double a = 1849237.5248520349;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_f_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50f";
  double a = 1849237.5248520349;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_f_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+50f";
  double a = -1849237.5248520349;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_f_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+.10f";
  double a = 1849237.5248520349;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_f_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10f";
  double a = 1849237.5248520349;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_Lf_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%Lf";
  double long a = 1849237.5248520349;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_Lf_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%#Lf";
  double long a = 1849237.5248520349;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_Lf_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10Lf";
  double long a = 1849237.5248520349;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_Lf_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.19Lf";
  double long a = 1849237.5248520349;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_Lf_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50Lf";
  double long a = 1849237.5248520349;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_Lf_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+50Lf";
  double long a = -1849237.5248520349;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_Lf_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+.10Lf";
  double long a = 1849237.5248520349;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_Lf_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10Lf";
  double long a = 1849237.5248520349;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_e_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%e";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_e_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%#e";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_e_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10e";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_e_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.15e";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_e_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50e";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_e_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+50e";
  double a = -9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_e_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+.10e";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_e_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10e";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_Le_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%Le";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_Le_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%#Le";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_Le_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10Le";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_Le_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.15Le";
  long double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_Le_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50Le";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_Le_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+50Le";
  double long a = -9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_Le_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+.10Le";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_Le_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10Le";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_E_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%E";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_E_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%#E";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_E_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10E";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_E_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.15E";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_E_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50E";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_E_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+50E";
  double a = -9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_E_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+.10E";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_E_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10E";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_LE_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%LE";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_LE_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%#LE";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_LE_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10LE";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_LE_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.15LE";
  long double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_LE_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50LE";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_LE_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+50LE";
  double long a = -9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_LE_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+.10LE";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_LE_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10LE";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}
END_TEST

START_TEST(test_LE_9) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10LE";
  double long a = 1E20;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}
END_TEST

START_TEST(test_LE_10) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+070.10LE";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}
END_TEST

START_TEST(test_LE_11) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%#-070.10LE";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}
END_TEST

START_TEST(test_LE_12) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "% 070.10LE";
  double long a = 1E121;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}
END_TEST

START_TEST(test_g_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%g";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_g_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%#g";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_g_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10g";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_g_4) {
  char buf1[100] = "";
  char buf2[100];
  char *format_test = "%10.15g";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_g_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50g";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_g_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+50g";
  double a = -9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_g_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+.10g";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_g_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10g";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_Lg_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%Lg";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_Lg_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%#Lg";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_Lg_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10Lg";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_Lg_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.15Lg";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_Lg_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50Lg";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_Lg_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+50Lg";
  double long a = -9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_Lg_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+.10Lg";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_Lg_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10Lg";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_G_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%G";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_G_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%#G";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_G_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10G";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_G_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.15G";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_G_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50G";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_G_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+50G";
  double a = -9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_G_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+.10G";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_G_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10G";
  double a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_LG_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%LG";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_LG_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%#LG";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_LG_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%20.10LG";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_LG_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10.15LG";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_LG_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-50LG";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_LG_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+50LG";
  double long a = -9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_LG_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%+.10LG";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_LG_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-070.10LG";
  double long a = 9473542.3425345234;
  sprintf(buf1, format_test, a);
  s21_sprintf(buf2, format_test, a);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_WC_1) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%lc";
  wchar_t ch = L'Й';
  sprintf(buf1, format_test, ch);
  s21_sprintf(buf2, format_test, ch);
  ck_assert_str_eq(buf1, buf2);
}
START_TEST(test_WC_2) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%1lc";
  wchar_t ch = L'Й';
  sprintf(buf1, format_test, ch);
  s21_sprintf(buf2, format_test, ch);
  ck_assert_str_eq(buf1, buf2);
}
START_TEST(test_WC_3) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%10lc";
  wchar_t ch = L'Я';
  sprintf(buf1, format_test, ch);
  s21_sprintf(buf2, format_test, ch);
  ck_assert_str_eq(buf1, buf2);
}
START_TEST(test_WC_4) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-10lc";
  wchar_t ch = L'Й';
  sprintf(buf1, format_test, ch);
  s21_sprintf(buf2, format_test, ch);
  ck_assert_str_eq(buf1, buf2);
}
START_TEST(test_WC_5) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%lc";
  wchar_t ch = L'Й';
  sprintf(buf1, format_test, ch);
  s21_sprintf(buf2, format_test, ch);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_WC_6) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%11lc";
  wchar_t ch = L'Й';
  sprintf(buf1, format_test, ch);
  s21_sprintf(buf2, format_test, ch);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_WC_7) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%91lc";
  wchar_t ch = L'Й';
  sprintf(buf1, format_test, ch);
  s21_sprintf(buf2, format_test, ch);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_WC_8) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-5lc";
  wchar_t ch = L'Й';
  sprintf(buf1, format_test, ch);
  s21_sprintf(buf2, format_test, ch);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_WC_9) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-lc";
  wchar_t ch = L'Й';
  sprintf(buf1, format_test, ch);
  s21_sprintf(buf2, format_test, ch);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_WC_10) {
  setlocale(LC_ALL, "ru");
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-22lc";
  wchar_t ch = L'Я';
  sprintf(buf1, format_test, ch);
  s21_sprintf(buf2, format_test, ch);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_WC_11) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%-1lc";
  wchar_t ch = L'Й';
  sprintf(buf1, format_test, ch);
  s21_sprintf(buf2, format_test, ch);
  ck_assert_str_eq(buf1, buf2);
}

END_TEST

START_TEST(test_WC_12) {
  char buf1[100] = "";
  char buf2[100] = "";
  char *format_test = "%lc";
  wchar_t ch = L'Й';
  sprintf(buf1, format_test, ch);
  s21_sprintf(buf2, format_test, ch);
  ck_assert_str_eq(buf1, buf2);
}
END_TEST

START_TEST(test_many_spec_1) {
  char buf1[1024] = "";
  char buf2[1024] = "";
  char ch = 'q';
  char *str = "cool!!";
  wchar_t wch = L'Й';
  wchar_t *wstr = L"МАКС ГУРГЕН АРТЁМ";
  int number = 123456;
  long lnumber = 2000000000;
  double frac = 123.123;
  long double lfrac = 123456.1234567891215463511125;

  int result1 = sprintf(
      buf1,
      "%lc %c %d %ld %hd %e %E %f %Lf %g %G %o %ho %lo %s %ls %lu %u %hu %lx "
      "%x %hx %X %p %%",
      wch, ch, number, lnumber, (short int)number, frac, frac, frac, lfrac,
      frac, frac, number, (short)number, lnumber, str, wstr,
      (unsigned long int)lnumber, (unsigned int)number,
      (short unsigned int)number, (unsigned long)lnumber, (unsigned int)number,
      (unsigned short int)number, (unsigned int)number, &number);
  int result2 = s21_sprintf(
      buf2,
      "%lc %c %d %ld %hd %e %E %f %Lf %g %G %o %ho %lo %s %ls %lu %u %hu %lx "
      "%x %hx %X %p %%",
      wch, ch, number, lnumber, (short int)number, frac, frac, frac, lfrac,
      frac, frac, number, (short)number, lnumber, str, wstr,
      (unsigned long int)lnumber, (unsigned int)number,
      (short unsigned int)number, (unsigned long)lnumber, (unsigned int)number,
      (unsigned short int)number, (unsigned int)number, &number);
  ck_assert_str_eq(buf1, buf2);
  ck_assert_int_eq(result1, result2);
}
START_TEST(test_many_spec_2) {
  char buf1[1024] = "";
  char buf2[1024] = "";
  char ch = 'q';
  char *str = "cool!!";
  wchar_t wch = L'Й';
  wchar_t *wstr = L"МАКС ГУРГЕН АРТЁМ";
  int number = 123456;
  long lnumber = 2000000000;
  double frac = 123.123;
  long double lfrac = 123456.1234567891215463511125;

  char *format =
      "%-10lc %-10c %+-10.10d % -5.10ld %-10hd %+-10.7e %+12.8E %12.5f "
      "%24.10Lf %012.5g %#3.7G %-10o %10ho %#10lo %-10s %ls %lu %u %hu %lx %x "
      "%hx %X %-10p %%";

  int result1 = sprintf(
      buf1, format, wch, ch, number, lnumber, (short int)number, frac, frac,
      frac, lfrac, frac, frac, number, (short)number, lnumber, str, wstr,
      (unsigned long int)lnumber, (unsigned int)number,
      (short unsigned int)number, (unsigned long)lnumber, (unsigned int)number,
      (unsigned short int)number, (unsigned int)number, &number);
  int result2 = s21_sprintf(
      buf2, format, wch, ch, number, lnumber, (short int)number, frac, frac,
      frac, lfrac, frac, frac, number, (short)number, lnumber, str, wstr,
      (unsigned long int)lnumber, (unsigned int)number,
      (short unsigned int)number, (unsigned long)lnumber, (unsigned int)number,
      (unsigned short int)number, (unsigned int)number, &number);
  ck_assert_str_eq(buf1, buf2);
  ck_assert_int_eq(result1, result2);
}
END_TEST

Suite *create_sprintf_suite() {
  setlocale(LC_ALL, "en_US.UTF-8");
  Suite *suite = suite_create("Sprintf tests");

  TCase *tc_d = tcase_create("d_handler");
  TCase *tc_ld = tcase_create("ld_handler");
  TCase *tc_hd = tcase_create("hd_handler");
  TCase *tc_c = tcase_create("c_handler");
  TCase *tc_s = tcase_create("s_handler");
  TCase *tc_u = tcase_create("u_handler");
  TCase *tc_lu = tcase_create("lu_handler");
  TCase *tc_hu = tcase_create("hu_handler");
  TCase *tc_i = tcase_create("i_handler");
  TCase *tc_li = tcase_create("li_handler");
  TCase *tc_hi = tcase_create("hi_handler");
  TCase *tc_o = tcase_create("o_handler");
  TCase *tc_lo = tcase_create("lo_handler");
  TCase *tc_ho = tcase_create("ho_handler");
  TCase *tc_x = tcase_create("x_handler");
  TCase *tc_lx = tcase_create("lx_handler");
  TCase *tc_hx = tcase_create("hx_handler");
  TCase *tc_X = tcase_create("X_handler");
  TCase *tc_lX = tcase_create("lX_handler");
  TCase *tc_hX = tcase_create("hX_handler");
  TCase *tc_p = tcase_create("p_handler");
  TCase *tc_f = tcase_create("f_handler");
  TCase *tc_Lf = tcase_create("Lf_handler");
  TCase *tc_e = tcase_create("e_handler");
  TCase *tc_Le = tcase_create("Le_handler");
  TCase *tc_E = tcase_create("E_handler");
  TCase *tc_LE = tcase_create("LE_handler");
  TCase *tc_g = tcase_create("g_handler");
  TCase *tc_Lg = tcase_create("Lg_handler");
  TCase *tc_G = tcase_create("G_handler");
  TCase *tc_LG = tcase_create("LG_handler");
  TCase *tc_WC = tcase_create("WC_handler");
  TCase *tc_random = tcase_create("random tests");

  tcase_add_test(tc_d, test_d_1);
  tcase_add_test(tc_d, test_d_2);
  tcase_add_test(tc_d, test_d_3);
  tcase_add_test(tc_d, test_d_4);
  tcase_add_test(tc_d, test_d_5);
  tcase_add_test(tc_d, test_d_6);
  tcase_add_test(tc_d, test_d_7);
  tcase_add_test(tc_d, test_d_8);
  tcase_add_test(tc_ld, test_ld_1);
  tcase_add_test(tc_ld, test_ld_2);
  tcase_add_test(tc_ld, test_ld_3);
  tcase_add_test(tc_ld, test_ld_4);
  tcase_add_test(tc_ld, test_ld_5);
  tcase_add_test(tc_ld, test_ld_6);
  tcase_add_test(tc_ld, test_ld_7);
  tcase_add_test(tc_ld, test_ld_8);
  tcase_add_test(tc_hd, test_hd_1);
  tcase_add_test(tc_hd, test_hd_2);
  tcase_add_test(tc_hd, test_hd_3);
  tcase_add_test(tc_hd, test_hd_4);
  tcase_add_test(tc_hd, test_hd_5);
  tcase_add_test(tc_hd, test_hd_6);
  tcase_add_test(tc_hd, test_hd_7);
  tcase_add_test(tc_hd, test_hd_8);
  tcase_add_test(tc_c, test_c_1);
  tcase_add_test(tc_c, test_c_2);
  tcase_add_test(tc_c, test_c_3);
  tcase_add_test(tc_c, test_c_4);
  tcase_add_test(tc_c, test_c_5);
  tcase_add_test(tc_c, test_c_6);
  tcase_add_test(tc_c, test_c_7);
  tcase_add_test(tc_c, test_c_8);
  tcase_add_test(tc_s, test_s_1);
  tcase_add_test(tc_s, test_s_2);
  tcase_add_test(tc_s, test_s_3);
  tcase_add_test(tc_s, test_s_4);
  tcase_add_test(tc_s, test_s_5);
  tcase_add_test(tc_s, test_s_6);
  tcase_add_test(tc_s, test_s_7);
  tcase_add_test(tc_s, test_s_8);
  tcase_add_test(tc_u, test_u_1);
  tcase_add_test(tc_u, test_u_2);
  tcase_add_test(tc_u, test_u_3);
  tcase_add_test(tc_u, test_u_4);
  tcase_add_test(tc_u, test_u_5);
  tcase_add_test(tc_u, test_u_6);
  tcase_add_test(tc_u, test_u_7);
  tcase_add_test(tc_u, test_u_8);
  tcase_add_test(tc_lu, test_lu_1);
  tcase_add_test(tc_lu, test_lu_2);
  tcase_add_test(tc_lu, test_lu_3);
  tcase_add_test(tc_lu, test_lu_4);
  tcase_add_test(tc_lu, test_lu_5);
  tcase_add_test(tc_lu, test_lu_6);
  tcase_add_test(tc_lu, test_lu_7);
  tcase_add_test(tc_lu, test_lu_8);
  tcase_add_test(tc_hu, test_hu_1);
  tcase_add_test(tc_hu, test_hu_2);
  tcase_add_test(tc_hu, test_hu_3);
  tcase_add_test(tc_hu, test_hu_4);
  tcase_add_test(tc_hu, test_hu_5);
  tcase_add_test(tc_hu, test_hu_6);
  tcase_add_test(tc_hu, test_hu_7);
  tcase_add_test(tc_hu, test_hu_8);
  tcase_add_test(tc_i, test_i_1);
  tcase_add_test(tc_i, test_i_2);
  tcase_add_test(tc_i, test_i_3);
  tcase_add_test(tc_i, test_i_4);
  tcase_add_test(tc_i, test_i_5);
  tcase_add_test(tc_i, test_i_6);
  tcase_add_test(tc_i, test_i_7);
  tcase_add_test(tc_i, test_i_8);
  tcase_add_test(tc_li, test_li_1);
  tcase_add_test(tc_li, test_li_2);
  tcase_add_test(tc_li, test_li_3);
  tcase_add_test(tc_li, test_li_4);
  tcase_add_test(tc_li, test_li_5);
  tcase_add_test(tc_li, test_li_6);
  tcase_add_test(tc_li, test_li_7);
  tcase_add_test(tc_li, test_li_8);
  tcase_add_test(tc_hi, test_hi_1);
  tcase_add_test(tc_hi, test_hi_2);
  tcase_add_test(tc_hi, test_hi_3);
  tcase_add_test(tc_hi, test_hi_4);
  tcase_add_test(tc_hi, test_hi_5);
  tcase_add_test(tc_hi, test_hi_6);
  tcase_add_test(tc_hi, test_hi_7);
  tcase_add_test(tc_hi, test_hi_8);
  tcase_add_test(tc_o, test_o_1);
  tcase_add_test(tc_o, test_o_2);
  tcase_add_test(tc_o, test_o_3);
  tcase_add_test(tc_o, test_o_4);
  tcase_add_test(tc_o, test_o_5);
  tcase_add_test(tc_o, test_o_6);
  tcase_add_test(tc_o, test_o_7);
  tcase_add_test(tc_o, test_o_8);
  tcase_add_test(tc_lo, test_lo_1);
  tcase_add_test(tc_lo, test_lo_2);
  tcase_add_test(tc_lo, test_lo_3);
  tcase_add_test(tc_lo, test_lo_4);
  tcase_add_test(tc_lo, test_lo_5);
  tcase_add_test(tc_lo, test_lo_6);
  tcase_add_test(tc_lo, test_lo_7);
  tcase_add_test(tc_lo, test_lo_8);
  tcase_add_test(tc_ho, test_ho_1);
  tcase_add_test(tc_ho, test_ho_2);
  tcase_add_test(tc_ho, test_ho_3);
  tcase_add_test(tc_ho, test_ho_4);
  tcase_add_test(tc_ho, test_ho_5);
  tcase_add_test(tc_ho, test_ho_6);
  tcase_add_test(tc_ho, test_ho_7);
  tcase_add_test(tc_ho, test_ho_8);
  tcase_add_test(tc_x, test_x_1);
  tcase_add_test(tc_x, test_x_2);
  tcase_add_test(tc_x, test_x_3);
  tcase_add_test(tc_x, test_x_4);
  tcase_add_test(tc_x, test_x_5);
  tcase_add_test(tc_x, test_x_6);
  tcase_add_test(tc_x, test_x_7);
  tcase_add_test(tc_x, test_x_8);
  tcase_add_test(tc_lx, test_lx_1);
  tcase_add_test(tc_lx, test_lx_2);
  tcase_add_test(tc_lx, test_lx_3);
  tcase_add_test(tc_lx, test_lx_4);
  tcase_add_test(tc_lx, test_lx_5);
  tcase_add_test(tc_lx, test_lx_6);
  tcase_add_test(tc_lx, test_lx_7);
  tcase_add_test(tc_lx, test_lx_8);
  tcase_add_test(tc_hx, test_hx_1);
  tcase_add_test(tc_hx, test_hx_2);
  tcase_add_test(tc_hx, test_hx_3);
  tcase_add_test(tc_hx, test_hx_4);
  tcase_add_test(tc_hx, test_hx_5);
  tcase_add_test(tc_hx, test_hx_6);
  tcase_add_test(tc_hx, test_hx_7);
  tcase_add_test(tc_hx, test_hx_8);
  tcase_add_test(tc_X, test_X_1);
  tcase_add_test(tc_X, test_X_2);
  tcase_add_test(tc_X, test_X_3);
  tcase_add_test(tc_X, test_X_4);
  tcase_add_test(tc_X, test_X_5);
  tcase_add_test(tc_X, test_X_6);
  tcase_add_test(tc_X, test_X_7);
  tcase_add_test(tc_X, test_X_8);
  tcase_add_test(tc_lX, test_lX_1);
  tcase_add_test(tc_lX, test_lX_2);
  tcase_add_test(tc_lX, test_lX_3);
  tcase_add_test(tc_lX, test_lX_4);
  tcase_add_test(tc_lX, test_lX_5);
  tcase_add_test(tc_lX, test_lX_6);
  tcase_add_test(tc_lX, test_lX_7);
  tcase_add_test(tc_lX, test_lX_8);
  tcase_add_test(tc_hX, test_hX_1);
  tcase_add_test(tc_hX, test_hX_2);
  tcase_add_test(tc_hX, test_hX_3);
  tcase_add_test(tc_hX, test_hX_4);
  tcase_add_test(tc_hX, test_hX_5);
  tcase_add_test(tc_hX, test_hX_6);
  tcase_add_test(tc_hX, test_hX_7);
  tcase_add_test(tc_hX, test_hX_8);
  tcase_add_test(tc_p, test_p_1);
  tcase_add_test(tc_p, test_p_2);
  tcase_add_test(tc_p, test_p_3);
  tcase_add_test(tc_p, test_p_4);
  tcase_add_test(tc_f, test_f_1);
  tcase_add_test(tc_f, test_f_2);
  tcase_add_test(tc_f, test_f_3);
  tcase_add_test(tc_f, test_f_4);
  tcase_add_test(tc_f, test_f_5);
  tcase_add_test(tc_f, test_f_6);
  tcase_add_test(tc_f, test_f_7);
  tcase_add_test(tc_f, test_f_8);
  tcase_add_test(tc_Lf, test_Lf_1);
  tcase_add_test(tc_Lf, test_Lf_2);
  tcase_add_test(tc_Lf, test_Lf_3);
  tcase_add_test(tc_Lf, test_Lf_4);
  tcase_add_test(tc_Lf, test_Lf_5);
  tcase_add_test(tc_Lf, test_Lf_6);
  tcase_add_test(tc_Lf, test_Lf_7);
  tcase_add_test(tc_Lf, test_Lf_8);
  tcase_add_test(tc_e, test_e_1);
  tcase_add_test(tc_e, test_e_2);
  tcase_add_test(tc_e, test_e_3);
  tcase_add_test(tc_e, test_e_4);
  tcase_add_test(tc_e, test_e_5);
  tcase_add_test(tc_e, test_e_6);
  tcase_add_test(tc_e, test_e_7);
  tcase_add_test(tc_e, test_e_8);
  tcase_add_test(tc_Le, test_Le_1);
  tcase_add_test(tc_Le, test_Le_2);
  tcase_add_test(tc_Le, test_Le_3);
  tcase_add_test(tc_Le, test_Le_4);
  tcase_add_test(tc_Le, test_Le_5);
  tcase_add_test(tc_Le, test_Le_6);
  tcase_add_test(tc_Le, test_Le_7);
  tcase_add_test(tc_Le, test_Le_8);

  tcase_add_test(tc_E, test_E_1);
  tcase_add_test(tc_E, test_E_2);
  tcase_add_test(tc_E, test_E_3);
  tcase_add_test(tc_E, test_E_4);
  tcase_add_test(tc_E, test_E_5);
  tcase_add_test(tc_E, test_E_6);
  tcase_add_test(tc_E, test_E_7);
  tcase_add_test(tc_E, test_E_8);
  tcase_add_test(tc_LE, test_LE_1);
  tcase_add_test(tc_LE, test_LE_2);
  tcase_add_test(tc_LE, test_LE_3);
  tcase_add_test(tc_LE, test_LE_4);
  tcase_add_test(tc_LE, test_LE_5);
  tcase_add_test(tc_LE, test_LE_6);
  tcase_add_test(tc_LE, test_LE_7);
  tcase_add_test(tc_LE, test_LE_8);
  tcase_add_test(tc_Le, test_LE_9);
  tcase_add_test(tc_Le, test_LE_10);
  tcase_add_test(tc_Le, test_LE_11);
  tcase_add_test(tc_Le, test_LE_12);
  tcase_add_test(tc_g, test_g_1);
  tcase_add_test(tc_g, test_g_2);
  tcase_add_test(tc_g, test_g_3);
  tcase_add_test(tc_g, test_g_4);
  tcase_add_test(tc_g, test_g_5);
  tcase_add_test(tc_g, test_g_6);
  tcase_add_test(tc_g, test_g_7);
  tcase_add_test(tc_g, test_g_8);
  tcase_add_test(tc_Lg, test_Lg_1);
  tcase_add_test(tc_Lg, test_Lg_2);
  tcase_add_test(tc_Lg, test_Lg_3);
  tcase_add_test(tc_Lg, test_Lg_4);
  tcase_add_test(tc_Lg, test_Lg_5);
  tcase_add_test(tc_Lg, test_Lg_6);
  tcase_add_test(tc_Lg, test_Lg_7);
  tcase_add_test(tc_Lg, test_Lg_8);
  tcase_add_test(tc_G, test_G_1);
  tcase_add_test(tc_G, test_G_2);
  tcase_add_test(tc_G, test_G_3);
  tcase_add_test(tc_G, test_G_4);
  tcase_add_test(tc_G, test_G_5);
  tcase_add_test(tc_G, test_G_6);
  tcase_add_test(tc_G, test_G_7);
  tcase_add_test(tc_G, test_G_8);
  tcase_add_test(tc_LG, test_LG_1);
  tcase_add_test(tc_LG, test_LG_2);
  tcase_add_test(tc_LG, test_LG_3);
  tcase_add_test(tc_LG, test_LG_4);
  tcase_add_test(tc_LG, test_LG_5);
  tcase_add_test(tc_LG, test_LG_6);
  tcase_add_test(tc_LG, test_LG_7);
  tcase_add_test(tc_LG, test_LG_8);
  tcase_add_test(tc_WC, test_WC_1);
  tcase_add_test(tc_WC, test_WC_2);
  tcase_add_test(tc_WC, test_WC_3);
  tcase_add_test(tc_WC, test_WC_4);
  tcase_add_test(tc_WC, test_WC_5);
  tcase_add_test(tc_WC, test_WC_6);
  tcase_add_test(tc_WC, test_WC_7);
  tcase_add_test(tc_WC, test_WC_8);
  tcase_add_test(tc_WC, test_WC_9);
  tcase_add_test(tc_WC, test_WC_10);
  tcase_add_test(tc_WC, test_WC_11);
  tcase_add_test(tc_WC, test_WC_12);
  tcase_add_test(tc_random, test_many_spec_1);
  tcase_add_test(tc_random, test_many_spec_2);

  suite_add_tcase(suite, tc_d);
  suite_add_tcase(suite, tc_ld);
  suite_add_tcase(suite, tc_hd);
  suite_add_tcase(suite, tc_c);
  suite_add_tcase(suite, tc_s);
  suite_add_tcase(suite, tc_u);
  suite_add_tcase(suite, tc_lu);
  suite_add_tcase(suite, tc_hu);
  suite_add_tcase(suite, tc_i);
  suite_add_tcase(suite, tc_li);
  suite_add_tcase(suite, tc_hi);
  suite_add_tcase(suite, tc_o);
  suite_add_tcase(suite, tc_lo);
  suite_add_tcase(suite, tc_ho);
  suite_add_tcase(suite, tc_x);
  suite_add_tcase(suite, tc_lx);
  suite_add_tcase(suite, tc_hx);
  suite_add_tcase(suite, tc_X);
  suite_add_tcase(suite, tc_lX);
  suite_add_tcase(suite, tc_hX);
  suite_add_tcase(suite, tc_p);
  suite_add_tcase(suite, tc_f);
  suite_add_tcase(suite, tc_Lf);
  suite_add_tcase(suite, tc_e);
  suite_add_tcase(suite, tc_Le);
  suite_add_tcase(suite, tc_E);
  suite_add_tcase(suite, tc_LE);
  suite_add_tcase(suite, tc_g);
  suite_add_tcase(suite, tc_Lg);
  suite_add_tcase(suite, tc_G);
  suite_add_tcase(suite, tc_LG);
  suite_add_tcase(suite, tc_WC);
  suite_add_tcase(suite, tc_random);

  return suite;
}