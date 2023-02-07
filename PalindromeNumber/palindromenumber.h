#ifndef LEETCODEPRACTICE_PALINDROMENUMBER_H
#define LEETCODEPRACTICE_PALINDROMENUMBER_H

#include <iostream>

namespace s21 {
    class PalindromeNumber {
    public:
        static bool IsPalindrome(int number) {
            int tmp = number;
            int64_t reversed = 0;
            while (tmp > 0) {
                reversed *= 10;
                reversed += static_cast<int64_t>(tmp % 10);
                tmp /= 10;
            }
            return reversed == number;
        }
    };
}

#endif //LEETCODEPRACTICE_PALINDROMENUMBER_H
