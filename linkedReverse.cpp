template <class Type>
void linkedStackType<Type>::reverseStack
                      ( linkedStackType<Type>& otherStack)
{
    nodeType<Type> *newNode, *current, *first;
    vector<int> p;

    if (stackTop != NULL) //if stack is nonempty, make it empty
        initializeStack();

    if (otherStack.stackTop == NULL)
        stackTop = NULL;
    else
    {
        current = otherStack.stackTop;  //set current to point
                                   //to the stack to be copied
        while(current != NULL)
        {
            p.push_back(current->info);
        }

        for(int j=p.size()-1; j >0;j--)
        {
            newNode = new nodeType<Type>;
            newNode->info = p[j];
            newNode->link = first;
            first = newNode;
        }
    }
}

#include <iostream>
#include <string>
#include "linkedStack.h"
#include "stackADT.h"

using namespace std;

int main()
{
	int stopper;

	linkedStackType<int> stack;
	linkedStackType<int> reverseCopyStack;
	//stackType<int> dummyStack(100);

	stack.initializeStack();
    reverseCopyStack.initializeStack();
	stack.push(23);
	stack.push(45);
	stack.push(38);

	reverseCopyStack.reverseStack(stack);

	
    cout<<"The elements of stack"<<endl;
	while(!stack.isEmptyStack())
	{
		cout<<stack.top() << "";
		stack.pop();
	}
	
	cout<<"The elements of reverseCopyStack"<<endl;
	while(!reverseCopyStack.isEmptyStack())
	{
		cout<<reverseCopyStack.top() << "";
		stack.pop();
	}

	
	cout<< "They're reversed"<<endl;
	

	cin>>stopper;
    return 0;
}