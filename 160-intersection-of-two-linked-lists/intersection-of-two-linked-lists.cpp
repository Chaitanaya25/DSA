/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        unordered_set<ListNode*> umap;

        while (headA != NULL) {
            umap.insert(headA);
            headA = headA->next;
        }

        while (headB != NULL) {
            if (umap.count(headB)) {  
                return headB;          
            }
            headB = headB->next;
        }

        return NULL;
    }
};