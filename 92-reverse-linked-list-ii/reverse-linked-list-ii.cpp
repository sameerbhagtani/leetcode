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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *dummy = new ListNode(0, head);

        int count = 1;
        ListNode* before = dummy;

        while (count < left) {
            before = before->next;
            count++;
        }

        ListNode* prev = nullptr;
        ListNode* curr = before->next;

        while (count <= right) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        ListNode* tail = before->next;
        before->next = prev;
        tail->next = curr;

        return dummy->next;
    }
};