// C code to print a HEART Shape
#include<stdio.h>
 
int main()
{
    // HERE, we have set the size of Heart, size = 10
    int a, b, size = 15;
 
    /* FOR THE APEX OF HEART */
    for (a = size/2; a <= size; a = a+2)
    {
        // FOR SPACE BEFORE PEAK-1 : PART 1
        for (b = 1; b < size-a; b = b+2)        
            printf(" ");
 
        // FOR PRINTING PEAK-1 : PART 2
        for (b = 1; b <= a; b++)
            printf("A");
   
        // FOR SPACE B/W PEAK-1 AND PEAK-2 : PART 3
        for (b = 1; b <= size-a; b++)
            printf(" ");
         
        // FOR PRINTING PEAK-2 : PART 4
        for (b = 1; b <= a-1; b++)
            printf("A");
 
        printf("\n");
    }
 
    /*FOR THE BASE OF HEART ie. THE INVERTED TRIANGLE */
 
    for (a = size; a >= 0; a--)
    {
        // FOR SPACE BEFORE THE INVERTED TRIANGLE : PART 5  
        for (b = a; b < size; b++)
            printf(" ");
 
        // FOR PRINTING THE BASE OF TRIANGLE : PART 6
        for (b = 1; b <= ((a * 2) - 1); b++)
            printf("B");
 
        printf("\n");  
    }
}
