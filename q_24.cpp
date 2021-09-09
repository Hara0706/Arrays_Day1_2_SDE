// add 2 numbers represented as linked list
// the digits are stored in reverse order
// use a dummy node to create sum list 
// make temp pointer to help in linking
// time is O(max(m,n))

class Solution
{
    public:
    ListNode* add(ListNode* l1, ListNode* l2)
    {
        ListNode* dummy = new ListNode();
        ListNode* temp = dummy;
        int carry = 0;
        
        while(l1!=NULL || l2!=NULL || carry)
        {
            int sum = 0;
            
            if(li!=NULL)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            
            if(l2!=NULL)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            
            sum += carry;
            carry = sum/10;
            
            ListNode* node = new ListNode(sum%10);
            temp->next = node;
            temp = temp->next;
        }
        
        return dummy->next;
    }
    
    
};
