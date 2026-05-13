#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include<math.h>

int ReadPositiveNumber(char message[])
{
    int input = 0;
    
    do
    {
        printf("%s\n", message);
        scanf(" %d", &input);
    }
    while(input <= 0);
    
    return input;
}

void PrintFrom1ToN(int end)
{
    for(int i = 1; i <= end; i++)
        printf("%d\n", i);
}

void Task1Problem1(void)
{
    PrintFrom1ToN(ReadPositiveNumber("Please enter a positive number: "));
}

void PrintFromNTo1(int start)
{
    for(int i = start; i >= 1; i--)
        printf("%d\n", i);
}

void Task1Problem2(void)
{
    PrintFromNTo1(ReadPositiveNumber("Please enter a positive number: ")); 
}

void PrintFromAToZ(void)
{
    for(char i = 'A'; i <= 'Z'; i++)
        printf("%c\n",i );
}

void Task1Problem3(void)
{
    PrintFromAToZ();
}
/*Unnecessaryfunction, may or may not be used depending on how you
want to print even and odd numbers*/
bool isEven(int num)
{
    return !(num % 2); 
}

void PrintEvenNumbersFrom1To100(void)
{
    for(int i = 2; i <= 100; i+= 2)
        printf("%d\n", i);
}

void Task1Problem4(void)
{
    PrintEvenNumbersFrom1To100();
}

bool isOdd(int num)
{
    return num % 2;
}

void PrintOddNumbersFrom1To100(void)
{
    for(int i = 1; i <= 100; i+= 2)
        printf("%d\n", i);
}

void Task1Problem5(void)
{
    PrintOddNumbersFrom1To100();
}

int NaturalSumFrom1ToN(int end)
{
    int sum = 0;
    
    for(int i = 1; i <= end; i++)
        sum+= i;
        
    return sum;
}
//This is only for loop practise. 
//Can use the sum formula, faster and easier, google it.int(Same applies for 7 and 8)

void Task1Problem6(void)
{
    printf("%d\n", 
    NaturalSumFrom1ToN(ReadPositiveNumber("Please enter a positive number: ")) );
}

int EvenSumFrom1ToN(int end)
{
    int sum = 0;
    
    for(int i = 2; i <= end; i+= 2)
        sum+= i;
        
    return sum;
}

void Task1Problem7(void)
{
    printf("%d\n", 
    EvenSumFrom1ToN(ReadPositiveNumber("Please enter a positive number: ")) );
}

int OddSumFrom1ToN(int end)
{
    int sum = 0;
    
    for(int i = 1; i <= end; i+= 2)
        sum+= i;
        
    return sum;
}

void Task1Problem8(void)
{
    printf("%d\n", 
    OddSumFrom1ToN(ReadPositiveNumber("Please enter a positive number: ")) );
}

void PrintMultiplicationTableOfN(int num)
{
    //معرفتش انتهي فين فمشوها اتناشر وخلاص
    for(int i = 1; i <= 12; i++)
        printf("%d×%d=%d\n",num, i, num*i);
}

void Task1Problem9(void)
{
    PrintMultiplicationTableOfN(
    ReadPositiveNumber("Please enter a positive number: "));
}

int CountDigits(int num)
{
    int digit_count = 0;
    
    do
    {
        digit_count++;
        num /= 10;
    }
    while(num != 0);
    
    return digit_count;
}

void Task1Problem10(void)
{
    printf("%d\n",
    CountDigits(ReadPositiveNumber("Please enter a positive number: ")) );
}

void PrintFirstAndLastDigit(int num)
{
    printf("first digit: %d\n", num % 10);
    
    num /= 10;
    
    while(num >= 10)
    {
        num /= 10;
    }
    
    printf("last digit = %d\n", num);
}

void Task1Problem11(void)
{
    PrintFirstAndLastDigit(ReadPositiveNumber("Please enter a positive number: "));
}

int SumFirstAndLastDigit(int num)
{
    int sum = 0;
    
    int remainder = num % 10;
    num /= 10;
    
    sum+= remainder;
    
    while(num != 0)
    {
        remainder = num % 10;
        num /= 10;
        
        if(num == 0)
            sum+= remainder;
    }
    
    return sum;
}

