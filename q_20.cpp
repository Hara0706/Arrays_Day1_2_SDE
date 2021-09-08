
// middle of linked list 
// if there are 2 middle nodes return the second 
// first iterate over nodes and count and divide by 2 
// time is O(N) and space is O(1)
// optimize with tortoise method 
// time reduces to o(N/2)

class Solution
{
    public:
    ListNode* midNode(ListNode* head)
    {
        ListNode slow = head;
        ListNode fast = head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
};
