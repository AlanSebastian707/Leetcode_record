/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
   struct ListNode* p=NULL;
   struct ListNode* n=NULL; 
   struct ListNode* c=head;
   while(c!=NULL){
    n=c->next;
    c->next=p;
    p=c;
    c=n;
   }
   return p;


}