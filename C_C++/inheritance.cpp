// Inheritance.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

#define frz system("pause");

class pointType
{
public:
    void setPoint(double x, double y);
    void print() const;
    double getX() const;
    double getY() const;
    pointType(double x = 0.0, double y = 0.0);

protected:
    double xCoordinate;
    double yCoordinate;
};

void pointType::setPoint(double x, double y)
{
    xCoordinate = x;
    yCoordinate = y;
}

void pointType::print() const
{
    cout << "(" << xCoordinate << ", " << yCoordinate << ")" << endl;
}

double pointType::getX() const
{
    return xCoordinate;
}

double pointType::getY() const
{
    return yCoordinate;
}

pointType::pointType(double x, double y)
{
    xCoordinate = x;
    yCoordinate = y;
}
/************************************************************************

Write the class statement for class circleType here.

************************************************************************/
class circleType: public pointType
{
public:
    void print() const;
    void setRadius(double r);
    double getRadius() const;
    double getCircumference() const;
    double getArea() const;
    circleType(double x = 0.0, double y = 0.0, double r = 0.0);

protected:
    double radius;
};

void circleType::print() const
{
    cout << "Center: ";
    pointType::print();
    cout << endl;

    cout << "Radius: " << radius << endl;
    cout << "Circumference: " << getCircumference() << endl;
    cout << "Area: " << getArea() << endl;
}

void circleType::setRadius(double r)
{
    radius = r;
}

double circleType::getRadius() const
{
    return radius;
}

double circleType::getCircumference() const
{
    return (2 * 3.1416 * radius);
}

double circleType::getArea() const
{
    return (3.1416 * radius * radius);
}
/***********************************************************

Code the constructor for class circleType here.

***********************************************************/
circleType::circleType(double x, double y, double r)
{
	pointType::setPoint( x,  y);
	radius = r;
}

//{
//    radius = r;
//}
/***********************************************************

Write the class statement for class cylinderType here.

***********************************************************/
class cylinderType: public circleType//: public pointType
{
public:
    void print() const;

    void setHeight(double h);
    void setBaseCenter(double x, double y);
    void setCenterRadiusHeight(double x, double y, 
                               double r, double h);

    double getHeight() const;
    double getVolume() const;
    double getSurfaceArea() const;

    cylinderType(double x = 0.0, double y = 0.0, 
                 double r = 0.0, double h = 0.0);

protected:
    double height;
};

void cylinderType::print() const
{
    cout << "Base Center: ";
    pointType::print();
    cout << endl;

    cout << "Base Radius: " << radius << endl;
    cout << "Base Circumference: " << getCircumference() << endl;
    cout << "Base Area: " << getArea() << endl;

    cout << "Cylinder height: " << height << endl;
    cout << "Cylinder surface area: " << getSurfaceArea() << endl;
    cout << "Cylinder volume: " << getVolume() << endl;
}

void cylinderType::setHeight(double h)
{
    height = h;
}

void cylinderType::setBaseCenter(double x, double y)
{
    setPoint(x, y);
}

void cylinderType::setCenterRadiusHeight(double x, double y, 
                                         double r, double h)
{
    setPoint(x, y);
    setRadius(r);
    height = h;
}

double cylinderType::getHeight() const
{
    return height;
}

double cylinderType::getVolume() const
{
    return (3.1416 * radius * radius * height);
}

double cylinderType::getSurfaceArea() const
{
    return (2 * 3.1416 * radius * height);
}

/*******************************************************************

Code the constructor for class cylinderType here.

********************************************************************/
cylinderType::cylinderType(double x, double y, double r, double h)
{
	setPoint( 0.0, 0.0);
	setRadius(0.0);
	height = 0.0;
}



int main()
{
    cylinderType cylinder1(3, 2.5, 4, 2.5);
    cylinderType cylinder2;

    cout << fixed << showpoint;
    cout << setprecision(2);

    cout << "***** Cylinder 1 *****" << endl;
    cylinder1.print();
    cout << endl;

    cylinder2.setPoint(-2.5, 7);
    cylinder2.setRadius(4);
    cylinder2.setHeight(3.9);

    cout << "***** Cylinder 2 *****" << endl;
    cylinder2.print();
    cout << endl;

    double x, y;
    double r;
    double h;

    cylinderType cylinder3;

    cout << "Enter x Coordinates of the center: ";
    cin >> x;
    cout << endl;

    cout << "Enter y Coordinate of the center: ";
    cin >> y;
    cout << endl;

    cout << "Enter base radius: ";
    cin >> r;
    cout << endl;

    cout << "Enter cylinder height: ";
    cin >> h;
    cout << endl;

    cylinder3.setCenterRadiusHeight(x, y, r, h);

    cout << "***** Cylinder 3 *****" << endl;
    cylinder3.print();
    cout << endl;
	
	
	frz;
	return 0;
}