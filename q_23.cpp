// delete node without having access to head pointer
// copy the value of next node into the deleted position
// make it point to the next of next node;
// this takes time and space O(1)


class Solution
{
    public:
    void deleteNode(Node* node)
    {
        if(!node->next)
        return;
        
        Node* del = node->next;
        node->data = del->data;
        node->next = del->next;
        free(del);
    }
    
    
};
