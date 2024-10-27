/* a simple code to demonstrate creating one's own header file
AUTHOR: VED VYAS     GITHUB:vedcodes2312        */

#include<stdio.h>//preprocessor directive standard input output header file
#include"myheader.h"//header file created by author

int main()
{
    greetings();
    printf("\n");
    int a,b;
    printf("enter two values:\t");
    scanf("%d %d",&a,&b);
    printf("addition of two numbers: %d + %d = %d\n",a,b,add(a, b));
    printf("subtraction of two numbers: %d - %d = %d\n",a,b,subtract(a, b));
    printf("multiplication of two numbers: %d * %d = %d\n",a,b,multiply(a, b));
    printf("division of two numbers: %d / %d = %lf\n",a,b,divide(a, b));// %lf is format specifier for double data type
    printf("remainder upon divsion  of two numbers: %d %% %d = %d\n",a,b,modulo(a, b));
    return 0;
}


 