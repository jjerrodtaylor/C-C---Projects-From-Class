/***************************************************
Written By: Jamaal Taylor                          *
Date:       1/18/10                                *
Description: This program computes the sum         *
             of all odd positive integers less     *
			 than a value specified by the user    *
                                                   *
***************************************************/

#include <iostream>
#include <string>

using namespace std;

int main ()
{
	int stopper;
	string response;

	cout<<"This program computes the sum of odd positive integers"<<endl;
	cout<<"less than a value that you specify"<<endl;

	do
	{
		int limit = 0;
	    int sum = 0;

	    cout<<"Please enter the limit as a positive integer:"<<endl;
	    cin>>limit;

	    if(limit < 0)
	    {
		    cout<<"Error: Integer must be positive"<<endl;
	    }

	    for(int i=0; i<limit; i++)
	    {
		    if(i%2 ==1)
		    {
			    sum += i;
		    }
	    }

	    cout<<"The sum is"<< sum <<endl;
		cout<<"Would you like to go again [Y/N]"<<endl;
		cin>>response;

		if(response == "N" || response == "n")
	    {
		    cout<<"Good Bye :-)"<<endl;
	    }
	}while(response == "Y" || response == "y");

	cin>>stopper;
    return 0;
}