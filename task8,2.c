/*Safa Thakur
57/251P068
comps C*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i;
    printf("\t\t\t*** Pallindrome Finder ***\n\n\n");
    
    printf("\n Enter your string :");
    gets(str);
    
    for(i=0;i < strlen(str) - 1; i++)
       {
           if(str[i] != str[strlen(str) - 1 - i])
           {
               printf("The string is NOT a Pallindrome");
               return 0;
           }
       }
    printf("\n The String is Pallindrome.");
    
    return 0;
}