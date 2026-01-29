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
// void putchar_printing_my_chars();
// A function for storing strings as char arrays
// void storing_strings();
// A function for using scanf and storing strings as char arrays
// void scanning_n_storing_strings();
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

    my_new_section("Getting Characters from User Input, with getchar()");
    enable_feature = 1;
    if (enable_feature)
        {
            size_of_stuff();
        }

    ////////////////////////////////////////////////
    my_new_section("Getting Characters from User Input, with getc(stdin)");
    enable_feature = 1;
    if (enable_feature)
        {
            how_big_is_this_array();
        }

    // ////////////////////////////////////////////////
    // my_new_section("Using the putchar() function to output chars");
    // enable_feature = 0;
    // if (enable_feature)
    //     {
    //         putchar_printing_my_chars();
    //     }

    // ////////////////////////////////////////////////
    // my_new_section("Storing strings as char arrays");
    // enable_feature = 0;
    // if (enable_feature)
    //     {
    //         storing_strings();
    //     }

    // ////////////////////////////////////////////////

    // my_new_section("Scanf and Storing strings as char arrays");
    // enable_feature = 0;
    // if (enable_feature)
    //     {
    //         scanning_n_storing_strings();
    //     }

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

// // A function for putting chars using putchar()
// void putchar_printing_my_chars()
// {
//     int ch;

//     printf("Using putchar to print characters\n");
//     printf("Press Enter:  ");
//     getchar(); 
//     ch = 'H';
//     putchar(ch);
//     ch = 'i';
//     putchar(ch);
//     ch = '!';
//     putchar(ch);
//     putchar('\n');

//     ////////////////////////////////////////////////
//     my_new_section("char storage and manipulation");
//     char a,b,c,d;
//     a = 'W';
//     b = a + 24;
//     c = b + 8;
//     d = '\n';
//     printf("%c%c%c%c", a,b,c,d);
// }

// // A function for storing strings as char arrays
// void storing_strings()
// {
//     char prompt[] = "Press the 'Enter' key to DESTROY EVERYTHING!!!!!:";
//     printf("%s\n", prompt);
//     getchar();
//     printf("All Hard Drives are now being erased.\nEnjoy the fresh start B)... \n");
// }

// // A function for working with scanf to get a char array more specifically a string
// void scanning_n_storing_strings()
// {
//     char f_name[15];
//     char l_name[20];
//     printf("What is your first name? ");
//     // this usage of scanf when caputing a char array dosent't need the & operator to prefix the variable
//     scanf("%14s", f_name); // limit input to 14 chars to leave space for null terminator
//     printf("What is your last name? ");
//     scanf("%19s", l_name); // limit input to 14 chars to leave space for null terminator

//     printf("Nice to meet you <%s %s>...\n", f_name, l_name);
// }

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