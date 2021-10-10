// intersection point of two nodes
// normal approach may take O(n*m) time
// using hash table takes time O(n+m) and space O(n)

// take 2 dummy nodes and find both list length and difference
// move them simultaneously after that to reach intersection

class Solution
{
    public:
    ListNode *getIntersect(ListNode *headA, ListNode *headB)
    {
        if(headA == NULL || headB == NULL) return NULL;
        
        ListNode *a = headA;
        ListNode *b = headB;
        
        while(a!=b)
        {
            a = a == NULL? headB:a->next;
            b = b == NULL? headA:b->next;
        }
        
        return a;
    }
};
