
bool hasCycle(struct ListNode *head) {
  if(head==NULL||head->next==NULL){
    return false;
  }
  struct ListNode* l=head;
  struct ListNode* r=head;
  while(r!=NULL && r->next!=NULL){
    l=l->next;
    r=r->next->next;
    if(l==r){return true;}
  }
  return false;
}