/**************************************************
This program was written by Jamaal Taylor.

It is an implamentation of a "Day class"
It can add days to a current date, subtract
days from a current date and display the current
day.
**************************************************/

#include <iostream>
using namespace std;


class dayType
{
public:
    void setDay(int x);
    void printDay() const;
    void returnDay() const;
    void returnNextDay() const;
    void returnPrevDay() const;
    void addDays(int x);
    dayType();
    dayType(int x);

private:
    int day;
};
dayType::dayType()
{
    day = 1;
}

void dayType::setDay(int x)
{
    if(x<8 && x>0)
    {
        day = x;
    }
    else
    {
        cout<<"Invalid Day"<<endl;
    }
}

void dayType::printDay() const
{
    switch(day)
    {
        case 1:
        cout<<"Sunday"<<endl;
        break;
        case 2:
        cout<<"Monday"<<endl;
        break;
        case 3:
        cout<<"Tuesday"<<endl;
        break;
        case 4:
        cout<<"Wednesday"<<endl;
        break;
        case 5:
        cout<<"Thursday"<<endl;
        break;
        case 6:
        cout<<"Friday"<<endl;
        break;
        case 7:
        cout<<"Saturday"<<endl;
        break;
        default:
        cout<<"Invalid Day"<<endl;
    }
}

void dayType::returnDay()const
{
    switch(day)
    {
        case 1:
        cout<<"Sunday"<<endl;
        break;
        case 2:
        cout<<"Monday"<<endl;
        break;
        case 3:
        cout<<"Tuesday"<<endl;
        break;
        case 4:
        cout<<"Wednesday"<<endl;
        break;
        case 5:
        cout<<"Thursday"<<endl;
        break;
        case 6:
        cout<<"Friday"<<endl;
        break;
        case 7:
        cout<<"Saturday"<<endl;
        break;
        default:
        cout<<"Invalid Day"<<endl;
    }
}

void dayType::returnNextDay() const
{
    int nextDay = day+1;
    if(day == 7)
    {
        nextDay = 1;
    }
    switch(nextDay)
    {
        case 1:
        cout<<"Sunday"<<endl;
        break;
        case 2:
        cout<<"Monday"<<endl;
        break;
        case 3:
        cout<<"Tuesday"<<endl;
        break;
        case 4:
        cout<<"Wednesday"<<endl;
        break;
        case 5:
        cout<<"Thursday"<<endl;
        break;
        case 6:
        cout<<"Friday"<<endl;
        break;
        case 7:
        cout<<"Saturday"<<endl;
        break;
        default:
        cout<<"Invalid Day"<<endl;
    }
}

void dayType::returnPrevDay() const
{
    int prevDay = day-1;
    if(day == 1)
    {
        prevDay = 7;
    }
    switch(prevDay)
    {
        case 1:
        cout<<"Sunday"<<endl;
        break;
        case 2:
        cout<<"Monday"<<endl;
        break;
        case 3:
        cout<<"Tuesday"<<endl;
        break;
        case 4:
        cout<<"Wednesday"<<endl;
        break;
        case 5:
        cout<<"Thursday"<<endl;
        break;
        case 6:
        cout<<"Friday"<<endl;
        break;
        case 7:
        cout<<"Saturday"<<endl;
        break;
        default:
        cout<<"Invalid Day"<<endl;
    }
}

void dayType::addDays(int x)
{
    int i = 0;
    while(i <= x)
    {
        ++day;
        if(day > 7)
        {
            day = 1;
        }
        i++;
    }
    day = day-1;
}
int main ()
{
    int stopper;
    dayType myDay = dayType();
    cout<<"This is the current day"<<endl;
    myDay.printDay();
    cout<<"I'm going to change the day to Tuesday"<<endl;
    myDay.setDay(3);
    myDay.printDay();
    cout<<"What is the next day?"<<endl;
    cout<<"Lets find out"<<endl;
    myDay.returnNextDay();
    cout<<"What was the previous day?"<<endl;
    cout<<"Let's find out"<<endl;
    myDay.returnPrevDay();
    cout<<"Let's add 11 days"<<endl;
    cout<<"Now the day is Saturday"<<endl;
    myDay.addDays(11);
    myDay.printDay();


    cin>>stopper;
    return 0;
}