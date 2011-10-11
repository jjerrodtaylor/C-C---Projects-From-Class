// OperatorOverloading2.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
#include <cassert>

using namespace std;

#define frz system("pause");

class rectangleType
{
        //Overload the stream insertion and extraction operators
    friend ostream& operator<<(ostream&, const rectangleType &);
    friend istream& operator>>(istream&, rectangleType &);

public:
    void setDimension(double l, double w);
    double getLength() const;
    double getWidth() const;
    double area() const;
    double perimeter() const;


        //Overload the decrement operators
    rectangleType operator -- ();          //pre-decrement
    rectangleType operator -- (int);       //post-decrement

      //Overload the relational operators
    bool operator <= (const rectangleType&) const;
    bool operator < (const rectangleType&) const;
    bool operator >= (const rectangleType&) const;
    bool operator > (const rectangleType&) const;

        //constructors
    rectangleType();
    rectangleType(double l, double w);

private:
    double length;
    double width;
};

void rectangleType::setDimension(double l, double w)
{
    if (l >= 0)
        length = l;
    else
        length = 0;

    if (w >= 0)
        width = w;
    else
        width = 0;
}

double rectangleType::getLength() const
{
    return length;
}

double rectangleType::getWidth()const
{
    return width;
}

double rectangleType::area() const
{
    return length * width;
}

double rectangleType::perimeter() const
{
    return 2 * (length + width);
}

rectangleType::rectangleType(double l, double w)
{
    setDimension(l, w);
}

rectangleType::rectangleType()
{
    length = 0;
    width = 0;
}


/**********************************************************************

Code the operator overload function definitions for pre and post 
decrement and the relational operators prototyped in the class
definition here.

***********************************************************************/
bool rectangleType::operator <= (const rectangleType& rectangle) const
{
	return ( rectangle.area() <= rectangle.area());
}

bool rectangleType::operator < (const rectangleType& rectangle) const
{
	return ( rectangle.area() < rectangle.area());
}

 bool rectangleType::operator >= (const rectangleType& rectangle) const
 {
	 return ( rectangle.area() >= rectangle.area());
 }

 bool rectangleType::operator > (const rectangleType& rectangle) const
 {
	 return ( rectangle.area() > rectangle.area());
 }

 rectangleType rectangleType::operator -- ()
 {
	     ++length;
	     ++width;
	 	 return *this;
 }

 rectangleType rectangleType::operator -- ( int u)
 {
	 rectangleType temp = *this;
	 length++;
	 width++;

	 return temp;
 }

 

ostream& operator<<(ostream& osObject, 
                      const rectangleType& rectangle)
{
    osObject << "Length = "  << rectangle.length 
             << "; Width = " << rectangle.width;

    return osObject;
}

istream& operator>>(istream& isObject, rectangleType& rectangle)
{
    isObject >> rectangle.length >> rectangle.width;

    return isObject;
}


int main()
{

    rectangleType rectangle1(23, 45);                
    rectangleType rectangle2(12, 10);               
    rectangleType rectangle3;                       
    rectangleType rectangle4;                       

    cout << "rectangle1: " << rectangle1 << endl;                                   

    cout << "rectangle2: " << rectangle2  << endl;                                    
       

    if (rectangle1 <= rectangle2)                   
        cout << "rectangle1 less than or equal"
             << "to rectangle2." << endl;                
    else                                             
        cout << "rectangle1 greater than rectangle2." << endl;

	if (rectangle1 < rectangle2)                   
        cout << "rectangle1 less than rectangle2."  << endl;
    else                                             
        cout << "rectangle1 greater or equal to rectangle2." << endl;

	cout << "Set both the length and width of rectangle3 to 5." << endl;

	cin >> rectangle3;
	cout << endl << "rectangle3: " << rectangle3 << endl;

	rectangle3--;

	cout << "After deccrement the length and width of "
		 << "rectangle3 by one unit, \nrectangle3: " 
         << rectangle3 << endl;

	rectangle4 = --rectangle3;

	cout << "New dimension of rectangle3: " << rectangle3 << endl;
	cout << "New dimension of rectangle4: " << rectangle4 << endl;

	rectangle4 = rectangle3--;

	cout << "New dimension of rectangle3: " << rectangle3 << endl;
	cout << "New dimension of rectangle4: " << rectangle4 << endl;

	if (rectangle4 >= rectangle3)                   
        cout << "rectangle4 greater than or equal to rectangle3."  << endl;
    else                                             
        cout << "rectangle4 less than rectangle3." << endl;

	if (rectangle4 > rectangle3)                   
        cout << "rectangle4 greater than rectangle3."  << endl;
    else                                             
        cout << "rectangle4 less than or equal to rectangle3." << endl;

 	
	frz;
	return 0;
}