/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* a,
                               struct ListNode* b) {
    if (a == NULL) return b;
    if (b == NULL) return a;

    if (a->val < b->val) {
        a->next = mergeTwoLists(a->next, b);
        return a;
    } else {
        b->next = mergeTwoLists(a, b->next);
        return b;
    }
} 
struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
    if (listsSize == 0)
        return NULL;

    int interval = 1;

    while (interval < listsSize) {
        for (int i = 0; i + interval < listsSize; i += interval * 2) {
            lists[i] = mergeTwoLists(lists[i],
                                      lists[i + interval]);
        }

        interval *= 2;
    }

    return lists[0];
}