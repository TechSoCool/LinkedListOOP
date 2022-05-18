// C++ program that is a simple linked list 

#include<iostream>

using namespace std;

// creating a struct Node 
struct Node
{
	int data;
	Node* next;
};

// This function prints contents of Linked List starting the first Node 
void printList(Node* n) 
{
	while (n != NULL)
	{
		cout << n->data << " " << endl;
		n = n->next;
	 }
}

// +++++++++ Driver Code +++++++++++++
int main()
{
	// set all nodes
	 Node *head = NULL;
	 Node* second = NULL;
	 Node* third = NULL;
	 Node* fourth = NULL;
	
	 // allocate 3 nodes in the heap
	 head = new Node();
	 second = new Node();
	 third = new Node();
	 fourth = new Node();

	 // assign data in the first node
	 head->data = 11;
	 head->next = second;

	 // assign data in the second mode
	 second->data = 22;
	 second->next = third;

	 // assign data in the third node
	 third->data = 33;
	 third-> next = fourth;

	 // assign data in the fourth node 
	 fourth->data = 44;
	 fourth->next = NULL;

	 printList(head);

	system("pause");
	return 0;
}