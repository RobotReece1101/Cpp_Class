#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

/*
To build the program:  Gcc chp12_arrays.c -o .\Debug\chp12_arrays.exe
To run the program:   .\Debug\chp12_arrays.exe
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

// A function for getting a list of score for an array of scores, or a list
void get_my_array();
// A function for a prefefined arra
void pre_defined_array();
// A function for putting chars using putchar()
void pre_defined_array_N_calc();
// A function for storing strings as char arrays
void char_array();
// A function for using scanf and storing strings as char arrays
void filling_an_empty_char_array();
// A function for working with scanf to get a other varaible types that require the & operator
void a_2d_array();
// A function for working with fgets to storing strings
void a_array_of_strings();
// A function for working with fgets to storing strings
void array_passing();

void show_array(int array[], int arrary_size);
void adjust_my_array(int array[], int arrary_size);

void bubble_sorting_an_array();

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

    my_new_section("Getting a list of score for an array of scores, or a list");
    enable_feature = 0;
    if (enable_feature)
        {
            get_my_array();
        }

    //////////////////////////////////////////////
    my_new_section("Getting Characters from User Input, with getc(stdin)");
    enable_feature = 1;
    if (enable_feature)
        {
            pre_defined_array();
        }

    ////////////////////////////////////////////////
    my_new_section("Using the putchar() function to output chars");
    enable_feature = 1;
    if (enable_feature)
        {
            pre_defined_array_N_calc();
        }

    ////////////////////////////////////////////////
    my_new_section("Storing strings as char arrays");
    enable_feature = 1;
    if (enable_feature)
        {
            char_array();
        }

    // ////////////////////////////////////////////////

    my_new_section("Filling an empty char array with scanf and fgets");
    enable_feature = 0;
    if (enable_feature)
        {
            filling_an_empty_char_array();
        }

    // ////////////////////////////////////////////////

    my_new_section("Bubble Sorting an array ");
    enable_feature = 1;
    if (enable_feature)
        {
            bubble_sorting_an_array();
        }


    // ////////////////////////////////////////////////
    my_new_section("2D Arrays");
    enable_feature = 0;
    if (enable_feature)
        {
            a_2d_array();
        }



    ////////////////////////////////////////////////

    my_new_section("An array of strings");
    enable_feature = 0;
    if (enable_feature)
        {
            a_array_of_strings();
        }

    ////////////////////////////////////////////////

    my_new_section("passing arrays to functions");
    enable_feature = 0;
    if (enable_feature)
        {
            array_passing();
        }

    start_n_endprints();

    ////////////////////////////////////////////////
    
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
void get_my_array()
{
    int scores = 10; // number of scores to get
    int highscores[scores];
    int x;

    for (x =0; x<scores; x++)
    {
        printf("Enter score %d: ", x+1);
        scanf("%d", &highscores[x]);
    }

    printf("\n");
    puts("Here are the scores you entered:");
    printf("\n");

    for (x =0; x<scores; x++)
    {
        printf("Score %d: %d\n", x+1, highscores[x]);
    }

}

// A function for getting chars using getc(stdin)
void pre_defined_array()
{
    float closings[] = {24164.95,24107.08,24643.63,24400.93,23728.53};
    int num_closings = sizeof(closings) / sizeof(closings[0]);
    int x;

    printf("\n");
    puts("Here are the scores you entered:");
    printf("\n");

    for (x =0; x<num_closings; x++)
    {
        printf("Score %d: %.2f\n", x+1, closings[x]);
    }

}

// A function for putting chars using putchar()
void pre_defined_array_N_calc()
{
    // int scores = 2; // number of scores to get
    float og_nums[] = {10,12,14,15,16,18,20};
    int numbs = sizeof(og_nums) / sizeof(og_nums[0]); // number of elements in the array
    float new_nums[numbs];
    int x;

    for (x =0; x<numbs; x++)
    {
        printf("Original Number %d: is <%.2f>\n", x+1, og_nums[x]);
        // new_nums[x] = og_nums[x] +20;
        new_nums[x] = sqrt(og_nums[x]);
        
    }

    printf("\n");
    puts("Here are the scores you entered:");
    printf("\n");

    for (x =0; x<numbs; x++)
    {
        // printf("Score %d: %.2f\n", x+1, og_nums[x]);
        printf("Original Number %d: is <%.2f>, the square root of that number is <%.2f>\n", x+1, og_nums[x], new_nums[x]);
    }

}

// A function for storing strings as char arrays
void char_array()
{
    char statement[] = "Random text";
    int index = 0;

    while(statement[index] != '\0')
    {
        putchar(statement[index]);
        index++;

        // printf("Character at index %d is: %c\n", index, statement[index]);
        // index++;
    }
    putchar('\n');

    my_new_section("puts(statement)");
    puts(statement);

    my_new_section("printf(####, statement)");
    printf("%s\n", statement);


}

// A function for working with scanf to get a char array more specifically a string
void filling_an_empty_char_array()
{
    char f_name[15];
    char l_name[15];
    printf("What is your first name? ");
    fgets(f_name,14,stdin);
    printf("Nice to meet you <%s>...\n", f_name);

    printf("\n");
    printf("What is your first name? ");
    scanf("%14s", l_name); // limit input to 14 chars to leave space for null terminator
    printf("Nice to meet you <%s>...\n", l_name);

    // // this usage of scanf when caputing a char array dosent't need the & operator to prefix the variable
    // scanf("%14s", f_name); // limit input to 14 chars to leave space for null terminator
    // printf("What is your last name? ");
    // scanf("%19s", l_name); // limit input to 14 chars to leave space for null terminator

    // printf("Nice to meet you <%s %s>...\n", f_name, l_name);
}

// A function for working with scanf to get a char array more specifically a string
void a_2d_array()
{
    char tic_tac_toe[3][3];
    int row, col;

    // Fill the 2D array with values
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            tic_tac_toe[row][col] = '.';
        }
        tic_tac_toe[1][1] = 'X';
    }

    // Print the 2D array
    printf("Tic Tac Toe Board:\n");
    for (row = 0; row < 3; row++) 
    {
        for(col = 0; col < 3; col++) 
        {
            printf("%c ", tic_tac_toe[row][col]);
        }
        putchar('\n');
    }
    
}

// A function for working with fgets to storing strings
void a_array_of_strings()
{   
    // int const my_size = 3;
    /*The compiler thinks size is not a compile‑time constant, so char 
    caesar[size][10] = {...} is treated as a variable‑length array (VLA). VLAs cannot be 
    initialized with an initializer list, hence the error.  Fix: make the size a 
    compile‑time constant (macro or enum) or omit the explicit first dimension. Example change 
    using an enum constant:*/

    // int const my_size = 3;// this causes an error
    enum { my_size = 3 };
    char caesar[my_size][10] = {"Julius", "Augustus", "Nero"};
    int x, index;

    for(x = 0; x < my_size; x++)
    {
        index = 0;
        // You can print each string character by character like this: But why would you?
        // while(caesar[x][index] != '\0')
        //     {
        //         putchar(caesar[x][index]);
        //         index++;
        //     }
        // putchar('\n');

        // Or you can just use puts to print each string like this:
        puts(caesar[x]);
    }

    
}

