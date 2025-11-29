#include <stdio.h>
#include <stdlib.h>

/*
To build the program:  Gcc 2_IO_N_ifs.c -o .\Debug\2_IO_N_ifs.exe
To run the program:   .\Debug\2_IO_N_ifs.exe
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
void getc_getting_my_chars();
// A function for putting chars using putchar()
void putchar_printing_my_chars();
// A function for storing strings as char arrays
void storing_strings();

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
    my_new_section("Getting Characters from User Input, with getc(stdin)");
    enable_feature = 0;
    if (enable_feature)
        {
            getc_getting_my_chars();
        }

    ////////////////////////////////////////////////
    my_new_section("Using the putchar() function to output chars");
    enable_feature = 0;
    if (enable_feature)
        {
            putchar_printing_my_chars();
        }

    ////////////////////////////////////////////////
    my_new_section("Storing strings as char arrays");
    enable_feature = 1;
    if (enable_feature)
        {
            storing_strings();
        }

    ////////////////////////////////////////////////

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

// A function for getting chars using getc(stdin)
void getc_getting_my_chars()
{
    int q;
    int w;
    int e;

    printf("Just waiting for a  3 character: ...  ");
    getc(stdin); // This will consume the newline character left in the input buffer, otherwise I would miss one of my chars
    q = getc(stdin); // waits for user to input a character
    w = getc(stdin); // waits for user to input a character
    e = getc(stdin); // waits for user to input a character
    printf("You entered: < %c > , < %c >, < %c > Thanks for giving me something!!!\n", q,w,e);
}

// A function for putting chars using putchar()
void putchar_printing_my_chars()
{
    int ch;

    printf("Using putchar to print characters\n");
    printf("Press Enter:  ");
    getchar(); 
    ch = 'H';
    putchar(ch);
    ch = 'i';
    putchar(ch);
    ch = '!';
    putchar(ch);
    putchar('\n');

    ////////////////////////////////////////////////
    my_new_section("char storage and manipulation");
    char a,b,c,d;
    a = 'W';
    b = a + 24;
    c = b + 8;
    d = '\n';
    printf("%c%c%c%c", a,b,c,d);
}

// A function for storing strings as char arrays
void storing_strings()
{
    char prompt[] = "Press the 'Enter' key to DESTROY EVERYTHING!!!!!:";
    printf("%s\n", prompt);
    getchar();
    printf("All Hard Drives are now being erased.  Enjoy the fresh start B)... \n");
}

