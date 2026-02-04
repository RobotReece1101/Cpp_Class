#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
To build the program:  Gcc chp18_pointers.c -o .\Debug\chp18_pointers.exe
To run the program:   .\Debug\chp18_pointers.exe
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

// A function for getting chars
void size_of_stuff();
// A function for getting chars using getc(stdin)
void how_big_is_this_array();
// A function for putting chars using putchar()
void how_big_is_this_struct();
// A function for storing strings as char arrays
void var_locations();
// A function for using scanf and storing strings as char arrays
void mem_location_in_a_array();
// A function for working with scanf to get a other varaible types that require the & operator
void mem_location_of_ints_in_a_array();
// A function for working with fgets to storing strings
void pointer_exp();
void pointer_exp2();
void assisn_value_w_pointer_exp();
void pointer_exp_age_weight();

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
    enable_feature = 0;
    if (enable_feature)
        {
            size_of_stuff();
        }

    ////////////////////////////////////////////////
    my_new_section("Getting Characters from User Input, with getc(stdin)");
    enable_feature = 0;
    if (enable_feature)
        {
            how_big_is_this_array();
        }

    ////////////////////////////////////////////////
    my_new_section("Using the putchar() function to output chars");
    enable_feature = 0;
    if (enable_feature)
        {
            how_big_is_this_struct();
        }

    ////////////////////////////////////////////////
    my_new_section("Storing strings as char arrays");
    enable_feature = 1;
    if (enable_feature)
        {
            var_locations();
        }

    ////////////////////////////////////////////////

    my_new_section("Scanf and Storing strings as char arrays");
    enable_feature = 1;
    if (enable_feature)
        {
            mem_location_in_a_array();
        }

    ////////////////////////////////////////////////

    my_new_section("Scanf and Storing other var types");
    enable_feature = 1;
    if (enable_feature)
        {
            mem_location_of_ints_in_a_array();
        }

    // ////////////////////////////////////////////////

    my_new_section("fgets to read strings from input");
    enable_feature = 1;
    if (enable_feature)
        {
            pointer_exp();
        }

        // ////////////////////////////////////////////////

    my_new_section("fgets to read strings from input");
    enable_feature = 1;
    if (enable_feature)
        {
            pointer_exp2();
        }

    ////////////////////////////////////////////////

    my_new_section("fgets to read strings from input");
    enable_feature = 1;
    if (enable_feature)
        {
            assisn_value_w_pointer_exp();
        }

    ////////////////////////////////////////////////

    my_new_section("fgets to read strings from input");
    enable_feature = 1;
    if (enable_feature)
        {
            pointer_exp_age_weight();
        }

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

// A function for getting chars
void size_of_stuff()
{
    char c = 'c';
    int i = 123;
    long l = 1234567890;
    float f = 98.6;
    double d = 6.022e23;

    printf("char\t%lu\n", sizeof(c));
    printf("int\t%lu\n", sizeof(i));
    printf("long\t%lu\n", sizeof(l));
    printf("float\t%lu\n", sizeof(f));
    printf("double\t%lu\n", sizeof(d));
}

// A function for getting chars using getc(stdin)
void how_big_is_this_array()
{
    char string[] = "Does this string make me look fat?";
    char string2[] = "Maurice";
    int my_array[10] = {1,2,3,4,5,6,7,8,9,10};
    int my_array2[10];

    printf("- sizeof -- The string \"%s\" has a size of %u bytes.\n\n", string, sizeof(string)); // sizeof counts the  null terminator
    printf("- strlen -- The length of the string \"%s\" is %u characters.\n\n", string, strlen(string)); // strlen does not count null terminator

    printf("- sizeof -- The string \"%s\" has a size of %u bytes.\n\n", string2, sizeof(string2));
    printf("- strlen -- The length of the string \"%s\" is %u characters.\n\n", string2, strlen(string2));

    printf("- sizeof -- The array has a size of %u bytes.\n\n",sizeof(my_array));
    // printf("- strlen -- The length of the array \"%s\" is %u characters.\n\n", my_array, strlen(my_array));

    printf("- sizeof -- The array has a size of %u bytes.\n\n",sizeof(my_array2));
    // printf("- strlen -- The length of the array \"%s\" is %u characters.\n\n", my_array2, strlen(my_array2));
}

