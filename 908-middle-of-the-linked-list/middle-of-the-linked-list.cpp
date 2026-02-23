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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        int i = 1;
        while (fast->next != nullptr) {
            fast = fast->next;

            if (i % 2 == 0) {
                slow = slow->next;
            }

            i++;
        }

        return i % 2 == 0 ? slow->next : slow;
    }
};