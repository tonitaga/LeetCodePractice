#ifndef LEETCODEPRACTICE_MIDDLELINKEDLIST_H
#define LEETCODEPRACTICE_MIDDLELINKEDLIST_H

namespace s21 {
    struct ListNode {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        explicit ListNode(int val) : val(val), next(nullptr) {}
        ListNode(int val, ListNode *next) : val(val), next(next) {}
    };

    class MiddleListFinder {
    public:
        static ListNode *Find(ListNode *head) {
            if (head == nullptr || head->next == nullptr) {
                return head;
            }

            ListNode *slow = head;
            ListNode *fast = head;

            while (fast->next != nullptr && fast->next->next != nullptr) {
                slow = slow->next;
                fast = fast->next->next;
            }

            if (fast->next != nullptr)
                slow = slow->next;

            return slow;
        }
    };
}

#endif //LEETCODEPRACTICE_MIDDLELINKEDLIST_H
