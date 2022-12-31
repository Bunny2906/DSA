//Implementing Queue using Array.
#include<iostream>
using namespace std;
struct Array
{
    int size;
    int front;
    int rear;
    int *A;
};
void display(struct Array arr);
void enqueue(struct Array *arr,int x)
{
    if(arr->rear == arr->size-1)
    {
        cout<<"\ninsertion is impossible !!";
    }
    else
    {
        arr->rear++;
        arr->A[arr->rear]=x;
    }
}
void dequeue(struct Array arr)
{
    if(arr.front == arr.rear)
    {
        cout<<"\ndeletion is impossible ";
    }
    else
    {
        arr.front+=1;
        cout<<"\ndeleted :"<<arr.A[arr.front]<<endl;
    }
    display(arr);
}
void display(struct Array arr)
{
    while(arr.front < arr.rear)
    {
        cout<<arr.A[arr.front+1]<<" "; 
        arr.front++;
    }
}
void isEmpty(struct Array arr)
{
    if(arr.front == arr.rear)
    {
        cout<<"\nqueue is empty !!";
    }
    else
    {
        cout<<"\nqueue is not empty";
    }
}
void isFull(struct Array arr)
{
    if(arr.rear==arr.size-1)
    {
        cout<<"\nqueue is full";
    }
    else
    {
        cout<<"\nqueue is not full";
    }
}
void first(struct Array arr)
{
    if(!(arr.front==arr.rear))
    {
        cout<<"\nfirst element is :"<<arr.A[arr.front+1];
    }
}
void last(struct Array arr)
{
    if(!(arr.front==arr.rear))
    {
        cout<<"\nlast element is :"<<arr.A[arr.rear];
    }
}
int main()
{
    struct Array arr;
    int n,x=0;
    arr.front=arr.rear=-1;
    cout<<"enter the size of queue :";
    cin>>arr.size;
    arr.A=new int[arr.size];
    cout<<"enter no of elements to insert :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter element "<<i+1<<" :";
        cin>>x;
        enqueue(&arr,x);
    }
    display(arr);
    dequeue(arr);
    isFull(arr);
    isEmpty(arr);
    first(arr);
    last(arr);
    return 0;
}
/*
Sample Output:
enter the size of queue :5
enter no of elements to insert :4
enter element 1 :1
enter element 2 :2
enter element 3 :3
enter element 4 :4
1 2 3 4
deleted :1
2 3 4
queue is not full
queue is not empty
first element is :1
last element is :4
*/

