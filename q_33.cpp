// queue implementation using array
// it allows FIFO
// functions are enqueue, dequeue, front
 
class Queue
{
    int front, rear, cap;
    int *queue;
    
    public:
    Queue(int c)    // constructor
    {
        front = rear = 0;
        cap = c;
        queue = new int;
    }
    
    // functions
    
    bool enqueue(int x);
    int dequeue();
    int front();

};

bool Queue::enqueue(int x)
{
    if(cap==rear)
    {
        cout<<"Queue is full"<<endl;
        return false;
    }
    else
    {
        queue[++rear] = x;
        cout<<x<<endl;
        return true;
        
    }
}

int Queue::dequeue()
{
    if(front==rear)
    {
        cout<<"Queue is empty"<<endl;
        return 0;
    }
    else
    {
        for(int i=0; i<rear-1; i++)
        {
            queue[i] = queue[i+1];
            
        }
        rear--;
        return 0;
    }
}

int Queue::front()
{
    return queue[front];
}
