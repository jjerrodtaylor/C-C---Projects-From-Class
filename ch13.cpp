#include <iostream>
using namespace std;

class lineType
{
public:
	void setLine(int x);
	int retrieveDemension()const;
	void printLength()const;
	lineType();
	lineType(int x);
private:
	int length;
};

class rectangleType: public lineType
{
public:
	void setDeminsions(int y, int x);
	int retrieveWidth()const;
	void areaFunc();
	void printArea();
	void printDeminsions()const;
	rectangleType();
	rectangleType(int x, int y);
	int area;
private:
	int width;
};

void rectangleType::printArea()
{
	cout<<area<<endl;
}

void rectangleType::setDeminsions(int x, int y)
{
    
	lineType::setLine(x);
	if(y > 0)
	{
		width = y;
	}
	else
	{
		lineType::setLine(1);
		width = 1;
	}

}

int rectangleType::retrieveWidth()const
{
	return width;
}

void rectangleType::areaFunc()
{
	area = lineType::retrieveDemension()*width;
	
}
void rectangleType::printDeminsions()const
{
	lineType::printLength();
	cout<<  width <<endl;
}

rectangleType::rectangleType():lineType()
{
	//lineType::lineType();
    width = 1;
}

rectangleType::rectangleType(int x, int y)
{
	lineType::setLine(x);
	if( y > 0)
	{ 
		width = y;
	}
	else
	{		
		width = 1;
	}
	

}

lineType::lineType()
{
	 length = 1;
}

lineType::lineType(int x)
{
	if(x > 0)
	{
	     length = x;
	}
	else
	{
		length = 1;
	}
}

int lineType::retrieveDemension()const
{
	return length;
}

void lineType::printLength()const
{
	cout<<  length << endl;
}

void lineType::setLine(int x)
{
	if(x > 0)
	{
	    length = x;
	}
	else
	{
		length = 1;
	}
}

int main ()
{
    int stopper;
	lineType myLine = lineType();
	cout<<"This is the current value of line"<<endl;
	myLine.printLength();
	cout<<"I will change it to 10"<<endl;
	myLine.setLine(10);
	myLine.printLength();

	rectangleType myRectangle = rectangleType();
	cout<<"This is my rectangle"<<endl;
	cout<<"What are the demensions of the rectangle?"<<endl;
	cout<<"Let's find out"<<endl;
	myRectangle.printDeminsions();
	cout<<"I will make this a 7 by 13 rectangle"<<endl;
	myRectangle.setDeminsions(7,13);
	cout<<"The area should be 91"<<endl;
	cout<<"Let's find out"<<endl;
	myRectangle.areaFunc();
	myRectangle.printArea();

	cin>>stopper;
    return 0;
}