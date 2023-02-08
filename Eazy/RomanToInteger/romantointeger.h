#ifndef LEETCODEPRACTICE_ROMANTOINTEGER_H
#define LEETCODEPRACTICE_ROMANTOINTEGER_H

#include <iostream>

namespace s21 {
    class RomanToInteger {
    private:

    public:
        RomanToInteger() = default;

        /**
         * Roman numerals converting function to int type
         * @param roman_string roman numeral string value
         * @return converted roman string to int
         */
        static int RomanToInt(const std::string& roman_string) {
            int converted = 0;
            for (std::string::size_type i = 0; i != roman_string.size(); ++i) {
                switch (roman_string[i]) {
                    case 'M':
                        converted += 1000;
                        break;
                    case 'D':
                        converted += 500;
                        break;
                    case 'C':
                        converted += CalculateSpecificVariants(roman_string, i, 'D', 'M', 400, 900, 100);
                        break;
                    case 'L':
                        converted += 50;
                        break;
                    case 'X':
                        converted += CalculateSpecificVariants(roman_string, i, 'L', 'C', 40, 90, 10);
                        break;
                    case 'V':
                        converted += 5;
                        break;
                    case 'I':
                        converted += CalculateSpecificVariants(roman_string, i, 'V', 'X', 4, 9, 1);
                        break;
                    default:
                        throw std::invalid_argument("roman_string has invalid style!");
                }
            }
            return converted;
        }

    private:
        static int CalculateSpecificVariants(const std::string &roman_string,
                                      std::string::size_type &index,
                                      char first_check_symbol,
                                      char second_check_symbol,
                                      int sum_for_first,
                                      int sum_for_second,
                                      int sum_for_third) {
            int converted = 0;
            if (index + 1 < roman_string.size()) {
                auto tmp = roman_string[index + 1];
                if (tmp == first_check_symbol) {
                    converted += sum_for_first;
                    index += 1;
                } else if (tmp == second_check_symbol) {
                    converted += sum_for_second;
                    index += 1;
                } else {
                    converted += sum_for_third;
                }
            } else {
                converted += sum_for_third;
            }
            return converted;
        }
    };
}

#endif //LEETCODEPRACTICE_ROMANTOINTEGER_H
