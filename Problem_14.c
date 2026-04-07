/*
Write a C program to check if a number that the user inputs is prime
or not then prints the result.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    //Creating our variables and initializing a value for them.
    int num = 0, is_prime = 1; //We can make is_prime with bool variable from stdbool.h
    
    //Read the number that will be examined from the user.
    printf("Enter a positive number: ");
    scanf("%d",&num);
    
    //if the number is not positive, print an error and end program.
    if(num < 0)
    {
        printf("Error: number is not positive.");
        //end the program by returning 0
        return 0;
    }
    
    //if the number is 0 or 1, print that they are not prime and end program.
    if(num < 2)
    {
        printf("not prime");
        return 0;
    }
    
    //if the number is even, with the exception of 2, it is not prime. 
    if( (num % 2 == 0) && (num != 2) )
    {
        printf("not prime");
        return 0;
    }
    
    //if no exceptions are to be made, examine the number
    //this loop checks all the sufficient factors, algorithm is to be explained at the end.
    for(int i = 3;i <= num / i; i+=2) // the loop can be written in many forms other than this. 
    {
        //if the number can be divided by any number, it is not prime.
        if(num % i == 0)
        {
            is_prime = 0;
            //exits the loop if it is not a prime.
            break;
        }
    }
    
    
    if(is_prime)
        printf("Prime number");
    else
        printf("not prime");
        
    //return 0 to ensure succeful execution.
    return 0;
}

/*
Multiple algorithms can be used to fine whether a number is prime or not
One can check if the number is divisble by any number up to (num-1)
One could optimize this more and only check up to (num/2), as all the numbers after that will
never be factors since 2 is the smallest factor with the exception of 1.

The algorithm used here checks up to sqrt(num) rounded down, which can be done like above
or by using math.h and sqrt() function, since a number's factor will always repeat after
itself. 
For example:
16: sqrt(16)=4
ways to get 16:
1×16
2×8
4×4
8×2
16×1
the factors are already determined as you reach the square root.
من الآخر الرقم لو الرقم ملوش جذور قبل جذره مش هيكون له بعدين 
وباقي الحاجات مجرد تحسينات زيادة زي انك تشوف القسمة على الفردي بس مش الزوجي والفردي
*/
