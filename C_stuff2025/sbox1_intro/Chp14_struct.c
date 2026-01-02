#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
To build the program:  Gcc chp14_struct.c -o .\Debug\chp14_struct.exe
To run the program:   .\Debug\chp14_struct.exe
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
void simple_struct();
// A function for getting chars using getc(stdin)
void array_of_structs();
// A function for putting chars using putchar()
void sorting_array_of_structs();
// A function for storing strings as char arrays
void nested_structs();
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

    my_new_section("A simple structure example");
    enable_feature = 1;
    if (enable_feature)
        {
            simple_struct();
        }

    ////////////////////////////////////////////////
    my_new_section("Creating an array of structures");
    enable_feature = 0;
    if (enable_feature)
        {
            array_of_structs();
        }
    
    ////////////////////////////////////////////////
    my_new_section("Creating an array of structures and sorting them");
    enable_feature = 0;
    if (enable_feature)
        {
            sorting_array_of_structs();
        }

    ////////////////////////////////////////////////
    my_new_section("Nested structures example");
    enable_feature = 1;
    if (enable_feature)
        {
            nested_structs();
        }

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
void simple_struct()
{
    
    // struct president
    // {
    //     char name[40];
    //     int year;
    // };

    // struct president first = {
    //     "George Washington", 
    //     1789
    // };

    // Declared and initialized in 1 statement

    struct president
    {
        char name[40];
        int year;
    } first = {
        "George Washington", 
        1789
    },
    second = {
        "Thomas Jefferson",
        1801
    };

    printf("The first president was %s, inaugurated in %d\n", first.name, first.year);
    printf("The second president was %s, inaugurated in %d\n", second.name, second.year);
}

// A function for getting chars using getc(stdin)
void array_of_structs()
{

    struct scores
    {
        char name[32];
        int score;
    };

    struct scores player[4];
    struct scores temp; 
    int x;

    for (x=0; x<4; x++)
    {
        printf("Enter name for player %d: ", x+1);
        scanf("%31s", player[x].name); // limit input to 31 chars to leave space for null terminator
        printf("Enter score for player # %d < %s>: ",x+1, player[x].name);
        scanf("%d", &player[x].score);
    }

    puts("\nPlayer info:\n");
    printf("#\tName\tScore\n");
    for (x=0; x<4; x++)
    {
        printf("%d\t%s\t%d\n", x+1, player[x].name, player[x].score);
    }
}

// A function for getting chars using getc(stdin)
void sorting_array_of_structs()
{
    int inner, outer;
    
    struct scores
    {
        char name[32];
        int score;
    };

    struct scores player[4];
    struct scores temp; 
    int x;

    for (x=0; x<4; x++)
    {
        printf("Enter name for player %d: ", x+1);
        scanf("%31s", player[x].name); // limit input to 31 chars to leave space for null terminator
        printf("Enter score for player # %d < %s>: ",x+1, player[x].name);
        scanf("%d", &player[x].score);
    }

    // Bubble sort the players by score in descending order
    for (outer = 0; outer < 4 - 1; outer++) 
    {
        for (inner = 0; inner < 4 - outer - 1; inner++) 
        {
            if (player[inner].score < player[inner + 1].score) 
            {
                temp = player[inner];
                player[inner] = player[inner + 1];
                player[inner + 1] = temp;
            }
        }
    }

    puts("\nPlayer info sorted by highscore:\n");
    printf("#\tName\tScore\n");
    for (x=0; x<4; x++)
    {
        printf("%d\t%s\t%d\n", x+1, player[x].name, player[x].score);
    }
}

// A function for putting chars using putchar()
void nested_structs()
{
    struct date
    {
        int day;
        int month;
        int year;
    };

    struct full_name
    {
        char first[20];
        char last[20];
    };

    struct human
    {
        struct full_name name;
        struct date birthdate;
    };

    struct human president;

    strcpy(president.name.first, "George");
    strcpy(president.name.last, "Washington");
    president.birthdate.month = 2;
    president.birthdate.year = 1732;
    president.birthdate.day = 22;   

    printf("President %s %s was born on %02d/%02d/%d\n",
        president.name.first,
        president.name.last,
        president.birthdate.month,
        president.birthdate.day,
        president.birthdate.year);
}

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