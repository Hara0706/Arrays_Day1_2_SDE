
// implement stack using queue
 
class Stack
{
    queue<int> q;
    
    public:
    // functions
    
    void push(int x);
    void pop();
    int top();
    bool isEmpty();
    
};

void Stack::push(int x)
{
    int s  = q.size();
    q.push(val);
    
    for(int i=0; i<s; i++)
    {
        q.push(q.front());
        q.pop();
    }
}

void Stack::pop()
{
    if(q.empty())
    cout<<"No elements"<<endl;
    
    else
    q.pop();
}

int Stack::top()
{
    if(q.empty())
    return 0;
    
    else 
    return q.front();
}

bool Stack::isEmpty()
{
    return (q.empty());
}
