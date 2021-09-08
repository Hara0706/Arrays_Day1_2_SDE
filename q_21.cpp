
// merge two sorted linked lists 
// create a dummy node to make the new sorted list 
// iterate and check the order of elements
// create newnode if anything to be inserted
// time is O(N) and space is O(N) for this external merge

// optimal approach is to use a temp pointer
// space is O(1)

class Solution
{
    public:
    ListNode* mergeLists(ListNode* l1, ListNode* l2)
    {
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        
        if(l1->data > l2->data)
        swap(l1, l2);
        
        ListNode* res = l1;
        while(l1!=NULL && l2!=NULL)
        {
            ListNode* temp = NULL;
            while(l1!=NULL && l1->data <= l2->data)
            {
                temp = l1;
                l1 = l1->next;
            }
            temp->next = l2;
            swap(l1,l2);
        }
        
        return res;
    }
    
    
};
