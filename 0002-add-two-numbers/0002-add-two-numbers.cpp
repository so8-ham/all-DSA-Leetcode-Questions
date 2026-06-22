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
    ListNode* reverseList(ListNode* node, ListNode* prev) {
        if (node == NULL) {
            return prev;
        }
        ListNode* tmp = node->next;
        node->next = prev;
        return reverseList(tmp, node);
    }

    ListNode* addRecursive(ListNode* l1, ListNode* l2, ListNode* head, int add) {
        if (l1 == NULL && l2 == NULL) {
            if (add == 0) {
                return head;
            } else {
                return new ListNode(add, head);
            }
        } else if (l1 == NULL) {
            int val = l2->val + add;
            add = val / 10;
            val %= 10;
            return addRecursive(l1, l2->next, new ListNode(val, head), add);
        } else if (l2 == NULL) {
            int val = l1->val + add;
            add = val / 10;
            val %= 10;
            return addRecursive(l1->next, l2, new ListNode(val, head), add);
        } else {
            int val = l1->val + l2->val + add;
            add = val / 10;
            val %= 10;
            return addRecursive(l1->next, l2->next, new ListNode(val, head), add);
        }
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* list = addRecursive(l1, l2, NULL, 0);
        if (list == NULL) {
            return NULL;
        }
        return reverseList(list, NULL);
    }
};
