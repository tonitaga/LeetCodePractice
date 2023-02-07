#include "longestcommonprefix.h"

void TestCase_1() {
    std::vector<std::string> strings {"flower","flow","flight"};
    std::cout << s21::LongestCommonPrefix::Find(strings) << " == " << "fl\n";
}

void TestCase_2() {
    std::vector<std::string> strings {"dog","racecar","car"};
    std::cout << s21::LongestCommonPrefix::Find(strings) << "==\n";
}

void TestCase_3() {
    std::vector<std::string> strings {"tonitaga", "tonigerl", "tonistark"};
    std::cout << s21::LongestCommonPrefix::Find(strings) << " == " << "toni\n";
}

void TestCase_4() {
    std::vector<std::string> strings;
    std::cout << s21::LongestCommonPrefix::Find(strings) << "==\n";
}

void TestCase_5() {
    std::vector<std::string> strings {"Hello"};
    std::cout << s21::LongestCommonPrefix::Find(strings) << " == " << "Hello\n";
}

int main() {
    TestCase_1();
    TestCase_2();
    TestCase_3();
    TestCase_4();
    TestCase_5();
}