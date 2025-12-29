#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
To build the program:  Gcc chp11_math.c -o .\Debug\chp11_math.exe
To run the program:   .\Debug\chp11_math.exe
*/

//////////////////////////////////////////////////////////////////////////
// function prototypes
//
// Helper function to print start and end lines
void start_n_endprints();
// Helper function to print new section with passed in section name
void my_new_section(char section_name[]);
// Helper function to get a dynamic seed value by uising the time function
int get_seed();
//////////////////////////////////////////////////////////////////////////

// function prototypes for this module

// A function for couting up and down
void count_up_down();
// A function for seeing what comes first in math
void whats_first();
// A function playing with remainders()
void finding_remainder();
// A function for a random number generator
void rando_gen();
// A function random number generator with a fixed seed
void rando_gen_seeded();
// A function a random number generator with dynamic seed
void rando_gen_dynamic_seed();
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

    my_new_section("Counting up, and down");
    enable_feature = 1;
    if (enable_feature)
        {
            count_up_down();
        }

    //////////////////////////////////////////////
    my_new_section("Whats first????");
    enable_feature = 1;
    if (enable_feature)
        {
            whats_first();
        }

    ////////////////////////////////////////////////
    my_new_section("Remainder using modulus operator (%)");
    enable_feature = 1;
    if (enable_feature)
        {
            finding_remainder();
        }

    ////////////////////////////////////////////////
    my_new_section("Random Num Generation");
    enable_feature = 1;
    if (enable_feature)
        {
            rando_gen();
        }

    ////////////////////////////////////////////////

    my_new_section("Random Num Generation with seed");
    enable_feature = 1;
    if (enable_feature)
        {
            rando_gen_seeded();
        }

    ////////////////////////////////////////////////

    my_new_section("Random Num Generation with dynamic seed");
    enable_feature = 1;
    if (enable_feature)
        {
            rando_gen_dynamic_seed();
        }

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

/////////////////////////////////////////////////////////////
// Helper Functions for this module
/////////////////////////////////////////////////////////////

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

int get_seed()
{
    return (unsigned) time(NULL);
}

/////////////////////////////////////////////////////////////
// Functions for this module
/////////////////////////////////////////////////////////////

// A function for getting chars
void count_up_down()
{
    int x;

    for (x=-5; x<=5; x++)
    {
        printf("Counting up: %d\n", x);
    }


    for (x=5; x>=-5; x--)
    {
        printf("Counting down: %d\n", x);
    }

}

// A function for getting chars using getc(stdin)
void whats_first()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    b= 16;
    printf("Before assignment: a is unassigned < %d >, and b is < %d > \n", a,b);
    printf("Here is the odd calulation we are using a=b++ \n");
    a=b++;
    printf("After assignment with post-increment: a is < %d >, and b is < %d > \n", a,b);

    printf("\n");
    printf("\\\\\\\\\\\\Switching things around to preincrement the value\\\\\\\\\\\\\\\\\\\\\\\\\n");
    printf("\n");

    c= 16;
    printf("Before assignment: d is unassigned < %d >, and c is < %d > \n", d,c);
    printf("Here is the odd calulation we are using d=++c \n");
    d=++c;
    printf("After assignment with post-increment: d is < %d >, and c is < %d > \n", d,c);

}

// A function for putting chars using putchar()
void finding_remainder()
{
    // const int value =5;
    int value =5;

    int a;  

    printf("Finding numbers divisable by our Modulus which is ... <%d>:\n", value);
    for (a=0; a<=30; a++)
    {
        printf("The remainder of %d / %d is: %d\n", a, value, a % value);
    }

    printf("\n");
    printf("\\\\\\\\\\\\New Modulus \\\\\\\\\\\\\\\\\\\\\\\\\n");
    printf("\n");

    // const int value =2;
    value =2;

    printf("Finding numbers divisable by our Modulus which is ... <%d>:\n", value);
    for (a=0; a<=30; a++)
    {
        printf("The remainder of %d / %d is: %d\n", a, value, a % value);
    }
}

// A function for storing strings as char arrays
void rando_gen()
{
    int r,a,b;
    int my_limit = 15;

    printf("Random Numbers under <%d>\n",my_limit);
    for(a=0; a<10; a++)
    {
        for(b=0; b<5; b++)
        {
            r = rand() % my_limit; // random number under a limit
            printf("%02d\t", r);
        }
        putchar('\n');
    }

    printf("Another group of Random Numbers under <%d>\n",my_limit);
    for(a=0; a<10; a++)
    {
        for(b=0; b<5; b++)
        {
            r = rand() % my_limit; // random number under a limit
            printf("%02d\t", r);
        }
        putchar('\n');
    }
}

// A function for working with scanf to get a char array more specifically a string
void rando_gen_seeded()
{
    int r,a,b;
    int my_limit = 20;
    int my_seed = 7;

    printf("Random Numbers under <%d>, with a hardcoded seed of <%d>\n",my_limit, my_seed);
    srand(my_seed); // seed the random number generator
    for(a=0; a<10; a++)
    {
        for(b=0; b<5; b++)
        {
            r = rand() % my_limit; // random number under a limit
            printf("%02d\t", r);
        }
        putchar('\n');
    }

    printf("Another group of Random Numbers under <%d>, with a hardcoded seed of <%d>\n",my_limit, my_seed);
    srand(my_seed); // seed the random number generator
    for(a=0; a<10; a++)
    {
        for(b=0; b<5; b++)
        {
            r = rand() % my_limit; // random number under a limit
            printf("%02d\t", r);
        }
        putchar('\n');
    }
}

// A function for working with scanf to get a char array more specifically a string
void rando_gen_dynamic_seed()
{
    int r,a,b;
    int my_limit = 20;
    int my_seed = get_seed();

    printf("Random Numbers under <%d>, with a hardcoded seed of <%d>\n",my_limit, my_seed);
    srand(my_seed); // seed the random number generator
    for(a=0; a<10; a++)
    {
        for(b=0; b<5; b++)
        {
            r = rand() % my_limit; // random number under a limit
            printf("%02d\t", r);
        }
        putchar('\n');
    }

    my_seed = get_seed();
    printf("Another group of Random Numbers under <%d>, with a hardcoded seed of <%d>\n",my_limit, my_seed);
    srand(my_seed); // seed the random number generator
    for(a=0; a<10; a++)
    {
        for(b=0; b<5; b++)
        {
            r = rand() % my_limit; // random number under a limit
            printf("%02d\t", r);
        }
        putchar('\n');
    }
}

// // A function for working with fgets to storing strings
// void fgets_4_storing_strings()
// {   
//     char name[10];
//     printf("What is your first name? \n");
//     fgets(name,10,stdin); // If we input a value shorter than 9 chars, it will include the newline char. we should use a dynamic way to get one less than max size to avoid that.

//     printf("Nice to meet you <%s>...\n", name);
// }