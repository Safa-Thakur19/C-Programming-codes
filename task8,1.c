/*Safa Thakur
57/251P068
comps C*/

#include <stdio.h>
int main()
{
    char str[100];
    int length=0;
    printf("\t\t*** String length finder ***\n\n\n");
    printf("Enter your string :");
    gets(str);
    
    while(str[length]!='\0')
    {
        length++;
    }
    printf("string length: %d Characters", length);
    return 0;
}