// A function for putting chars using putchar()
void how_big_is_this_struct()
{
    struct robot {
        int alive;
        char name[20];
        int xpos;
        int ypos;
        int strength;
    };

        struct robot2 {
        int alive;
        char name[5];
        int xpos;
        int ypos;
        int strength;
    };



    printf("The struct named robot size is %lu\n", sizeof(struct robot));
    printf("The struct named robot2 size is %lu\n", sizeof(struct robot2));
}

// A function for storing strings as char arrays
void var_locations()
{
    char c = 'c';
    int i = 123;
    float f = 98.6;
    double d = 6.022e23;

    printf("Variable Locations in Memory:\n");
    printf("Address of char c:      %p\n", &c);
    printf("Address of int i:       %p\n", &i);
    printf("Address of float f:     %p\n", &f);
    printf("Address of double d:    %p\n", &d);
}

// A function for working with scanf to get a char array more specifically a string
void mem_location_in_a_array()
{
    char hello[] = "Hello, World!";
    int i = 0;

    while(hello[i]) 
    {
        printf("%c at %p\n", hello[i], (void*)&hello[i]);
        // printf("%c at %p\n", hello[i], &hello[i]);
        i++;
    }

}

// A function for working with scanf to get a char array more specifically a string
void mem_location_of_ints_in_a_array()
{
    int phone_numb[] = {4,0,7,8,1,78,9,5,2,3};
    int phone_numb_size = sizeof(phone_numb) / sizeof(phone_numb[0]);
    int i = 0;

    for(i = 0; i < phone_numb_size; i++)
    {
        printf("%d at %p\n", phone_numb[i], (void*)&phone_numb[i]);
        // printf("%c at %p\n", hello[i], &hello[i]);
        // i++;
    }
}

// A function for working with fgets to storing strings
void pointer_exp()
{   
    char lead;
    char *sidekick;

    lead = 'A';
    sidekick = &lead;

    printf("About variable 'lead': \n");
    printf("Size \t\t%zd\n", sizeof(lead));
    printf("Contents \t%c\n", lead);
    printf("Location: \t%p\n", &lead);

    printf("About variable 'sidekick': \n");
    // printf("Size \t\t%zd\n", sizeof(lead));
    printf("Contents \t%p\n", sidekick);
    printf("Peek value \t%c\n", *sidekick);



}

// A function for working with fgets to storing strings
void pointer_exp2()
{   
    char a,b,c;
    char *p;

    a = 'A';
    b = 'B';
    c = 'C';


    printf("Know your.... \n");
    p = &a;
    putchar(*p);
    p = &b;
    putchar(*p);
    p = &c;
    putchar(*p);
    printf("s\n");
}

// A function for working with fgets to storing strings
void assisn_value_w_pointer_exp()
{   
    char a,b,c;
    char *p;

    p = &a;
    *p = 'A';
    p = &b;
    *p = 'B';
    p = &c;
    *p = 'C';

    printf("Know your.... \n");
    p = &a;
    putchar(*p);
    p = &b;
    putchar(*p);
    p = &c;
    putchar(*p);
    printf("s\n");
}

// A function for working with fgets to storing strings
void pointer_exp_age_weight()
{   
    int age;
    float weight;
    int *p_age;
    float *p_weight;

    p_age = &age;
    *p_age = 42;
    p_weight = &weight;
    *p_weight = 175.7;



    printf("Reece your age is .<%d>... \n",age);
    printf("Reece your weight is...<%f>... \n",weight);
}