#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // CODE(1)
    // THE BELOW MENTION CODE IS TO FIND RANDOM 2 DIGIT NUMBER
    int number, guess, n=1;
    srand(time(0));
    number = rand() % 100 + 1;
    //printf("THE RANDOM NUMBER IS %d\n", number);
    // CODE (2)
    // DO-WHILE LOOP--->SELECTED BECAUSE CODE SHOULD BE EXECUTE AT LEAST ONCE
    do
    {
        printf("GUESS THE NUMBER BETWEEN 1 TO 100:\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("PLEASE INSERT LOWER NUMBER\n");
        }
        else if (guess < number)
        {
            printf("PLEASE INSERT HIGHER NUMBER\n");
        }
        else
        {
            printf("***WOOHOO*** YOU GUESSED IT IN %d ATTEMPTS\n",n);
        }
        n++;
    } while (guess!=number);

    return 0;
}