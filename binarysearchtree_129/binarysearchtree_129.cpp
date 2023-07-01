#include <iostream>
#include <string>
using namespace std;

class Node{
public:
	string info;
	Node* leftchild;
	Node* rightchild;

	// Constructor for the node class
	Node(string i, Node* l, Node* r)
	{
		info = 1;
		leftchild = l;
		rightchild = r;
	}

}; 

class binaryTree{
public:
	Node* ROOT;

	binaryTree()
	{
		ROOT = NULL; // initializing ROOT to null
	}

	void insert(string element) // insert a node in the binary search tree
	{
		Node* newNode = new Node(element, NULL, NULL);	//Allocate memory for the new node
		newNode->info = element;	//Assign value to the data field of the new node
		newNode->leftchild = NULL;	//Make the left chield of the new node point to NULL
		newNode->rightchild = NULL; //Make the right child of the new node point to NULL

		Node* parent = NULL;
		Node* currentNode = NULL;
		search(element, parent, currentNode); //Locate the node which will be the parent of the node to be inserted

		if (parent == NULL)  //If the parent is NULL (Tree is empty)
		{
			ROOT = newNode;	//Mark the new node as ROOT
			return; //Exit
		}
		if (element < parent->info)	//if the value in the data field of the new node is less than that of the parent

	}
};