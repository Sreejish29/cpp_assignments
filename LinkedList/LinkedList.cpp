#include<iostream>
using namespace std;
void showNode();

class LinkedList
{
public:
	int data;
	LinkedList *next;
};

void showNode(LinkedList *n)
{
	while(n != NULL)
    {
        cout<<n->data<<endl;
        n = n->next;
    }
}

int main()
{
	LinkedList *l1 = new LinkedList();
	LinkedList *l2 = new LinkedList();
	LinkedList *l3 = new LinkedList();

	l1->data = 10;
	l1->next = l2;

	l2->data = 20;
	l2->next = l3;

	l3->data = 30;
	l3->next = NULL;

	showNode(l1);

	return 0;

}