/* a simple code to demonstrate creating one's own header file
AUTHOR: VED VYAS     GITHUB:vedcodes2312        */


#include<stdio.h>
#include"myheader.h"

void greetings(void)
{
    printf("hello user,WELCOME :) ... how are you?");
}

int add(int a, int b)
 {
    return a + b;
}

int subtract(int a, int b)
 {
    return a - b;
}

int multiply(int a, int b)
 {
    return a * b;
}

double divide(int a, int b)
{
if(b != 0)
{
    return (double)a / b; //explicit typecast 
}
else
{
    printf("error: division by zero is invalid");
    return 0;//returning 0 to indicate error
}
}

int modulo(int a, int b)
{
if(b != 0)
{
    return a % b; //explicit typecast 
}
else
{
    printf("error: division by zero is invalid");
    return 0;//returning 0 to indicate error
}
}
