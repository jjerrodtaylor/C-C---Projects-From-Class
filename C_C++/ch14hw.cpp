#include <iostream>
using namespace std;

int main()
{
	int stopper;
    int *alpha;
	int arraysize = 0;
    //double alpha[50] = {0.0};

	cout<<"Enter array size:"<<endl;
	cin>>arraysize;

	alpha = new int[arraysize];
    
    for(int j = 0; j < 25 ; j++)
    {
        alpha[j] = j*j;
    }
    
    for(int j = 25; j < 50; j++)
    {
        alpha[j] = 3*j;
    }
    
    for(int j = 0; j < 50; j++)
    {
		cout<<alpha[j]<<" ";
		if(j == 9||j == 19||j == 29||j ==39)
		{
			cout << endl;
		}
    }

	cout<<endl;
	cout<<"address of myarray before deallocation:"<<" ";
	cout<<alpha<<endl;
	delete [] alpha;
	alpha = NULL;
	cout<<"address of myarray after deallocation:"<<" ";
	cout<<alpha<<endl;
    cin >> stopper;
    return 0;
}