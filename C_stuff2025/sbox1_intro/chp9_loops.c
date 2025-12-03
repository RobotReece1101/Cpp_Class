#include <stdio.h>
#include <stdlib.h>

/*
To build the program:  Gcc chp9_loops.c -o .\Debug\chp9_loops.exe
To run the program:   .\Debug\chp9_loops.exe
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

// A function for playing with for loops
void my_4_loop();
// A function for nested loops
void my_nested_loops();
// A function while loops
void my_while_loops();
// A function do while loops
void my_do_while_loops();
// A function with multi-condition for loops
void multi_for_loop_conditions();
// A function for working with scanf to get a other varaible types that require the & operator
// void scanning_n_storing_other_stuff();
// A function for working with fgets to storing strings
// void fgets_4_storing_strings();

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

    my_new_section("for loops");
    enable_feature = 1;
    if (enable_feature)
        {
            my_4_loop();
        }

    ////////////////////////////////////////////////
    my_new_section("Nested loops");
    enable_feature = 1;
    if (enable_feature)
        {
            my_nested_loops();
        }

    ////////////////////////////////////////////////
    my_new_section("While loops");
    enable_feature = 1;
    if (enable_feature)
        {
            my_while_loops();
        }

    ////////////////////////////////////////////////
    my_new_section("Do while loops");
    enable_feature = 1;
    if (enable_feature)
        {
            my_do_while_loops();
        }

    ////////////////////////////////////////////////

    my_new_section("mukti-condition for loops");
    enable_feature = 1;
    if (enable_feature)
        {
            multi_for_loop_conditions();
        }

    // ////////////////////////////////////////////////

    // my_new_section("Scanf and Storing other var types");
    // enable_feature = 0;
    // if (enable_feature)
    //     {
    //         scanning_n_storing_other_stuff();
    //     }

    // ////////////////////////////////////////////////

    // my_new_section("fgets to read strings from input");
    // enable_feature = 1;
    // if (enable_feature)
    //     {
    //         fgets_4_storing_strings();
    //     }

    ////////////////////////////////////////////////

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

// A function for loops
void my_4_loop()
{
    int x;
    int count;
    int start = -11;
    int stop = 19;

    for(x= 0; x < 25; x++)
    {
        puts("This is a loop iteration");
    }
    
    puts("////////////////////////////////////////////");
    printf("\n--- counting from %d to %d.\n\n", start, stop);

    for(count = start;count <= stop; count=count +2)
    {
        printf("\tThe current count is: %d\n", count);
    }
    
}

// A function for my nested loops
void my_nested_loops()
{
    int alpha, code, zed;

    for (alpha = 'A'; alpha <= 'G'; alpha++)
    {
        printf("Alpha Loop Iteration: %c\n", alpha);
        for (code = 1; code <=7; code++)
        {
            printf("\tCode Loop Iteration: %d\n", code);
        }
    }

    puts("\n////////////////////////////////////////////");
    puts("---  Making a 2D grid of values ---\n");

    for (alpha = 'A'; alpha <= 'G'; alpha++)
    {
        // printf("Alpha Loop Iteration: %c\n", alpha);
        for (code = 1; code <=7; code++)
        {
            // printf("\tCode Loop Iteration: %d\n", code);
            printf("%c%d\t", alpha, code);
        }
        putchar('\n');
    }
    puts("\n////////////////////////////////////////////");
    puts("---  Making a 3D grid of values ---\n");

    for (alpha = 'A'; alpha <= 'D'; alpha++)
    {
        // printf("Alpha Loop Iteration: %c\n", alpha);
        for (code = 'A'; code <='D'; code++)
        {
            for (zed = 'A'; zed <='D'; zed++)
            {
                // printf("\tCode Loop Iteration: %d\n", code);
                printf("%c%c%c\t", alpha, code, zed);
            }
            putchar('\n');
        }
        putchar('\n');
    }
}

// A function for putting chars using putchar()
void my_while_loops()
{
    int x;

    puts("---  Counting up from 0 to 10 ---\n");
    x = 0;
    while (x<=10)
    {
        printf("While Loop iteration: %d\n", x);
        x++;
    }
    puts("\n////////////////////////////////////////////");
    puts("---  Counting down from 10 to 0 ---\n");
    
    x = 10;
    while (x>-1)
    {
        printf("While Loop iteration: %d\n", x);
        x--;
    }
    puts("\n////////////////////////////////////////////");


    ////////////////////////////////////////////////

}

// A function for storing strings as char arrays
void my_do_while_loops()
{
    int fibo, nacci;
    fibo = 0;
    nacci = 1;
    int num = 0;
    int stop = 30;

    do
    {
        printf("%d ",fibo);
        fibo = fibo + nacci;
        printf("%d ",nacci);
        nacci = fibo + nacci;
    } while (nacci < 300);

    putchar('\n');
    puts("\n////////////////////////////////////////////");

        do
    {
        printf("While Loop iteration: %d\n", num);
        num++;
    } while (num < stop);
}

// A function for working with scanf to get a char array more specifically a string
void multi_for_loop_conditions()
{
    int a;
    char c;

    for (a = 1, c = 'Z'; a <5; a++, c--)

    {
        printf("Loop iteration: %d and %c\n", a, c);
    }

    putchar('\n');
    puts("\n////////////////////////////////////////////");

    for (a = 1, c = 'B'; a <5 && c <='E'; a++, c++)
    {
        printf("Loop iteration: %d and %c\n", a, c);
    }
}

// // A function for working with scanf to get a char array more specifically a string
// void scanning_n_storing_other_stuff()
// {
//     int magic_int;
//     float magic_float;

//     printf("What's the magic int'? ");
//     // this usage of scanf needs the & operator to prefix the variable
//     scanf("%d", &magic_int);
//     printf("What's the magic float'? ");
//     scanf("%f", &magic_float);

//     printf("Here is the magic int  <%d>...\n", magic_int);
//     printf("Here is the magic float  <%f>...\n", magic_float);
// }

// // A function for working with fgets to storing strings
// void fgets_4_storing_strings()
// {   
//     char name[10];
//     printf("What is your first name? \n");
//     fgets(name,10,stdin); // If we input a value shorter than 9 chars, it will include the newline char. we should use a dynamic way to get one less than max size to avoid that.

//     printf("Nice to meet you <%s>...\n", name);
// }