#include <stdio.h>
#include <stdlib.h>

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
//////////////////////////////////////////////////////////////////////////

// function prototypes for this module

// A function for getting chars
void get_my_chars();
// A function for getting chars using getc(stdin)
// void getc_getting_my_chars();
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
    enable_feature = 0;
    if (enable_feature)
        {
            get_my_chars();
        }

    ////////////////////////////////////////////////
    // my_new_section("Getting Characters from User Input, with getc(stdin)");
    // enable_feature = 0;
    // if (enable_feature)
    //     {
    //         getc_getting_my_chars();
    //     }

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
void get_my_chars()
{
    int my_char;

    printf("Just waiting for a character: ...  ");
    my_char = getchar(); // waits for user to input a character
    printf("You entered:< %c > , Thanks for giving me something!!!\n", my_char);
    printf("You entered:< %d > , This actual the interger representation of that char you gave me. B)... \n", my_char);
}

// // A function for getting chars using getc(stdin)
// void getc_getting_my_chars()
// {
//     int q;
//     int w;
//     int e;

//     printf("Just waiting for a  3 character: ...  ");
//     getc(stdin); // This will consume the newline character left in the input buffer, otherwise I would miss one of my chars
//     q = getc(stdin); // waits for user to input a character
//     w = getc(stdin); // waits for user to input a character
//     e = getc(stdin); // waits for user to input a character
//     printf("You entered: < %c > , < %c >, < %c > Thanks for giving me something!!!\n", q,w,e);
// }

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