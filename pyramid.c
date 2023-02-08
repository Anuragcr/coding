#include <stdio.h>  
#include <conio.h>  
void main()  
{  
    // declare the local variables  
    int i, j, rows, k;  
    printf (" Enter a number to define the rows: \n");  
    scanf ("%d", &rows); // take a number  
    printf("\n");  
    for ( i = 1; i <= rows; i++)  
    {  
          
        for ( j = 1; j <= rows; j++)  
        {  
            if( j <= i)  
            printf ("%d", j);   
            else  
            printf(" ");  
        }  
        for (j = rows; j >= 1; j--)  
        {  
            if(j <= i)  
            printf ("%d", j);  
            else  
            printf(" ");  
        }  
        printf ("\n");  
    }  
    getch();  
}  



// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321