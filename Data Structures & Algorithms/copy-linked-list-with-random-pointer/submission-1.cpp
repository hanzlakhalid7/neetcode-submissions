/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head)
            return head;
       Node* rhead=new Node(head->val);
       Node* temp=head->next;
       Node* tt=rhead;
       while(temp){ //copying the whole list without random pointer
        Node* t=new Node(temp->val);
        tt->next=t;
        tt=tt->next;
        temp=temp->next;
       }
       tt->next=nullptr;

       temp=head;
       tt=rhead;
       int count;
       while(temp){  //copying the random pointer
        count=1;
        Node* t=temp->random;
        if(!t){ 
        tt=tt->next;
        temp=temp->next;
        continue;}
        Node* tmp=head;
        while(tmp!=t){
            count++;
            tmp=tmp->next;
        }
        tmp=rhead;
        while(--count){
            tmp=tmp->next;
        }
        tt->random=tmp;
        tt=tt->next;
        temp=temp->next;
       }
       return rhead;
    }
};
