// remove nth node from end of linked list 
// make a dummy node linked to head pointer
// find length of list, subtract and take another dummy node
// time is O(2N) and space is O(1)

// optimal solution is to keep fast and slow pointer to dummy node
// time is O(N) and space is O(1)


class Solution
{
    public:
    ListNode* removeFromEnd(ListNode* head, int n)
    {
        ListNode* start = new ListNode();
        start->next = head;
        ListNode* fast = start;
        ListNode* slow = start;
        
        for(int i=1; i<=n; i++)
        {
            fast = fast->next;
        }
        while(fast->next!=NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        return start->next;
    }
    
    
};
