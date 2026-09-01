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
        ListNode* node=head;int cnt=0;
        while(node!=nullptr){
            cnt++;
            node=node->next;
        }
        cnt=cnt-n;int var=0;
        ListNode dummy(0);
        if(cnt==0) return head->next;
        node=head;
        while(node!=nullptr){
            var++;
            if(var==cnt){
                node->next=node->next->next;
            }
            node=node->next;
        }
        return head;
    }
};