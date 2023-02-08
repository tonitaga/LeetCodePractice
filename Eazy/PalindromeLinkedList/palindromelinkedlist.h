#ifndef LEETCODEPRACTICE_PALINDROMELINKEDLIST_H
#define LEETCODEPRACTICE_PALINDROMELINKEDLIST_H

#include <iostream>
#include <algorithm>
#include <stack>

namespace s21 {

    struct ListNode {
        int value = 0;
        ListNode *next{};
    };

    class PalindromeLinkedList {
    public:
        static bool IsPalindrome(ListNode *head) {
            ListNode *tmp = head;
            std::stack<int> reversed_list_node;
            while (tmp != nullptr) {
                reversed_list_node.push(tmp->value);
                tmp = tmp->next;
            }

            while (head != nullptr) {
                int reversed_value = reversed_list_node.top();
                reversed_list_node.pop();
                if (reversed_value != head->value) {
                    return false;
                }
                head = head->next;
            }
            return true;
        }
    };
}

#endif //LEETCODEPRACTICE_PALINDROMELINKEDLIST_H
