// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double otv = value;
  for (uint64_t i = 2; i <= n; i++)
    otv *= value;
  return otv;
}

uint64_t fact(uint16_t n) {
  uint otv = 1;
  for (uint64_t i = 2; i <= n; i++)
    otv *= i;
  return otv;
}

double calcItem(double x, uint16_t n) {
  return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
  double otv = 1;
  for (uint64_t i = 1; i <= count; i++)
    otv+=calcItem(x, i);
  return otv;
}

double sinn(double x, uint16_t count) {
  double otv = x;
  for (uint64_ i = 2; i <= count; i++)
    otv += pown(-1, i-1) * calcItem(x, 2 * i - 1);
  return otv;
}

double cosn(double x, uint16_t count) {
  double otv = 1;
  for (uint64_t i = 2; i <= count; i++)
    otv += pow(-1, i-1) * calcItem(x, 2 * i - 2);
  return otv;
}