void Task1Problem12(void)
{
    printf("%d\n", 
    SumFirstAndLastDigit(ReadPositiveNumber("Please enter a positive number: ")) );
}

int SwapFirstAndLastDigit(int num)
{
    if(num < 10)
        return num;
        
    int first_digit = num % 10, middle_number = 0, last_digit = 0;
    int divisor = 1, new_num = num;
    
    while(new_num >= 10)
    {
        divisor*= 10;
        new_num /= 10;
    }
    
    last_digit = num / divisor;
    middle_number = (num % divisor) / 10;
    
    new_num = first_digit * divisor+
    middle_number * 10+
    last_digit;
    
    return new_num;
}

void Task1Problem13(void)
{
    printf("%d\n", 
    SwapFirstAndLastDigit(ReadPositiveNumber("Please enter a positive number: ")) );
}

int SumDigits(int num)
{
    int sum = 0, remainder = 0;
    
    do
    {
        remainder = num % 10;
        num /= 10;
        sum += remainder;
    }
    while(num != 0); 
    
    return sum;
}

void Task1Problem14(void)
{
    printf("%d\n", 
    SumDigits(ReadPositiveNumber("Please enter a positive number: ")) );
}

int MultiplyDigits(int num)
{
    int product = 1, remainder = 0;
    
    do
    {
        remainder = num % 10;
        num /= 10;
        product *= remainder;
    }
    while(num != 0); 
    
    return product;
}

void Task1Problem15(void)
{
    printf("%d\n", 
    MultiplyDigits(ReadPositiveNumber("Please enter a positive number: ")) );
}

int power(int num, int power)
{
    int result = 1;
    
    for(int i = 1; i <= power; i++)
    {
        result *= num;
    }
    
    return result;
}

void Task2Problem5(void)
{
    printf("%d\n",power(ReadPositiveNumber("Enter number: "),
    ReadPositiveNumber("Enter its power: ")) );
}

void PrintFactorsOfN(int num)
{
    for(int i = 1; i <= num; i++)
    {
         if (num % i == 0)
            printf("%d\n", i);
    }
}

void Task2Problem6(void)
{
    PrintFactorsOfN(ReadPositiveNumber("Enter a number: "));
}

int factorial(int num)
{
    int result = 1;
    
    for(int i = 2; i <= num; i++)
    {
        result *= i;
    }
    
    return result;
}

void Task2Problem7(void)
{
    printf("%d\n", factorial(ReadPositiveNumber("Enter a number: ")) );
}

bool isPrime(int num)
{
    if(num < 2 ||(num % 2 == 0 && num != 2))
        return false;
    
    for(int i = 3; i <= 0.5*num; i+=2)
    {
        if(num % i == 0)
            return false;
    }
    
    return true;
}

void Task2Problem8(void)
{
    printf("%d\n", isPrime(ReadPositiveNumber("Enter a number: ")) );
}

void PrintPrimeToN(int end)
{
    for(int i = 1; i <= end; i++)
    {
        if(isPrime(i))
                printf("%d\n", i);
    }
}

void Task2Problem9(void)
{
    PrintPrimeToN(ReadPositiveNumber("Enter a number: ")); 
}

int SumPrimeToN(int end)
{
    int sum = 0;
    
    for(int i = 1; i <= end; i++)
    {
        if(isPrime(i))
                sum+= i;
    }
    
    return sum;
}

void Task2Problem10(void)
{
    printf("%d\n", SumPrimeToN(ReadPositiveNumber("Enter a number: ")) );
}

void PrintStars(int columns)
{
        for(int i = 1; i <= columns; i++)
        {
            printf("*");
        }
}

void PrintSquarePattern(int rows, int columns)
{
    for(int i = 1; i <= rows; i++)
    {
        PrintStars(columns);
        printf("\n");
    }
}

void Task2Problem11a(void)
{
    PrintSquarePattern(ReadPositiveNumber("Enter the number of rows: "),
    ReadPositiveNumber("Enter the stars in each row: "));
}

