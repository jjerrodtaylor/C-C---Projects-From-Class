/**********************************************
*  This program was written by Jamaal Taylor  *
*  for intermediate C++ on 7/1/2009           *
*  it was written to construct a linked list  *
*  and build it in a forward direction        *
***********************************************/

#include <iostream>
#include <string>

using namespace std;

struct nodeType
{
	int info;
	nodeType *link;
};

nodeType* buildListForward()
{
	nodeType *first, *last, *newNode;
	int num;

	cout << "Enter a list of integers ending with -999."
		 << endl;
	cin >> num;
	first = NULL;

	while (num != -999)
	{
		newNode = new nodeType;
		newNode->info = num;
		newNode->link = NULL;

		if (first == NULL)
		{
			first = newNode;
			last  = newNode;
		}
	    else
	    {
		    last->link = newNode;
		    last = newNode;
		}
		cin >> num;
	}
	return first;
}

//nodeType* traverseList(nodeType head)
//{
//	nodeType current = head;
//	while (current != NULL)
//	{
//		cout<< current->info << " ";
//		current = current->link;
//	}
//}


int main()
{
	int stopper;
	nodeType *current, *head;
	head = NULL;

	head = buildListForward();
	current = head;

	cout << "Output the data stored in each node."
		 << endl;

	while (current != NULL)
	{
		cout<< current->info << " ";
		current = current->link;
	}	

	cin>>stopper;
    return 0;
}