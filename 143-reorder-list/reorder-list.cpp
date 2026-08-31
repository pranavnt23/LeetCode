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
    void reorderList(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=nullptr and fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;    
        }
        ListNode* second=slow->next;
        slow->next=nullptr;
        ListNode* node=nullptr;

        while(second){
            ListNode* temp=second->next;
            second->next=node;
            node=second;
            second=temp;
        }
        ListNode* first=head;
        second=node;
        while(second){
            ListNode* temp1=first->next;
            ListNode* temp2=second->next;
            first->next=second;
            second->next=temp1;
            second=temp2;
            first=temp1;
        }

    }
};