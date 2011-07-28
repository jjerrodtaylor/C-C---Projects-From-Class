/* Jamaal Taylor 2/3/09
this is a program that will determine the change due 
for a purchase paid for with a $20 bill.
*/

#include<stdio.h>

int main()
{
    double DollarAmount = 0.0;
    int CentAmount = 0;
    double Highest_Purchase = 20.0;
    int Highest_Purchase_Cents = 0;
    double change = 0;
    int Tens = 0;
    int Fives = 0;
    int Singles = 0;
    int Quarters = 0;
    int Dimes = 0;
    



    printf("This program will determine the change due for a purchase\n");
    printf("Amount must be less than or equal to 20 dollars\n");
    printf("Please enter amount:\n");
    scanf("%lg", &DollarAmount);
    
    printf("Purchase amount is %6.2f\n", DollarAmount);

   
    if(DollarAmount <= 20.0 && DollarAmount > 0.0)
    {
        CentAmount = (DollarAmount * 100.0)+ .005;
        Highest_Purchase_Cents = (Highest_Purchase * 100.0)+.005;
        change = (Highest_Purchase_Cents - CentAmount)/100.0;
        printf("Change due is %6.2f:\n", change);

        int total = Highest_Purchase_Cents - CentAmount;
        Tens = total/1000;
        printf("$10.00: %d\n", Tens);

        total=total-(Tens*1000);
        Fives = total/500;
        printf("$5.00: %d\n", Fives);

        total = total-(Fives*500);
        Singles = total/100;
        printf("$1.00: %d\n", Singles);
        
        total = total-(Singles*100);
        Quarters = total/25;
        printf("$0.25: %d\n", Quarters);

        total = total-(Quarters*25);
        Dimes = total/10;
        printf("$0.10: %d\n", Dimes);

        total = total-(Dimes*10);
        printf("$0.01: %d\n", total);
    }
    
    else
    {
        printf("You have entered an invalid amount!\n");
        printf("Good Bye\n");
        return 1;
    }
    
    return 0;
}
