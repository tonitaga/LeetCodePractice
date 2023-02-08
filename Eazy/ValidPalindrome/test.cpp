#include "validpalindrome.h"

int main() {
    std::cout << s21::ValidPalindrome::IsPalindrome("A man, a plan, a canal: Panama") << " == 1\n";
    std::cout << s21::ValidPalindrome::IsPalindrome("race a car") << " == 0\n";
    std::cout << s21::ValidPalindrome::IsPalindrome("") << " == 1\n";
    std::cout << s21::ValidPalindrome::IsPalindrome("s") << " == 1\n";
    std::cout << s21::ValidPalindrome::IsPalindrome("0P") << " == 0\n";
}
