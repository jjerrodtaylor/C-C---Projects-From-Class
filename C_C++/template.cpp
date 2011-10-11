#include <iostream>
#include <string>

using namespace std;

#define frz system("pause");

template <class Type>
Type surprise(Type x, Type y)
{
	if(x >= y)
	{
		return x;
	}

	else
	{
		return y;
	}
}

int main()
{
	string str1 = "Sunny";
	string str2 = "Day";

	cout<<"surprise(5,7): "<< surprise(5,7) <<endl;
	cout<<"surprise(str1, str2):" << surprise(str1, str2) << endl;

	frz;
	return 0;
}