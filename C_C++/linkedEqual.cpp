template <class Type>
bool linkedStackType<Type>::operator==
   					(const linkedStackType<Type>& otherStack)
{
    nodeType<Type> *current, *otherCurrent;
    current = NULL;
    otherCurrent = NULL;
    if(stackTop == NULL && otherStack.stackTop != NULL || stackTop != NULL && otherStack.stackTop == NULL)
    {
        return false;
    }

    current = stackTop;
    otherCurrent = otherStack.stackTop;

    while(current != NULL && otherCurrent != NULL)
    {
        if(current->info != otherCurrent->info)
        {
            return false;
        }
        current = current->link;
    }
    return true;
}


#include <iostream>
#include <string>
#include "linkedStack.h"
#include "stackADT.h"

using namespace std;
//template <class Type>
//bool linkedStackType<Type>::operator==
//   					(const linkedStackType<Type>& otherStack)
//{
//    nodeType *current, *otherCurrent;
//	if(stackTop != otherStack.stackTop)
//	{
//		return false;
//	}
//	
//	while(current != NULL && otherCurrent != NULL)
//	{
//        if(current->info != otherCurrent->info)
//		    return false;
//	}	    
//	return true;
//		    
//	    
// }

int main()
{
	int stopper;

	linkedStackType<int> stack;
	linkedStackType<int> copyStack;
	//stackType<int> dummyStack(100);

	stack.initializeStack();
    copyStack.initializeStack();

	stack.push(23);
	stack.push(45);
	stack.push(38);
	copyStack.push(22);
	copyStack.push(44);
    copyStack.push(39);

	cout<<"The elements of copyStack"<<endl;
	while(!copyStack.isEmptyStack())
	{
		cout<<copyStack.top() << "";
		copyStack.pop();
	}
	
	cout<<"The elements of stack"<<endl;
	while(!stack.isEmptyStack())
	{
		cout<<stack.top() << "";
		stack.pop();
	}

	if(copyStack == stack)
	{
		cout<< "They're equal"<<endl;
	}
	else
	{
		cout<<"unequal"<<endl;
	}

	cin>>stopper;
    return 0;
}