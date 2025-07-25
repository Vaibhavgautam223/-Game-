#include <stdio.h>

int main() {
    char answer;
    int score = 0;
    int total_questions = 3;

    printf("?? Welcome to the Educational Quiz Game!\n");
    printf("----------------------------------------\n");

    // Question 1
    printf("\n1. What is the capital of India?\n");
    printf("A. Mumbai\nB. New Delhi\nC. Kolkata\nD. Chennai\n");
    printf("Your answer: ");
    scanf(" %c", &answer);

    if (answer == 'B' || answer == 'b') {
        printf("? Correct!\n");
        score++;
    } else {
        printf("? Wrong. The correct answer is B. New Delhi\n");
    }

    // Question 2
    printf("\n2. What is 5 x 6?\n");
    printf("A. 30\nB. 56\nC. 36\nD. 26\n");
    printf("Your answer: ");
    scanf(" %c", &answer);

    if (answer == 'A' || answer == 'a') {
        printf("? Correct!\n");
        score++;
    } else {
        printf("? Wrong. The correct answer is A. 30\n");
    }

    // Question 3
    printf("\n3. Who invented C language?\n");
    printf("A. Steve Jobs\nB. Dennis Ritchie\nC. Charles Babbage\nD. Bill Gates\n");
    printf("Your answer: ");
    scanf(" %c", &answer);

    if (answer == 'B' || answer == 'b') {
        printf("? Correct!\n");
        score++;
    } else {
        printf("? Wrong. The correct answer is B. Dennis Ritchie\n");
    }

    // Final Result
    printf("\n?? Game Over!\n");
    printf("You got %d out of %d questions correct.\n", score, total_questions);
    printf("Thanks for playing!\n");

    return 0;
}

