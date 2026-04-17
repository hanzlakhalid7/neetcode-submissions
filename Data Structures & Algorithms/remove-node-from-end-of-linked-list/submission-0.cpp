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
        int count=1;
        ListNode* tt=head;
        while(tt->next){
            count++;
            tt=tt->next;
        }
        n=count-n;
        if(n==0)
            return head->next;
        ListNode* temp=head;
        while(temp && temp->next){
            n--;
            if(n==0){
                temp->next=temp->next->next;
                break;
            }
            temp=temp->next;
        }
        return head;
    }
};