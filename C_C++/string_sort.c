#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

void swap(char** s1, char** s2)
{
    char* temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

void sort(char* s[], int length)
{
    int i;
    int swap_done = 0;

    do
    {
        swap_done = 0;
        for (i = 1; i < length; i++)
        {
            if (strcmp(s[i-1], s[i]) > 0)
            {
                swap(&s[i-1], &s[i]);
                swap_done = 1;
            }
        }
    } while (swap_done);
}

void output_strings(char* s[], int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        printf ("%s\n", s[i]);
    }
    printf ("\n");
}

int get_strings(char* string_pointer_array[], int length)
{
    int i;
    char input_area[1000];
    int string_length;
    printf("Enter up to %dstrings\n", length);
    printf("enter an empty string to terminate\n");
    
    for(i = 0; i < length; i++)
    {
        /*prompt user for input*/
        printf("%d:", i);
        gets(input_area);
        string_length = (int) strlen(input_area);
        assert (string_length < 1000);
        
        if(string_length == 0)
        {
            break;
        }
        
        string_pointer_array[i] = malloc(string_length + 1);
        assert(string_pointer_array[i] != NULL);
        
        strcpy(string_pointer_array[i], input_area);
    }
    /*i is now the number of non-null strings entered*/
    return i;
}

int main()
{         
    char* strings[10];  
    //int i;
    int count = 0;

   // for (i = 0; i < 10; i++)
    //{
     //   strings[i] = &chars[i][0];
    //}
        
    printf ("This program accepts up to 10 strings from the keyboard\n");
    printf ("sorts them, and outputs the sorted strings.\n");
 
    printf ("Enter a zero length string to terminate input\n\n");

//    for (i = 0; i < 10; i++)
//    {
//        printf ("%d: ", i);
//        gets(strings[i]);
//        if (strlen(strings[i]) < 1)
//        {
//            break;
//        }
//    }
    count = get_strings(strings, 10);
        
    printf ("%d strings were entered\n\n", count);
    
    printf ("Strings prior to sort:\n");
    output_strings(strings, count);

    sort(strings, count);   
     
    printf ("Strings after sort:\n");
    output_strings(strings, count);
        
    getchar();
    getchar();
    return 0;
}

