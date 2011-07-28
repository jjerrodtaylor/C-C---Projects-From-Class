#include <stdio.h>

typedef struct 
{
    int x;
    int y;
} point_t;

typedef struct
{
    point_t upper_left;
    point_t lower_right;
} rectangle_t;

int is_inside (point_t* pPoint, rectangle_t* pRect)
{
    return((pPoint->x >= pRect->upper_left.x) &&
            (pPoint->x <= pRect->lower_right.x) &&
            (pPoint->y >= pRect->upper_left.y) &&
            (pPoint->y <= pRect->lower_right.y) );
}

int get_input(void)
{
    while(1)
    {
        int number = 0;
  
        if ( scanf("%d", &number) == 1 && number >= 0)
        {
            return  number;
           
        }
           
           printf("Invalid input!\n");
           printf("Please try again\n");
           while (getchar() != '\n'); //Clears the input buffer
    }
}
    
point_t get_point(char* prompt)
{
    point_t pt;
    printf (prompt);
    printf("\n");
    printf ("X: ");
    pt.x = get_input();
    printf ("Y: ");
    pt.y = get_input();
    
    return pt;
}

rectangle_t get_rect(char* prompt)
{
    while(1)
    {
        rectangle_t rect;
        printf(prompt);
        printf("\n");
        rect.upper_left = get_point("Upper left corner: \n");
        rect.lower_right = get_point("Lower right corner: \n");
    
        if(rect.upper_left.x <= rect.lower_right.x &&
           rect.upper_left.y <= rect.lower_right.y)
        {
            return rect;
        }
        printf("This is not a valid rectangle\n");
        printf("Please try again\n");
        while (getchar() != '\n');//clears the input buffer        
   
    }
}

int main()
{

    rectangle_t usrrect;
    point_t usrpt;
    printf("This program determines if a point is a rectangle.\n");
    printf("It counts the border as being inside.\n");
    //printf("Please enter a rectangle .\n");   
    usrrect = get_rect("Enter a rectangle");
    while (1)
    {
        //printf("Please enter a point.\n");
        usrpt = get_point("Enter a point");
    
        if( usrpt.x == 0 && usrpt.y == 0)
        {
            printf("You have terminated the program\n");
            printf("Good Bye");
        
            return 0;
        }
    
        else
        {
    
            if ( is_inside(&usrpt, &usrrect) ==1)
            {
                printf("Your point is inside the rectangle!!!\n");
            }
    
            else
            {
                printf("Your point is outside the rectangle!!!\n");
            }
        }
    }
    return 0;
}
