/*Safa Thakur
57/251P068
Comps C*/
#include<stdio.h>
int factorial_1(int num){
    
    int fact =1;
    for(int i=1; i<=num; i++){
        fact*=i;
    } return fact;
}
int main(){
    int a=5;
    printf("factorial of %d is %d",a,factorial_1 (a));
    return 0;
}