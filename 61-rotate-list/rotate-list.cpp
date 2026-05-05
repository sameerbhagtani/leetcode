/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k == 0)
            return head;

        int n = 1;
        ListNode* oldTail = head;

        while (oldTail->next != nullptr) {
            oldTail = oldTail->next;
            n++;
        }

        k = k % n;
        if (k == 0)
            return head;

        ListNode* newTail = head;
        for (int i = 0; i < n - k - 1; i++) {
            newTail = newTail->next;
        }

        ListNode* newHead = newTail->next;

        oldTail->next = head;
        newTail->next = nullptr;

        return newHead;
    }
};