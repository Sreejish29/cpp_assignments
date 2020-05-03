#include <iostream>
using namespace std;

class Queue
{
public:
void insert(int *que, int *front, int *rear, int max)
{
    int value;
    cout<<"\nEnter The value ";
    cin>>value;
    if(*rear == max-1)
    {
        cout<<"\nOVERFLOW!";
    }
    if(*rear == -1)
    {
        *front = 0;
        *rear = 0;
        que[*rear]=value;
        cout<<"\nItem Inserted!";
    }
    else
    {
        *rear = *rear+1;
        que[*rear]=value;
        cout<<"\nItem Inserted!";
    }
    
}

void del(int *que,int *front, int *rear)
{
    int l_value;
    l_value = que[*rear];
    
    if(*front == -1 || *front > *rear)
    {
        cout<<"\nUNDERFLOW!";
    }
    else
    {
        *front = *front + 1;
    }
    cout<<"\nItem Deleted!";
}

void show(int *que,int *front, int *rear)
{
    int i;
    if(*front == -1 || *front > *rear)
    {
        cout<<"Queue is Empty!";
    }
    else
    {
        for(i=*front;i<=*rear;i++)
        {
            cout<<que[i]<<endl;
        }
    }
}

};

int main()
{
    Queue q;
    int choice = 0;
    int arr[10];
    int front=-1,rear=-1,n;
    cout<<"Enter the size of Queue ";
    cin>>n;
    while(choice != 4)
    {
        cout<<"\nOperations you can perform on Queue!";
        cout<<"\n1.Insert\n2.Delete\n3.Show\n4.Exit";
        cout<<"\nEnter Your choice ";
        cin>>choice;
        
        switch(choice)
        {
            case 1:
            q.insert(arr,&front,&rear,n);
            break;
            
            case 2:
            q.del(arr,&front,&rear);
            break;
            
            case 3:
            q.show(arr,&front,&rear);
            break;
            
            case 4:
            exit(0);
            break;
            
            default:
            cout<<"\nInvalid Input Try again!....";
            
        }
    }
    
    return 0;
}





















