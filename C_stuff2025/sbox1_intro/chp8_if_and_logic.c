#include <stdio.h>
#include <stdlib.h>

/*
To build the program:  Gcc chp8_if_and_logic.c -o .\Debug\chp8_if_and_logic.exe
To run the program:   .\Debug\chp8_if_and_logic.exe
*/

//////////////////////////////////////////////////////////////////////////
// function prototypes
//
// Helper function to print start and end lines
void start_n_endprints();
// Helper function to print new section with passed in section name
void my_new_section(char section_name[]);
//////////////////////////////////////////////////////////////////////////

// function prototypes for this module

// Just doing some simple logic
void simple_logic();
// if logic checking conditions
void checking_conditions(int current_state);
// scan for inputs then compare()
void scan_for_input_n_compare();
// A single line if statement
void single_line_if();
// complex if examples
void complex_ifs();
// switch case testing
void testing_switch_cases();
// ternary operator logic testing
void testing_ternary_operator_logic();

//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// Constant declarations
const int fav_numb = 12; // constant integer

//////////////////////////////////////////////////////////////////////////

int main()
{
    _Bool enable_feature; // boolean variable

    start_n_endprints();
    ////////////////////////////////////////////////

    my_new_section("Getting Characters from User Input, with getchar()");
    enable_feature = 1;
    if (enable_feature)
        {
            simple_logic();
        }

    //////////////////////////////////////////////
    my_new_section("logic checking conditions");
    enable_feature = 1;
    if (enable_feature)
        {
            int current_state = 1;
            checking_conditions(current_state);
        }

    ////////////////////////////////////////////////
    my_new_section("Using scanf to get input and do logic");
    enable_feature = 1;
    if (enable_feature)
        {
            scan_for_input_n_compare();
        }

    ////////////////////////////////////////////////
    my_new_section("Single line if statements");
    enable_feature = 1;
    if (enable_feature)
        {
            single_line_if();
        }

    //////////////////////////////////////////////

    my_new_section("more complex examples of if logic");
    enable_feature = 1;
    if (enable_feature)
        {
            complex_ifs();
        }

    //////////////////////////////////////////////

    my_new_section("Scanf and Storing other var types");
    enable_feature = 1;
    if (enable_feature)
        {
            testing_switch_cases();
        }

    //////////////////////////////////////////////

    my_new_section("ternary operator logic testing");
    enable_feature = 1;
    if (enable_feature)
        {
            testing_ternary_operator_logic();
        }

    //////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////
// Functions for this module
/////////////////////////////////////////////////////////////

// A simple function doing some logic
void simple_logic()
{
    int a,b;

    a = 6;
    b = a -2;

    if (a >b)
    {
        printf("%d is greater that %d\n", a, b);
    }

}

// A function for checking conditions
void checking_conditions(int state)
{
    state = 0; // forcing state to false for demo purposes
    if(state)
    {
        printf("The state is TRUE\n");
    }
    else
    {
        printf("The state is FALSE\n");
    }   
}

// A scan for inputs then compare()
void scan_for_input_n_compare()
{
    int first, second;

    printf("Enter the first value\n");
    scanf("%d", &first);
    printf("Enter the second value\n");
    scanf("%d", &second);
    
    puts("Comparing the two values...");
    if (first < second)
    {
        printf("%d is less than %d\n", first, second);
    }
    else if (first > second)
    {
        printf("%d is greater than %d\n", first, second);
    }
    else if (first == second)
    {
        printf("%d is equal to %d\n", first, second);
    }


}

// A function for storing strings as char arrays
void single_line_if()
{
    int a,b;

    a = 6;
    b = a -2;

    if (a ==b) // single line if statement dont need braces, and shouldn't have the ';' at the end 
    
        printf("%d is equal to %d\n", a, b);
    
}

// complex if examples
void complex_ifs()
{
    int coordinate;
    int upper_limit = 5;
    int lower_limit = -5;

    printf("Enter a coordinate value: ");
    scanf("%d", &coordinate);

    if( coordinate >= lower_limit && coordinate <= upper_limit )
    {
        printf("The coordinate value <%d> is within the acceptable range of %d to %d\n", coordinate, lower_limit, upper_limit);
    }
    else if ( coordinate < lower_limit || coordinate > upper_limit )
    {
        printf("The coordinate value <%d> is OUTSIDE the acceptable range of %d to %d\n", coordinate, lower_limit, upper_limit);
    }

}

// A function for working with scanf to get a char array more specifically a string
void testing_switch_cases()
{
    int code;

    printf("Enter a code value (1,2,3): ");
    scanf("%d", &code);
    switch(code)
    {
        case 1:
            printf("You entered code 1\n");
            break;
        case 2:
            printf("You entered code 2\n");
            break;
        case 3:
            printf("You entered code 3\n");
            break;
        default:
            printf("You entered an invalid code\n");
            break;
    }
}

// ternary operator logic testing
void testing_ternary_operator_logic()
{   
    int a,b,larger;

    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);

    larger = (a > b) ? a : b;
    printf("The larger value is: %d\n", larger);
    
    //////////////////////////////////////////////
    
    int c,d;

    char *larger_str;
    char opt1[11] = "First-opt";
    char opt2[11] = "Second-opt";

    printf("Enter value for c: ");
    scanf("%d", &c);
    printf("Enter value for d: ");
    scanf("%d", &d);

    larger_str = (c > d) ? opt1 : opt2;
    printf("The larger value is: %s\n", larger_str);
}