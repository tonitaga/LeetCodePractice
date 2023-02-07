#ifndef LEETCODEPRACTICE_VALIDPALINDROME_H
#define LEETCODEPRACTICE_VALIDPALINDROME_H

#include <iostream>
#include <algorithm>

namespace s21 {
    class ValidPalindrome {
    public:
        static bool IsPalindrome(const std::string& string) {
            std::string only_letters_and_digits;
            for (auto symbol : string) {
                if ('0' <= symbol and symbol <= '9' or
                    'A' <= symbol and symbol <= 'Z' or
                    'a' <= symbol and symbol <= 'z') {
                    if ('A' <= symbol and symbol <= 'Z')
                        only_letters_and_digits += static_cast<char>(symbol + 32);
                    else
                        only_letters_and_digits += symbol;
                }
            }

            std::string reversed = only_letters_and_digits;
            std::reverse(reversed.begin(), reversed.end());
            return reversed == only_letters_and_digits;
        }
    };
}

#endif //LEETCODEPRACTICE_VALIDPALINDROME_H
