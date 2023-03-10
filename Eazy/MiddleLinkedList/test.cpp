#include "middlelinkedlist.h"

#include <iostream>

/* stack  FILO */
s21::ListNode *Construct(std::initializer_list<int> const &items) {
    s21::ListNode *head = nullptr;
    for (auto item : items) {
        auto *node = new s21::ListNode(item, head);
        head = node;
    }
    return head;
}

void PrintList(s21::ListNode *head, std::string correct_answer) {
    std::cout << "[ ";
    while (head) {
        std::cout << head->val << ' ';
        head = head->next;
    }
    std::cout << "] == [ " << correct_answer << " ]\n";
}

void TestCase_1() {
    auto head = Construct({1, 2, 3, 4, 5, 6, 7});
    auto middle_node = s21::MiddleListFinder::Find(head);
    PrintList(middle_node, "4 3 2 1");
}

void TestCase_2() {
    auto head = Construct({1, 2, 3});
    auto middle_node = s21::MiddleListFinder::Find(head);
    PrintList(middle_node, "2 1");
}

void TestCase_3() {
    auto head = Construct({1});
    auto middle_node = s21::MiddleListFinder::Find(head);
    PrintList(middle_node, "1");
}

void TestCase_4() {
    auto head = Construct({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15});
    auto middle_node = s21::MiddleListFinder::Find(head);
    PrintList(middle_node, "8 7 6 5 4 3 2 1");
}

void TestCase_5() {
    auto head = Construct({});
    auto middle_node = s21::MiddleListFinder::Find(head);

    if (middle_node == nullptr) std::cout << "[ nullptr == nullptr ]\n";
    else
        std::cout << "Error\n";
}

int main() {
    TestCase_1();
    TestCase_2();
    TestCase_3();
    TestCase_4();
    TestCase_5();
    return 0;
}
