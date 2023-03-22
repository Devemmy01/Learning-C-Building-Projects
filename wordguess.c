#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    const int MIN = 1;
    const int MAX = 50;
    int guess;
    int guesses;
    int answer;

    // uses the current time as seed to generate random numbers
    srand(time(0));

    // This will generate a random number between MIN & MAX
    answer = (rand() % MAX) + MIN;

    printf("%d", answer); 

    do
    {
        printf("Enter a guesss: ");
        scanf("%d", &guess);

        if (guess > answer){
            printf("Too high!\n");
        } else if(guess < answer){
            printf("Too low!\n");
        } else{
            printf("CORRECT!\n");
        }
        guesses++;

    } while (guess != answer);
    
    printf("======================");
    printf("answer: %d\n", answer);
    printf("guesses: %d\n", guesses);
    printf("======================");

    return 0;
}