void PrintSpaces(int columns)
{
    for(int i = columns; i >= 1; i--)
    {
        printf(" ");
    }
}

void PrintRhombusStarPattern(int rows, int columns)
{
    for(int i = 1; i <= rows; i++)
    {
        PrintSpaces(rows-i);
        PrintStars(columns);
        
        printf("\n");
    } 
}

void Task2Problem11b(void)
{
    PrintRhombusStarPattern(ReadPositiveNumber("Enter number of rows: "), 
    ReadPositiveNumber("Enter number of stars: "));
}

void PrintMirroredRhombusStarPattern(int rows, int columns)
{
    for(int i = 1; i <= rows; i++)
    {
        PrintSpaces(i-1);
        PrintStars(columns);
        printf("\n");
    } 
}

void Task2Problem11c(void)
{
    PrintMirroredRhombusStarPattern(ReadPositiveNumber("Enter number of rows: "), 
    ReadPositiveNumber("Enter number of stars: "));
}

void PrintRightTriangle(int rows)
{
    for(int i = 1; i <= rows; i++) 
    {
        PrintStars(i);
        printf("\n");
    }
}

void Task2Problem11d(void)
{
    PrintRightTriangle(ReadPositiveNumber("Enter number of rows: "));
}

void PrintMirroredRightTriangle(int rows)
{
    for(int i = 1; i <= rows; i++) 
    {
        PrintSpaces(rows-i);
        PrintStars(i);
        
        printf("\n");
    }
}

void Task2Problem11e(void)
{
    PrintMirroredRightTriangle(ReadPositiveNumber("Enter number of rows: "));
}

void PrintInvertedRightTriangle(int rows)
{
    for(int i = 1; i <= rows; i++) 
    {
        PrintStars(rows-i+1);
        printf("\n");
    }
}

void Task2Problem11f(void)
{
    PrintInvertedRightTriangle(ReadPositiveNumber("Enter number of rows: "));
}

void PrintPyramid(int rows)
{
    for(int i = 1; i <= rows; i++)
    {
        PrintSpaces(rows-i);
        PrintStars(2*i-1);
        
        printf("\n");
    }
}

void Task2Problem11g(void)
{
    PrintPyramid(ReadPositiveNumber("Enter number of rows: "));
}

void PrintInvertedPyramid(int rows)
{
    for(int i = rows; i >= 1; i--)
    {
        PrintSpaces(rows-i);
        PrintStars(2*i-1); 
        
        printf("\n");
    }
}

void Task2Problem11h(void)
{
    PrintInvertedPyramid(ReadPositiveNumber("Enter number of rows: "));
}

void PrintUpperHeart(int rows)
{
    for(int i = 3; i <= rows; i++)
    {
        PrintSpaces(rows-i);
        PrintStars(2*i-1);
        
        PrintSpaces(rows-i+1);
        PrintSpaces(rows-i);
        
        PrintStars(2*i-1); 
        
        printf("\n");
    }
}

void PrintHeart(int rows)
{
    if(isOdd(rows))
    {
        PrintUpperHeart(rows/2+1);
        PrintInvertedPyramid(rows+1);
    }
    else
    {
        PrintUpperHeart(rows/2);
        PrintInvertedPyramid(rows);
    }
}

void Task2Problem11i(void)
{
    PrintHeart(ReadPositiveNumber("Enter heart length: ")); 
}

void PrintWeekDay(int order)
{
    switch(order)
    {
        case 1:
            printf("Saturday\n");
            break;
            
        case 2:
            printf("Sunday\n");
            break;
            
        case 3:
            printf("Monday\n");
            break;
            
        case 4:
            printf("Tuseday\n");
            break;
            
        case 5:
            printf("Wednesday\n");
            break;
            
        case 6:
            printf("Thursday\n");
            break;
            
        case 7:
            printf("Friday\n");
            break;
            
        default:
            printf("Invalid input\n");
            break;
    }
}

