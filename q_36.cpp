
// implement queue using stack 


class Queue{
    
    public:
    stack<int> s;
    
    void Enqueue(int x)
    {
        s.push(x);
    }
    
    int Dequeue()
    {
        if(s.empty())
        {
            cout<<"Queue is empty";
            return 0;
        }
        
        int x = s.top();
        s.pop();
        
        if(s.empty())
        return x;
        
        int item = Dequeue();
        s.push(x);
        return item;
    }
};

