#include "palindromenumber.h"

int main() {
    std::cout << s21::PalindromeNumber::IsPalindrome(121) << " == 1\n";
    std::cout << s21::PalindromeNumber::IsPalindrome(120) << " == 0\n";
    std::cout << s21::PalindromeNumber::IsPalindrome(INT_MIN) << " == 0\n";
    std::cout << s21::PalindromeNumber::IsPalindrome(INT_MAX) << " == 0\n";
    std::cout << s21::PalindromeNumber::IsPalindrome(0) << " == 1\n";
    std::cout << s21::PalindromeNumber::IsPalindrome(1234554321) << " == 1\n";
}