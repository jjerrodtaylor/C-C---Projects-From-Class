#include <iostream>
using namespace std;

class pointType
{
private:
    double xCoordinate;
    double yCoordinate;
public:
    void setCoordinates(double, double);
    void printCoordinate()const;
    double retrieveY();
    double retrieveX();
    pointType();
    pointType(double, double);
};

pointType::pointType()
{
    xCoordinate = 0.0;
    yCoordinate = 0.0;
}

pointType::pointType(double x, double y)
{
    xCoordinate = x;
    yCoordinate = y;
}

void pointType::setCoordinates(double x, double y)
{
    xCoordinate = x;
    yCoordinate = y;
}

void pointType::printCoordinate()const
{
    cout<< "X Coordinate:" << endl;
    cout << xCoordinate << endl;
    cout<< "Y Coordinate:" << endl;
    cout << yCoordinate << endl;
}

double pointType::retrieveY()
{
    return yCoordinate;
}

double pointType::retrieveX()
{
    return xCoordinate;
}

class circleType:public pointType
{
private:
    double radius;
    double area;
    double circumference;
    pointType center;
public:
    void setRadius(double r);
    void calcArea();
    void calcCircumference();
    circleType();
    circleType(double,double, double);
    void moveCenter(double, double);
    void printCircle();
    void changeRadius(double);
};

circleType::circleType()
{
    pointType::pointType();
    radius = 1;
    //area = 3.14 *1*1;
    //circumference = 2 * 3.14 * 1;
}

circleType::circleType(double x, double y, double r)
{
    pointType::setCoordinates(x, y);
    radius = r;
    //area = 3.14*r*r;
    //circumference = 2*3.14*r;
}

void circleType::calcArea()
{
    area = 3.14*radius*radius;
}

void circleType::calcCircumference()
{
    circumference = 2*3.14*radius;
}

void circleType::moveCenter(double x, double y)
{
     pointType::setCoordinates((pointType::retrieveX()+x),(pointType::retrieveY()+y));
}

void circleType::printCircle()
{
    pointType::printCoordinate();
    cout << "area:" << endl;
    cout << area << endl;
    cout << "circumference" << endl;
    cout << circumference << endl;
    cout << "radius" << endl;
    cout << radius << endl;
}

void circleType::changeRadius(double r)
{
    radius = r;
}

int main()
{
    int stopper;
    double x = 0;
    double y = 0;
    double radius = 0;
    pointType myPoint;
    char response1,response2;
    circleType myCircle;
    

    cout<<"Welcome to the circle program"<<endl;
    cout<<"Enter two number for a point"<<endl;
    cin >> x >> y;
    myPoint = pointType(x,y);
    cout<<"This is your point"<<endl;
    myPoint.printCoordinate();
    cout<<"This will be the center of your circle"<<endl;
    cout<<"Now enter a radius"<<endl;
    cin >> radius;
     myCircle = circleType(x,y,radius);
    cout << "This is your circle"<<endl;
    myCircle.calcArea();
    myCircle.calcCircumference();
    myCircle.printCircle();
//    cout<<"Would you like to move the center[y/n]?"<<endl;
//    if(response1 == "y")
//    {
//        cout<<"By how much"<<endl;
//        cin>>deltaX;
//        cin>>deltaY;
//        myCircle.moveCenter(deltaX,deltaY);
//        myCircle.printCircle();
//    }
//    else if(response1 == "n")
//    {
//        cout<< "Would you like to change the radius[y/n]?"<<endl;
//        if(response2 == "y")
//        {
//            cout<<"New Radius:"<<endl;
//            cin>>radius;
//            cout<<"Your new circle"<<endl;
//            myCircle.changeRadius(radius);
//            myCircle.printCircle();
//        }

//        else
//        {
//            cout<<"Good Bye"<<endl;
//        }
//    }
//    else 
//    {
//        cout<<"Good Bye"<<endl;
//    }

    cin>>stopper;
    return 0;
}
