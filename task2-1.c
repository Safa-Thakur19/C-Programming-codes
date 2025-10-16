#include <stdio.h>

int main()
{  /*Safa Thakur, 18, Comp, C, 251P068*/ 

    int number;
    
    printf ("Enter an integer:"); 
    scanf ("%d", &number);
    
    if (number % 2 == 0) {
    printf("d is Even. \n", number);
    } else {
    printf ("%d is odd. \n,", number);
    }
    return 0;
}