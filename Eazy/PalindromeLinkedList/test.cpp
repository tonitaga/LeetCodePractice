#include "palindromelinkedlist.h"

s21::ListNode *CreateNode(int v) {
    auto *node = new s21::ListNode;
    node->value = v;
    node->next = nullptr;
    return node;
}

s21::ListNode *ConstructList(int v1, int v2, int v3, int v4) {
    s21::ListNode *first = CreateNode(v1);
    s21::ListNode *second = CreateNode(v2);
    s21::ListNode *third = CreateNode(v3);
    s21::ListNode *four = CreateNode(v4);

    s21::ListNode *head = first;
    first->next = second;
    second->next = third;
    third->next = four;

    return head;
}

int main() {
    {
        auto head = ConstructList(1, 2, 2, 1);
        std::cout << s21::PalindromeLinkedList::IsPalindrome(head) << " == 1\n";
    }
    {
        auto head = ConstructList(1, 2, 2, 2);
        std::cout << s21::PalindromeLinkedList::IsPalindrome(head) << " == 0\n";
    }
}
