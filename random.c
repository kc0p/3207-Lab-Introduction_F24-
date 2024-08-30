#include <stdio.h>
#include <stdlib.h>

#define NUM_MIN 0
#define NUM_MAX 25

char randchar()
{
    //generate num 0-25
    int num = rand() % (NUM_MAX - NUM_MIN + 1) + NUM_MIN;

    //use as offset from ascii value of 'A' to convert to uppercase
    char letter = num + 65;
    return letter;
}