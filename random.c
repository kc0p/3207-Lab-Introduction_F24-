#include <stdio.h>
//#include <sys/stat.h>
//#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define NUM_MIN 0
#define NUM_MAX 25

int randomNum(){
    //srand((unsigned)time(NULL));
    return rand() % (NUM_MAX - NUM_MIN + 1) + NUM_MIN;
}

char randchar()
{
    //generate num 0-25
    int num = randomNum();

    //use as offset from ascii value of 'A' to convert to uppercase
    char letter = num + 65;
    return letter;
}

void main()
{
    //seed rand for randomNum
    srand(time(NULL));
    
    char a = randchar();
    sleep(1);
    char b = randchar();
    sleep(1);
    char c = randchar();
    printf("%c\n%c\n%c", a, b, c);
}