// A function for working with fgets to storing strings
void array_passing()
{
   int my_array[] = {2,3,5,7,9,11,13,17,19,21,23,25,27,29,31};
   int my_array_size = sizeof(my_array) / sizeof(my_array[0]);

   puts("Showing array values passed to a function:");
   show_array(my_array, my_array_size);
   adjust_my_array(my_array, my_array_size);
   show_array(my_array, my_array_size);
}



// A function for working with fgets to storing strings
void show_array(int array[], int arrary_size)
{
    // int array_size = sizeof(&array) / sizeof(&array[0]); // This will not work as expected because array decays to a pointer
    int x;

    printf("\n");
    printf("Showing the array values this function just recieved\n");

    for (x =0; x < arrary_size; x++)
    {
        printf("Value %d: %d\n", x+1, array[x]);
    }
}

// A function for working with fgets to storing strings
void adjust_my_array(int array[], int arrary_size)
{
    // int array_size = sizeof(&array) / sizeof(&array[0]); // This will not work as expected because array decays to a pointer
    int x;
    printf("\n");
    printf("Increamenting  the array values this function just recieved, but not showing them here.\n");
    
    for (x =0; x < arrary_size; x++)
    {
        // printf("Value %d: %d\n", x+1, array[x]);
        array[x] = array[x] + 10;
    }
}
// A function for sorting an array
void bubble_sorting_an_array() 
{
    // const int size_of_bubble = 6;
    int bubble[] = {150, 34, 525, 12, 22, 1, 54, 663, 23, 87};
    const int size_of_bubble = sizeof(bubble) / sizeof(bubble[0]);
    int inner, outer, temp, x;

    puts ("Original array:");
    for (x = 0; x < size_of_bubble; x++) 
    {
        printf("%d ", bubble[x]);
    }   

    // Bubble sort algorithm, smallest to largerst
    for (outer = 0; outer < size_of_bubble - 1; outer++) 
    {
        for (inner = 0; inner < size_of_bubble - outer - 1; inner++) 
        {
            if (bubble[inner] > bubble[inner + 1]) 
            {
                // Swap bubble[inner] and bubble[inner + 1]
                temp = bubble[inner];
                bubble[inner] = bubble[inner + 1];
                bubble[inner + 1] = temp;
            }
        }
    }

    puts ("\nSorted array smallest to largest:");
    for (x = 0; x < size_of_bubble; x++) 
    {
        printf("%d ", bubble[x]);
    }

        // Bubble sort algorithm, larges to smallest
    for (outer = 0; outer < size_of_bubble - 1; outer++) 
    {
        for (inner = 0; inner < size_of_bubble - outer - 1; inner++) 
        {
            if (bubble[inner] < bubble[inner + 1]) 
            {
                // Swap bubble[inner] and bubble[inner + 1]
                temp = bubble[inner];
                bubble[inner] = bubble[inner + 1];
                bubble[inner + 1] = temp;
            }
        }
    }

    puts ("\nSorted array largest to smallest:");
    for (x = 0; x < size_of_bubble; x++) 
    {
        printf("%d ", bubble[x]);
    }
}

