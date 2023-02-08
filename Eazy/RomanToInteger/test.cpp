#include "romantointeger.h"

int main() {

    std::cout << s21::RomanToInteger::RomanToInt(std::string("XXXIX")) << "==" << 39 << '\n';
    std::cout << s21::RomanToInteger::RomanToInt(std::string("CCXLVI")) << "==" << 246 << '\n';
    std::cout << s21::RomanToInteger::RomanToInt(std::string("DCCLXXXIX")) << "==" << 789 << '\n';
    std::cout << s21::RomanToInteger::RomanToInt(std::string("MMCDXXI")) << "==" << 2421 << '\n';
    std::cout << s21::RomanToInteger::RomanToInt(std::string("III")) << "==" << 3 << '\n';
    std::cout << s21::RomanToInteger::RomanToInt(std::string("LVIII")) << "==" << 58 << '\n';
    std::cout << s21::RomanToInteger::RomanToInt(std::string("MCMXCIV")) << "==" << 1994 << '\n';
}
