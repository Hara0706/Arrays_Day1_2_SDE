
// stack implementation using array
// stack alllows LIFO
// push, pop, top are the functions

 
class Stack
{
    int top;
    
    public:
    int a[max];  // max size of array
    
    Stack()      // constructor 
    {
        top = -1;
    }
    
    // functions
    
    bool push(int x);
    int pop();
    int peek();
    int size();
    bool isEmpty();

};

bool Stack::push(int x)
{
    if(top >= max-1)
    {
        cout<<"Stack overflow"<<endl;
        return false;
    }
    else
    {
        a[++top] = x;
        cout<<x<<endl;
        return true;
    }
}

int Stack::pop()
{
    if(top<0)
    {
        cout<<"Stack underflow"<<endl;
        return 0;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}

int Stack::peek()
{
    if(top<0)
    {
        cout<<"Stack is empty"<<endl;
        return 0;
    }
    else
    {
        int x = a[top];
        return x;
    }
}

int Stack::size()
{
    return top+1;
}

bool Stack::isEmpty()
{
    return (top<0);
}
