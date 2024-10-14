#include "../include/main.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Print(int* b, const int size, int i) {
  cout << setw(4) << b[i];
  if (i < size - 1)
    Print(b, size, i + 1);
  else
    cout << endl;
}

int Sum(int* b, int n, int i) {
  int sum = 0;

  if (i < n) {
    if (b[i] % 2 != 0)
      sum += i;
    sum += Sum(b, n, i + 1);
  }

  return sum;
}