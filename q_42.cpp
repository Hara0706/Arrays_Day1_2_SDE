// rotate a linked list 
// naive approach is to keep last nodes to front k times
// time taken is O(Nk)

// find the length of list 
// then link pointer to head 
// rotated list will have (n-k)th node at last
// point head to the next node
// time is O(N) and space is O(1)

class Solution
{
    public:
    ListNode *rotate(ListNode *head, int k)
    {
        if(head == NULL || head->next == NULL || k==0)
        return head;
        
        ListNode *cur = head;
        int len = 1;
        while(cur->next && ++len)
        {
            cur = cur->next;
        }
        cur-> next = head;
        k = k%len;
        k = len-k;
        
        while(k--)
        {
            cur = cur->next;
        }
        head = cur->next;cur->next = NULL;
        
        return head;
    }
    
    
};
