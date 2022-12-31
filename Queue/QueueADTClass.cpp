#include<iostream>
using namespace std;
class Queue
{
    private:
        int size;
        int front;
        int rear;
        int *A;
    public:
        Queue(){front=rear=-1;size=10;A=new int[size];};
        Queue(int size){front=rear=-1;this->size=size;A=new int[this->size];};
        void enqueue();
        void dequeue();
        void isEmpty();
        void isFull();
        void display();
        void first();
        void last();
        ~Queue();
};
void Queue::enqueue()
{
    int n,x=0;
    cout<<"enter no of elements to insert :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter element "<<i+1<<" :";
        cin>>x;
        if(rear == size-1)
        {
            cout<<"\ninsertion is impossible !!";
        }
        else
        {
            rear++;
            A[rear]=x;
        }
    }
}
void Queue::dequeue()
{
    if(front == rear)
    {
        cout<<"\ndeletion is impossible ";
    }
    else
    {
        front+=1;
        cout<<"\ndeleted :"<<A[front]<<endl;
    }
    display();
}
void Queue::display()
{
    while(front < rear)
    {
        cout<<A[front+1]<<" "; 
        front++;
    }
}
void Queue::first()
{
    if(!(front == rear))
    {
        cout<<"\nfirst element is :"<<A[front+1];
    }
}
void Queue::last()
{
    if(!(front == rear))
    {
        cout<<"\nlast element is :"<<A[rear];
    }
}
Queue::~Queue()
{
    free(A);
}
int main()
{
    Queue q(5);
    q.enqueue();
    q.first();
    q.last();
    q.dequeue();
    q.display();
    return 0;
}
