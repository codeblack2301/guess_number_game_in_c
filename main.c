#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(0));

    int guess = 0;
    int tries = 0;
    int peidei;
    int min = 1;
    int max = 100;

    int answer = rand() % (max - min + 1) + min;

    printf("--------NUMBER GUESS GAME---------\n");

    do
    {
        printf("guess a number between %d and %d: ", min, max);
        scanf("%d", &guess);

        tries += 1;

        printf("try again? (-1 to quit): ");
        scanf("%d", &peidei);

    } while (guess != answer && peidei != -1);

    printf("the answer is %d\n", answer);
    printf("it took %d tries\n", tries);

    return 0;
}