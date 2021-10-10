// detect cycle in linked list given head 
// use a dummy node and a hash table 
// this uses time O(N) and space O(N)
// instead take a slow and a fast pointer
// if there is a cycle they will collide a that point 
// else fast one meets null 
// its time is O(N) and space is O(1)

class Solution
{
    public:
    bool hasCycle(ListNode *head)
    {
        if(head == NULL || head->next == NULL)
        return false;
        
        ListNode *fast = head;
        ListNode *slow = head;
        
        while(fast->next && fast->next->next)
        {
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow)
            return true;
        }
        
        return false;
        
    }
    
};
