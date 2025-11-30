/* Safa Thakur
57/251P068
Comps*/ 
#include <stdio.h>
void counter() 
{ 
  static int count=0; 
  count++;
  printf("Counter Function Call : %d\n", count);
}  
int main()
{
    printf("\t\t\t***Storage Class***\n\n");
    for(int i=1;i<=8;i++)
    {
        counter(); 
    }

    return 0;
}