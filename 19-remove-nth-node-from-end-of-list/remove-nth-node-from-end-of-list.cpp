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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int cnt=0;
        while(temp!=nullptr){
            cnt++;
            temp=temp->next;
        }
        int ind=cnt-n;
        if (ind == 0) {
            return head->next;
        }

        temp = head;
        int c2 = 0;
        while(temp){
            c2++;
            if(c2==ind){
                temp->next=temp->next->next;
                break;
            }
            temp=temp->next;
        }
        return head;
    }
};