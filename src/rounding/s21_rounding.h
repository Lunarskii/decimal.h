#ifndef SRC_ROUNDING_S21_ROUNDING_H_
#define SRC_ROUNDING_S21_ROUNDING_H_

#include "../s21_decimal.h"

int s21_floor(s21_decimal value, s21_decimal *result);
int s21_round(s21_decimal value, s21_decimal *result);
int s21_truncate(s21_decimal value, s21_decimal *result);
int s21_negate(s21_decimal value, s21_decimal *result);

#endif  // SRC_ROUNDING_S21_ROUNDING_H_