void Task3Problem1(void)
{
    PrintWeekDay(ReadPositiveNumber("Enter a day's number: "));
}

void PrintDaysInMonth(int month)
{
    switch (month)
    {
        case 1:
            printf("31");
            break;
            
        case 2:
            printf("28");
            break;
            
        case 3:
            printf("31");
            break;
            
        case 4:
            printf("30");
            break;
            
        case 5:
            printf("31");
            break;
            
        case 6:
            printf("30");
            break;
            
        case 7:
            printf("31");
            break;
            
        case 8:
            printf("30");
            break;
            
        case 9:
            printf("31");
            break;
            
        case 10:
            printf("31");
            break;
            
        case 11:
            printf("30");
            break;
            
        case 12:
            printf("31");
            break;
        
        default:
            printf("Invalid month\n");
            break;
    }
}

void Task3Problem2(void)
{
    PrintDaysInMonth(ReadPositiveNumber("Enter month's number: "));
}

char ReadCharacter(char message[])
{
    char input = ' ';
    
    printf("%s\n", message);
    scanf(" %c", &input);
    
    return input;
}

bool isVowel(char letter)
{
    switch(letter)
    {
        case 'a':case 'A': 
            return true;
        
        case 'o':case 'O':
            return true;
        
        case 'e':case 'E': 
            return true;
        
        case 'i':case 'I':
            return true;
        
        case 'u':case 'U': 
            return true;
            
        default:
            return false;
    }
}

void PrintLetterType(char letter)
{
    if(isVowel(letter))
        printf("Vowel\n");
    else
        printf("Consonant\n");
}

void Task3Problem3(void)
{
    PrintLetterType(ReadCharacter("Please enter a letter: "));
}

int CompareNumbers(int num1, int num2)
{
    bool status = num1 > num2;
    
    switch (status)
    {
        case true:
            return num1;
        case false:
            return num2;
        default: 
            return num1;
    }
}

void Task3Problem4(void)
{
    printf("The bigger number is: %d",
    CompareNumbers(ReadPositiveNumber("Enter first number: "), ReadPositiveNumber("Enter second number: ")) );
}

void SwitchisOdd(int num)
{
    bool isOdd = num % 2;
    
    switch (isOdd)
    {
        case true:
            printf("The number is odd.\n");
            break;
            
        case false:
            printf("The number is even.\n");
            break;
    }
}

void Task3Problem5(void)
{
    SwitchisOdd(ReadPositiveNumber("Enter a number: "));
}

int ReadNumber(char message[])
{
    int input = 0;
    
    printf("%s\n", message);
    scanf(" %d", &input);
    
    return input;
}

int GetNumberSign(int num)
{
    bool isZero = num == 0;
    
    switch (isZero)
    {
        case true:
            return 0;
            
        case false:
            break;     
    }
    
    bool isPositive = num > 0;
    
    switch (isPositive)
    {
        case true:
            return 1;
            
        case false:
            return -1; 
    }
}

void Task3Problem6(void)
{
    printf("%d\n",
    GetNumberSign(ReadNumber("Enter a number: ")));
}

void SolveRightQuadraticFormula(int a, int b, int c)
{
    float sol1 = (-b + sqrt(b*b - 4*a*c)) / (2.0*a);
    float sol2 = (-b- sqrt(b*b - 4*a*c)) / (2.0*a);
    
    printf(" x1 = %f\n x2 = %f\n", sol1, sol2);
}

void SolveQuadraticFormula(int a, int b, int c)
{
    if(a == 0)
    {
        printf("Invalid quadratic equation.\n");
        return;
    }
    
    int type = GetNumberSign(b*b - 4*a*c);
    
    switch(type)
    {
        case 0:case 1:
            SolveRightQuadraticFormula(a, b, c);
            break;
        case -1:
            printf("This equation has no real solutions.");
    }
}

void Task3Problem7(void)
{
    SolveQuadraticFormula(
    ReadNumber("Please enter a: "), 
    ReadNumber("Plese enter b: "),
    ReadNumber("Please enter c: "));
}

int main()
{
    Task3Problem7(); 
    return 0;
}