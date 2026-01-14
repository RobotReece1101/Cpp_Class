#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
To build the program:  Gcc chp17_binary_n_bitwise_operators.c -o .\Debug\chp17_binary_n_bitwise_operators.exe
To run the program:   .\Debug\chp17_binary_n_bitwise_operators.exe
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
void int_to_binary();
// A function for getting chars using getc(stdin)
char *int_2_8bits(unsigned char n);
char *int_2_16bits(unsigned n);
// A function for putting chars using putchar()
void or_set_bitwise();
// A function for storing strings as char arrays
void lowercase_w_bitwise_or();
// A function for using scanf and storing strings as char arrays
void and_set_bitwise();
// A function for working with scanf to get a other varaible types that require the & operator
void uppercase_w_bitwise_and();
// A function for working with fgets to storing strings
void exclusive_or_xor();
// A function for working with fgets to storing strings
void bit_shifting_left_up();
void bit_shifting_right_down();
void the_hex();


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
            int_to_binary();
        }

    //////////////////////////////////////////////
    my_new_section("Getting Characters from User Input, with getc(stdin)");
    enable_feature = 0;
    if (enable_feature)
        {
            or_set_bitwise();
        }

    ////////////////////////////////////////////////
    my_new_section("Using the putchar() function to output chars");
    enable_feature = 0;
    if (enable_feature)
        {
            lowercase_w_bitwise_or();
        }

    ////////////////////////////////////////////////
    my_new_section("Storing strings as char arrays");
    enable_feature = 0;
    if (enable_feature)
        {
            and_set_bitwise();
        }

    ////////////////////////////////////////////////

    my_new_section("Scanf and Storing strings as char arrays");
    enable_feature = 0;
    if (enable_feature)
        {
            uppercase_w_bitwise_and();
        }

    ////////////////////////////////////////////////

    my_new_section("Scanf and Storing other var types");
    enable_feature = 0;
    if (enable_feature)
        {
            exclusive_or_xor();
        }

    //////////////////////////////////////////////////

    my_new_section("bit shift display left count up");
    enable_feature = 0;
    if (enable_feature)
        {
            bit_shifting_left_up();
        }

    //////////////////////////////////////////////////

    my_new_section("bit shift display right count down");
    enable_feature = 0;
    if (enable_feature)
        {
            bit_shifting_right_down();
        }

    //////////////////////////////////////////////////

    my_new_section("hex shift display");
    enable_feature = 1;
    if (enable_feature)
        {
            the_hex();
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



// A function for finding the binary representation of an unsigned char
char *int_2_8bits(unsigned char n)
{
    static char binary[9];
    int x;

    for (x = 0; x < 8 ; x++)
    {
        binary[x] = n & 0x80 ? '1' : '0';
        n <<= 1;
    }
    binary[x] = '\0';
    return(binary);
}

// A function for finding the binary 16 bit representation of an unsigned char
char *int_2_16bits(unsigned n)
{
    static char binary[17];
    int x;

    for (x = 0; x < 16 ; x++)
    {
        binary[x] = n & 0x8000 ? '1' : '0';
        n <<= 1;
    }
    binary[x] = '\0';
    return(binary);
}

// A function for getting chars
void int_to_binary()
{
    unsigned input_8;
    unsigned input_16;
    char binary_8bit_rep[9];
    char binary_16bit_rep[17];

    printf("Type a value 0 to 255: ...  ");
    scanf("%u", &input_8);
    printf("Type a value 0 to 65535: ...  ");
    scanf("%u", &input_16);

    // I wanted to store it in a var rather than call the function on and use it all in 1 line.
    
    // Get the binary representation of the input value
    // Store it in binary_8bit_rep
    memcpy(binary_8bit_rep, int_2_8bits((unsigned char)input_8), 9);
    // Store it in binary_8bit_rep
    memcpy(binary_16bit_rep, int_2_16bits((unsigned)input_16), 17);

    // calling the function directly inside printf
    // printf("You entered:< %u > , Its value represented in bytes(a 8 bit word) is < %s >\n", input, int_2_8bits((unsigned char)input));
    
    // calling the function with my stored var
    printf("You entered:< %u > , Its value represented in bytes(a 8 bit word ) is \t\t< %s >\n", input_8, binary_8bit_rep);
    printf("You entered:< %u > , Its value represented in bytes(a 16 bit word) is \t< %s >\n", input_16, binary_16bit_rep);
}

// A function for putting chars using putchar()
void or_set_bitwise()
{
    const int set = 32; // Bit mask to set the 6th bit
    // const int set = 7; // Bit mask to set the 6th bit
    unsigned int bor, result;

    printf("Enter a value between 0 and 255: ");
    scanf("%u", &bor); // Read an unsigned char value from user
    result = bor | set; // Set the 6th bit using bitwise OR

    printf("\nOriginal value for an <| bitwise> conversion : \t\t\t%u (Binary: %s)\n", bor, int_2_8bits((unsigned char)bor));
    printf("Set bit  value <|> constant to use in bitwise conversion : \t%u (Binary: %s)\n", set, int_2_8bits((unsigned char)set));
    printf("Value after setting 6th bit  :    \t\t\t\t%u (Binary: %s)\n", result, int_2_8bits((unsigned char)result));
    getchar(); // consume newline character left in input buffer



    ////////////////////////////////////////////////
    my_new_section("char storage and manipulation");
    
}

// A function for storing strings as char arrays
void lowercase_w_bitwise_or()
{
    char user_input[64];
    // char user_input[5];
    int ch;
    int x = 0;

    printf("Enter a string in ALL CAPS (max 63 chars): ");
    fgets(user_input, sizeof(user_input - 1), stdin);

    while (user_input[x] != '\n')
    {
        ch = user_input[x] | 32;
        putchar(ch);
        x++;
    }

    putchar('\n');


}

// A function for working with scanf to get a char array more specifically a string
void and_set_bitwise()
{
    // const int set = 223; // Bit mask to set the 6th bit
    int set = 223; // Bit mask to set the 6th bit
    // const int set = 7; // Bit mask to set the 6th bit
    unsigned int bor, result;

    printf("Enter a value between 0 and 255: ");
    scanf("%u", &bor); // Read an unsigned char value from user
    result = bor & set; // Set the 6th bit using bitwise OR

    printf("\nOriginal value for an <& bitwise> conversion : \t\t\t%u (Binary: %s)\n", bor, int_2_8bits((unsigned char)bor));
    printf("Set bit  value <&> constant to use in bitwise conversion : \t%u (Binary: %s)\n", set, int_2_8bits((unsigned char)set));
    printf("Value after setting 6th bit  :    \t\t\t\t%u (Binary: %s)\n", result, int_2_8bits((unsigned char)result));
    // getchar(); // consume newline character left in input buffer



    ////////////////////////////////////////////////
    my_new_section("Changing constant to set the 6th bit using AND bitwise operator");
    
    set = 170; // Bit mask to set the 6th bit
    result = bor & set; // Set the 6th bit using bitwise OR

    printf("\nOriginal value for an <& bitwise> conversion : \t\t\t%u (Binary: %s)\n", bor, int_2_8bits((unsigned char)bor));
    printf("Set bit  value <&> constant to use in bitwise conversion : \t%u (Binary: %s)\n", set, int_2_8bits((unsigned char)set));
    printf("Value after setting 6th bit  :    \t\t\t\t%u (Binary: %s)\n", result, int_2_8bits((unsigned char)result));
    // getchar(); // consume newline character left in input buffer

    ////////////////////////////////////////////////
    my_new_section("Changing constant to set the 6th bit using AND bitwise operator");
    
    set = 170; // Bit mask to set the 6th bit
    result = bor & set; // Set the 6th bit using bitwise OR

    printf("\nOriginal value for an <& bitwise> conversion : \t\t\t%u (Binary: %s)\n", bor, int_2_8bits((unsigned char)bor));
    printf("Set bit  value <&> constant to use in bitwise conversion : \t%u (Binary: %s)\n", set, int_2_8bits((unsigned char)set));
    printf("Value after setting 6th bit  :    \t\t\t\t%u (Binary: %s)\n", result, int_2_8bits((unsigned char)result));
    // getchar(); // consume newline character left in input buffer

    ////////////////////////////////////////////////
    my_new_section("Changing constant to set the 6th bit using AND bitwise operator");
    
    set = 7; // Bit mask to set the 6th bit
    result = bor & set; // Set the 6th bit using bitwise OR

    printf("\nOriginal value for an <& bitwise> conversion : \t\t\t%u (Binary: %s)\n", bor, int_2_8bits((unsigned char)bor));
    printf("Set bit  value <&> constant to use in bitwise conversion : \t%u (Binary: %s)\n", set, int_2_8bits((unsigned char)set));
    printf("Value after setting 6th bit  :    \t\t\t\t%u (Binary: %s)\n", result, int_2_8bits((unsigned char)result));
    // getchar(); // consume newline character left in input buffer
}

// A function for working with scanf to get a char array more specifically a string
void uppercase_w_bitwise_and()
{
    char user_input[64];
    // char user_input[5];
    int ch;
    int x = 0;

    printf("Enter a string in lower case (max 63 chars): ");
    fgets(user_input, sizeof(user_input - 1), stdin);

    while (user_input[x] != '\n')
    {
        ch = user_input[x] & 223;
        putchar(ch);
        x++;
    }

    putchar('\n');
}

// A function for working with fgets to storing strings
void exclusive_or_xor()
{   
    int a,x,r;
    a = 73;
    x = 170;
   
    printf("  %s %3d\n", int_2_8bits((unsigned char)a), a);
    printf("^ %s %3d\n", int_2_8bits((unsigned char)x), x);
    r = a ^ x;
    printf("= %s %3d\n", int_2_8bits((unsigned char)r), r);

    printf("^ %s %3d\n", int_2_8bits((unsigned char)x), x);
    a= r ^ x;
    printf("  %s %3d\n", int_2_8bits((unsigned char)a), a);

}

// A function for working with fgets to storing strings
void bit_shifting_left_up()
{   
    unsigned bshift, x;

    printf("Enter a value between 0 and 65535: ");
    scanf("%u", &bshift); // Read an unsigned char value from user

    for (x=0; x<16; x++)
    {
        // printf("Left Shift by %d: %s %3u\n", x, int_2_8bits((unsigned char)(bshift << x)), (unsigned char)(bshift << x));
        printf("%s\t%d\n", int_2_16bits((unsigned)bshift),bshift);
        bshift = bshift << 1;
    }
    getchar(); // consume newline character left in input buffer

}

void bit_shifting_right_down()
{   
    unsigned bshift, x;

    printf("Enter a value between 0 and 65535: ");
    scanf("%u", &bshift); // Read an unsigned char value from user

    for (x=0; x<16; x++)
    {
        // printf("Left Shift by %d: %s %3u\n", x, int_2_8bits((unsigned char)(bshift << x)), (unsigned char)(bshift << x));
        printf("%s\t%d\n", int_2_16bits((unsigned)bshift),bshift);
        bshift = bshift >> 1;
    }
    getchar(); // consume newline character left in input buffer

}

void the_hex()
{   
    unsigned hex_shift, x;

    // hex_shift = 21;
    // hex_shift = 0xff; // 255 decimal


    printf("Enter a value between 0 and 65535 for me to hex shift for you: ");
    scanf("%u", &hex_shift); // Read an unsigned char value from user

    for (x=0; x<8; x++)
    {
        // // printf("Left Shift by %d: %s %3u\n", x, int_2_8bits((unsigned char)(bshift << x)), (unsigned char)(bshift << x));
        // printf("%s\t%d\n", int_2_16bits((unsigned)bshift),bshift);
        // bshift = bshift >> 1;
        printf("%s 0x%04x %4d\n",int_2_16bits((unsigned)hex_shift), hex_shift, hex_shift);
        hex_shift <<=1;
    }

}