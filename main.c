#include <stdio.h>

int main() {
    int secret = 5;
    int guess;
    int guessLimit = 3;

    while (guessLimit > 0) {
        printf("Guess the number: ");
        scanf("%d", &guess);

        if (guess == secret) {
            printf("You guessed it!\n");
            return 0;
        }

        guessLimit--;
        printf("The secret number is %s than your guess. Try again!\n", guess > secret ? "lower" : "higher");
        printf("You have %d guesses left.\n", guessLimit);
    }

    return 0;
}