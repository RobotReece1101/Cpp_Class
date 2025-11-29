#include <stdio.h>
#include <stdlib.h>

/*
To build the program:  Gcc box1.c -o .\Debug\box1.exe
To run the program:   .\Debug\box1.exe
*/

//////////////////////////////////////////////////////////////////////////
// function prototypes
//
//
// Helper function to print start and end lines
void start_n_endprints();
// Helper function to print new section with passed in section name
void my_new_section(char section_name[]);
//
// Dealing with numbers
void numbers_example();
// Playing with numbers
void number_play(int num1, int num2);
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// Constant declarations
const int fav_numb = 12; // constant integer

//////////////////////////////////////////////////////////////////////////

int main()
{
    // const int fav_numb = 7; // constant integer
    
    start_n_endprints();

    ////////////////////////////////////////////////

    my_new_section("Strings are Arrays of chars");
    char name[21] = "Maurice   Harris  Jr"; // this is an array
    printf("My name is %s\n", name);
    name [8] = 'R';//always starts with 0
    printf("My name is %s\n", name);

    name [17] = 'I';//always starts with 0
    name [18] = 'I';//always starts with 0
    name [19] = 'I';//always starts with 0
    //name [20] = 'I';//always starts with 0
    printf("My Sons name is %s\n", name);


    ////////////////////////////////////////////////
    my_new_section("puts");
    puts("Here I'm using the 'puts' function to print a string.  It doesn't require an Line feed");
    puts("puts() is easier to use than printf() when you just want to print a simple string.");
    puts("Really bother Reece NOW!!!!!");

    ////////////////////////////////////////////////
    my_new_section("numbers, variable types");
    numbers_example();

    ////////////////////////////////////////////////
    my_new_section("numbers play");
    int value_1 = 5;
    int value_2 = 60;
    number_play(value_1, value_2);

    start_n_endprints();
    return 0;
}



void start_n_endprints()
{
    printf("\n");
    printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
    printf("\n");
}

void my_new_section(char sect_name[])
{
    printf("\n");
    printf("--------  New section < %s > --------\n", sect_name);
    printf("\n");
}

void numbers_example()
{

    int myNum = 5;               // Integer (whole number)
    float myFloatNum = 5.99;     // Floating point number
    double myDoubleNum = 9.98;   // Double floating point number

    puts("When dealing with ints.  Use the %d as the format specifier");
    printf("Integer: %d\n", myNum);

    puts("When dealing with floats.  Use the %f as the format specifier");
    printf("Float: %.2f\n", myFloatNum);
    printf("Double: %.2lf\n", myDoubleNum);
}

void number_play(int num1, int num2)
{
    int sum, new_sum;
    sum = num1 + num2;
    printf("The sum of %d and %d is %d\n", num1, num2, sum);
    printf("Now adding in my favorite number %d to the sum\n", fav_numb);
    new_sum = sum + fav_numb;
    printf("The new sum is %d\n", new_sum);
}
