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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (k == 1)
            return head;

        ListNode* curr = head;
        int length = 0;
        while (curr) {
            length++;
            curr = curr->next;
        }

        curr = head;
        ListNode* prev = nullptr;

        ListNode* toReturn = nullptr;
        ListNode* connectingNode = nullptr;
        ListNode* nextConnectingNode = nullptr;

        int i = 0;
        while (curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;

            i++;

            if (i % k == 1) {
                if (connectingNode == nullptr) {
                    connectingNode = prev;
                } else {
                    nextConnectingNode = prev;
                }
            }

            if (i % k == 0) {
                if (nextConnectingNode != nullptr) {
                    connectingNode->next = prev;
                    connectingNode = nextConnectingNode;
                }

                if (toReturn == nullptr) {
                    toReturn = prev;
                }

                prev = nullptr;

                if (i + k > length) {
                    connectingNode->next = curr;
                    break;
                }
            }
        }

        return toReturn;
    }
};