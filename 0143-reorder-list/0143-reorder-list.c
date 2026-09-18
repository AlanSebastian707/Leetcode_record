/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void reorderList(struct ListNode* head) {
    if(head ==NULL || head->next ==NULL)return ;// eliminate edge conditions
    struct ListNode* s=head;
    struct ListNode* f=head;
    while(f->next!=NULL&&f->next->next!=NULL){s=s->next;f=f->next->next;}//finding middle node
    struct ListNode* p=NULL;
    struct ListNode* n=NULL;
    struct ListNode* c=s->next;
    s->next=NULL;
    
    while(c!=NULL){n=c->next;c->next=p;p=c;c=n;}//reversing list; p gives reversed ll!
    struct ListNode* a=head;
    struct ListNode* b=p;
    while(b!=NULL){//mergeing
        struct ListNode* t1=a->next;
        struct ListNode* t2=b->next;
        a->next=b;
        b->next=t1;
        a=t1;
        b=t2;
    }

    
}