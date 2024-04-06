#include <stdlib.h>
#include <stdio.h>

int main() {
    int secret = 5;
    int guess = 0;
    int gameOver = 0;

    while (gameOver == 0) {
        printf("Guess the number: ");
        scanf("%d", &guess);

        if (guess == secret) {
            printf("You guessed it!\n");
            gameOver = 1;
        } else {
            printf("Try again!\n");
            if(guess > secret) {
                printf("The secret number is lower than your guess.\n");
            } else {
                printf("The secret number is higher than your guess.\n");
            }
        }
    }

    return 0;
}