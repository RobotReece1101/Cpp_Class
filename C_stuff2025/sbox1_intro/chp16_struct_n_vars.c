#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*
To build the program:  Gcc chp16_struct_n_vars.c -o .\Debug\chp16_struct_n_vars.exe
To run the program:   .\Debug\chp16_struct_n_vars.exe
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
void exp_typecasting();
// A function for getting chars using getc(stdin)
void making_new_types_w_typedef();
// A function for putting chars using putchar()
void standard_struct_def();
// A function for storing strings as char arrays
void typedef_struct_def();
// A function for using scanf and storing strings as char arrays
void using_static_variables();
// A function showing how static variables work
void process_something();
void process_something_w_static();
// A function for examples of passing structs to functions
void passing_structs_2_functions();
// A function for defining a struct and initializing it in a function
struct coordinates recieve_and_work_with_struct_return_it(struct coordinates cur_localtion);
// A function for working with enums
void enum_stuff();
int verify_enum_value(int test_value);
void more_enum_stuff();

//////////////////////////////////////////////////////////////////////////
// Struct definictions

struct coordinates
{
    int xpos;
    int ypos;
};

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

    my_new_section("typecasting examples");
    enable_feature = 0;
    if (enable_feature)
        {
            exp_typecasting();
        }

    ////////////////////////////////////////////////
    my_new_section("Making new data types with typedef");
    enable_feature = 0;
    if (enable_feature)
        {
            making_new_types_w_typedef();
        }

    ////////////////////////////////////////////////
    my_new_section("Defing and using standard structures");
    enable_feature = 0;
    if (enable_feature)
        {
            standard_struct_def();
        }

    ////////////////////////////////////////////////
    my_new_section("Defining and using structures with typedef");
    enable_feature = 0;
    if (enable_feature)
        {
            typedef_struct_def();
        }

    // ////////////////////////////////////////////////

    my_new_section("Using static variables in functions");
    enable_feature = 0;
    if (enable_feature)
        {
            using_static_variables();
        }

    // ////////////////////////////////////////////////

    my_new_section("Scanf and Storing other var types");
    enable_feature = 1;
    if (enable_feature)
        {
            passing_structs_2_functions();
        }

    ////////////////////////////////////////////////

    my_new_section("working with enums");
    enable_feature = 1;
    if (enable_feature)
        {
            enum_stuff();
        }

        ////////////////////////////////////////////////

    my_new_section("working with enums");
    enable_feature = 1;
    if (enable_feature)
        {
            more_enum_stuff();
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
void exp_typecasting()
{
    int a,b;
    float c;

    printf("Enter an integer value: ");
    scanf("%d", &a);

    printf("Enter another integer value: ");
    scanf("%d", &b);

    c = (float)a / (float)b;
    printf("\nThe formula was < c = (float)a / (float)b >\n");
    printf("The result of with %d / %d is: %.2f but with typecasting into a float\n\n", a, b, c);

    // c = (float)a / (float)b;
    c = a/b;
    printf("The formula was < c = a/b >\n");
    printf("The result of with %d / %d is: %.2f as ints\n\n", a, b, c);

}

// A function for getting chars using getc(stdin)
void making_new_types_w_typedef()
{
    typedef int mythang_t;
    typedef float myfloater_t;

    mythang_t a,b;
    myfloater_t c;

    printf("Enter an integer value: ");
    scanf("%d", &a);

    printf("Enter another integer value: ");
    scanf("%d", &b);

    printf("I used typedef to make new types <mythang_t> and <myfloater_t>\n\n");
    
    c = (myfloater_t)a / (myfloater_t)b;
    printf("The formula was < c = (myfloater_t)a / (myfloater_t)b >\n");
    printf("The result of with %d / %d is: %.2f but with typecasting into a float\n\n", a, b, c);

    c = a/b;
    printf("The formula was < c = a/b >\n");
    printf("The result of with %d / %d is: %.2f as ints\n\n", a, b, c);



}

// A function for putting chars using putchar()
void standard_struct_def()
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

// A function for storing strings as char arrays
void typedef_struct_def()
{
    typedef struct date
    {
        int day;
        int month;
        int year;
    } calendar_t;

    typedef struct full_name
    {
        char first[20];
        char last[20];
    }person_name_t;

    typedef struct human
    {
        person_name_t name;
        calendar_t birthdate;
    }person_info_t;

    person_info_t president;

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

// A function for working with scanf to get a char array more specifically a string
void using_static_variables()
{
    puts("\nFirst call to process_something()\n");
    process_something();

    puts("\nSecond call to process_something()\n");
    process_something();

    puts("\nFirst call to process_something_w_static()\n");
    process_something_w_static();

    puts("\nSecond call to process_something_w_static()\n");
    process_something_w_static();


}

// A function just to process something
void process_something()
{
    int process_me;

    printf("The current value of process_me is: <%d>\n", process_me);
    printf("Enter a new value for process_me: ");
    scanf("%d", &process_me);
    printf("The new value of process_me is: <%d>\n", process_me);
}

// A function just to process something
void process_something_w_static()
{
    static int process_me;

    printf("The current value of process_me is: <%d>\n", process_me);
    printf("Enter a new value for process_me: ");
    scanf("%d", &process_me);
    printf("The new value of process_me is: <%d>\n", process_me);
}

// A function for working with fgets to storing strings
void passing_structs_2_functions()
{   
    const int locations = 5;
    struct coordinates mapped_targets[locations];
    int x;

    srand( (unsigned) time(NULL) ); // seed the random number generator

    for (x=0; x<locations; x++)
    {
        mapped_targets[x] = recieve_and_work_with_struct_return_it( mapped_targets[x] );
        printf("Target %d is located at coordinates: X: %d , Y: %d\n", x+1, mapped_targets[x].xpos, mapped_targets[x].ypos);
    }
}

struct coordinates recieve_and_work_with_struct_return_it(struct coordinates cur_localtion)
{
    int x,y;

    x = rand();
    y = rand();
    x%=20;
    y%=20;
    cur_localtion.xpos = x;
    cur_localtion.ypos = y; 
    return cur_localtion;
}

// A function for working with fgets to storing strings
void enum_stuff()
{   
    int s;

    printf("Enter a value between 0 and 100 to test the enum: ");
    scanf("%d", &s);
    if ( verify_enum_value(s) )
    {
        printf("The value <%d> is within the enum range.\n", s);
    }
    else
    {
        printf("The value <%d> is OUTSIDE the enum range.\n", s);
    }
}

int verify_enum_value(int test_value)
{
    enum {false, true};

    if (test_value < 0 || test_value > 100)
    {
        return false;
    }
    return true;
}

void more_enum_stuff()
{   
    int numb_day;
    enum days { Sunday=1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
    char real_day[35];
    printf("I'm not using my enums right!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    printf("Enter a value that represents the day of the week: ");
    scanf("%d", &numb_day);

    switch (numb_day)
    {
    case 1:
        strcpy(real_day, "Sunday");
        break;
    case 2:
        strcpy(real_day, "Monday");
        break;
    case 3:
        strcpy(real_day, "Tuesday");
        break;
    case 4:
        strcpy(real_day, "Wednesday");
        break;
    case 5:
        strcpy(real_day, "Thursday");
        break;
    case 6:
        strcpy(real_day, "Friday");
        break;
    case 7:
        strcpy(real_day, "Saturday");
        break;
    default:
        strcpy(real_day, "I dont know what U tambout!!!");
        break;
    }
    
    printf("The value <%d> is is mapped to this day<%s>.\n", numb_day, real_day);
    // printf("Enum test %s.\n", days(3));
}