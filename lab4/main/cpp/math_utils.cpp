#include "math_utils.h"
#include <stdexcept>

int MathUtils::factorial(int n) {
    if (n < 0) throw std::invalid_argument("Negative numbers are not allowed");
    return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
}

int MathUtils::gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

bool MathUtils::isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}
