//RonMexico.cpp: Defines the entry point for the console application

//#include "stdafx.h"
#include <iostream>
#include "string"

using namespace std;

#define frz system("pause");

class personType
{
public:
	void print() const;
	personType& setAlias(string name);
	personType(string name = "");
private:
	string name;
};

int main()
{
	string lasVegasName;

	personType john1("Charles Greap");
	personType john2;
	john2.print();
	john1.print();

	cout<< "Adopting a Las Vegas alias. Enter alias." << endl;
	cin>> lasVegasName;

	john1.setAlias(lasVegasName);
	cout << "New alias" << endl;
	john1.print();

	cout<< "Give john1 a new alias and assign it to john2 in one lone of code."<< endl;
	/****************************************************
	put code here
	****************************************************/
    john2=john1.setAlias("Big Boy Tonga");

	cout << "john1:";
	john1.print();
	cout<< "john2:";
	john2.print();
	cout << endl;

	frz;
	return 0;
}

personType::personType(string n)
{
	name = n;
}

void personType::print() const
{
	cout <<"MY name is" << name<<endl;
}

personType& personType::setAlias(string aka)
{
	/*******************************
	two lines of code here
	*******************************/
	name = aka;
	return *this;
}