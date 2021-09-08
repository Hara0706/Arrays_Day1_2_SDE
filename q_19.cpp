
// reverse linked list
// take a dummy pointer and traverse to next nodes
// switch original pointing to previous node by marking next of head pointer to it 
// time is O(N) and space is O(1)

class Solution
{
    public:
    ListNode* reverseList(ListNode* head)
    {
        ListNode* newHead = NULL;
        while(head!=NULL)
        {
            ListNode* next = head->next;
            head->next = newHead;
            newHead = head;
            head = next;
            
        }
        
        return newHead;
    }
};
