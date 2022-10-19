#include "taylor_sine.h"
#include <stdio.h>
#include <math.h>
#include "stack.h"

// Add your test cases for Exercise 1b,c) here
int main(int argc, char **argv)
{
    // b)
printf("Test sin(2) with precision 3 \n");
    printf("Taylor_sine: %lf \n", taylor_sine(2, 3));
    printf("ANSI C sin: %lf \n \n", sin(2));

    printf("Test sin(2) with precision 10 \n");
    printf("Taylor_sine: %lf \n", taylor_sine(2, 10));
    printf("ANSI C sin: %lf \n \n", sin(2));

    printf("Test sin(37) \n");
    printf("Taylor_sine: %lf \n", taylor_sine(37, 10));
    printf("ANSI C sin: %lf \n \n", sin(37)); 

    printf("Test sin(3.14159) \n");
    printf("Taylor_sine: %lf \n", taylor_sine(3.14159, 13));
    printf("ANSI C sin: %lf \n \n", sin(3.14159));

    printf("Test sin(6.28318) \n");
    printf("Taylor_sine: %lf \n", taylor_sine(6.28318, 100));
    printf("ANSI C sin: %lf \n \n", sin(6.28318));

    printf("In conclusion, taylor_sine wont work for numbers larger than 2pi. This could be implemented by looping through, and subtracting 2pi, until x<=2pi. \n \n");

    // c)
    // From the testcases I can tell that the function only gives the same results as ANSI C sin in the interval 0<=x<=2pi.
    // I can also conclude that if i increase the precision i get closer to answer that the ANSI C sin function gives.

    // opg 2 b)
    printf("Opg 2 b) \n");
    stack stak;
    initialize(&stak);
    push(5, &stak);
    printf("x = 5 \n");
    printf("y = %d \n \n", pop(&stak));

    // opg 2 c)
    printf("Opg 2 c) \n");
    printf("x0 = 1 \n");
    push(1, &stak);
    printf("x1 = 2 \n");
    push(2, &stak);
    printf("y0 = %d \n", pop(&stak));
    printf("y1 = %d \n", pop(&stak));





    return 0;
}