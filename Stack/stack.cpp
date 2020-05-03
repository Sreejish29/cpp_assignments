#include <iostream>
using namespace std;

class Stack
{
public:

	void push(int *a, int *t, int size)
	{
		int val;
		if(*t >= size-1)
		{
			cout<<"Stack Overflow"<<endl;
		}
		else
		{
			*t = *t + 1;
			cout<<"Enter a Value "<<endl;
			cin>>val;
			a[*t] = val;
		}
	}

	void pop(int *t)
	{
		if(*t == -1)
		{
			cout<<"Stack UnderFlow"<<endl;
		}
		else
		{
			*t = *t - 1;
			cout<<"Value Popped!"<<endl;
		}
	}

	void show(int *a, int *t)
	{
		int i;
		if(*t == -1)
		{
			cout<<"Stack is empty!"<<endl;
		}
		else
		{
			for(i=*t;i>=0;i--)
			{
				cout<<a[i]<<endl;
			}
		}
	}

};

int main()
{
	int top = -1;
	int arr[10];
	int n,choice=0;
	cout<<"Enter The size of stack"<<endl;
	cin>>n;

	Stack s1;

	while(choice != 4)
	{
		cout<<"Operation You can Perform on Stack "<<endl;
		cout<<"1.Push\n2.Pop\n3.Show\n4.Exit"<<endl;
		cout<<"Enter Your Choice!"<<endl;
		cin>>choice;

		switch(choice)
		{
			case 1:
			s1.push(arr,&top,n);
			break;

			case 2:
			s1.pop(&top);
			break;

			case 3:
			s1.show(arr,&top);
			break;

			case 4:	
			break;	

			default:
			cout<<"Invalid Input";	
		}
	}

	return 0;
}