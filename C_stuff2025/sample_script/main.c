#include <stdio.h>
#include <stdlib.h>

/*
To build the program:  Gcc main.c -o .\Debug\main.exe
To run the program:   .\Debug\main.exe
*/


int main()
{
    char name[21] = "Maurice   Harris  Jr"; // this is an array
    printf("My name is %s\n", name);

    name [8] = 'R';//always starts with 0
    printf("My name is %s\n", name);

    name [17] = 'I';//always starts with 0
    name [18] = 'I';//always starts with 0
    name [19] = 'I';//always starts with 0
    //name [20] = 'I';//always starts with 0
    printf("My Sons name is %s\n", name);

    char food[] = "BBQ....k";
    printf("My favorite food is %s\n", food);




    strcpy (food, "suscpphi");
    printf("I also love %s", food);



    return 0;
}
