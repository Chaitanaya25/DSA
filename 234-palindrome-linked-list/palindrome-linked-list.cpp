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
    bool isPalindrome(ListNode* head) {
        
        vector<int> ll;

        while (head != NULL) {
            ll.push_back(head->val);
            head = head->next;
        }

        vector<int> dd = ll;           
        reverse(dd.begin(), dd.end());  

        for (int i = 0; i < ll.size(); i++) {
            if (dd[i] != ll[i]) {
                return false;
            }
        }

        return true;
    }
};