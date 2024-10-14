#include <iostream>
#include "../include/main.h"

using namespace std;

int main() {
    const int n = 5;
    int a[n] = {1, 2, 3, 4, 5};

    Print(a, n, 0);

    cout << "Sum of indexes of odd numbers: " << Sum(a, n, 0) << endl;

    return 0;
}