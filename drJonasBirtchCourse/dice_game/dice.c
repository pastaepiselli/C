#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

#define STARTING_BALANCE 1000

// ==== VARIABLES ====
int bet;
int balance = STARTING_BALANCE;
int guess;
int rand_number;

// ==== FUNCTIONS ====
int getbet(void);
int getguess(void);
int generatenumber(void);

// ==== MAIN LOOP ====
int main(void)
{

    srand(getpid());
    while (1)
    {
        // obtain bet 
        bet = getbet();
        
        // obtain user guess 
        guess = getguess();
        if (guess == 0)
            break;

        printf("Your guess: %d\n", guess);
        // generate *random* number
        rand_number = generatenumber();

        printf("Generated number: %d\n", rand_number);

        // check win
        if (guess == rand_number)
        {
            balance += bet * 3;
            printf("You win!! (Current balance: %d)\n", balance);
        }
        else
        {
            balance -= bet;
            printf("You lost... (Current balance: %d)\n", balance);
        }
        
        // check if u can play
        if (balance == 0) {
            printf("You can not play with 0 balance, interruping game session");
            break;
        }

    }
}

int getbet(void)
{
        printf("Select you bet ( current balance: %d )\n", balance);
        while (1)
        {
            scanf("%d", &bet);
            if (bet <= balance && bet > 0)
                break;
            printf("Please insert a valid bet\n");
        }
        return bet;
}

int getguess(void)
{
        printf("Do your guess between 1 - 6 ( guess 0 to exit the game )\n");
        while (1)
        {
            scanf("%d", &guess);
            if (guess >= 0 && guess <= 6 ) 
                break;
            printf("Please insert a valid guess\n");
        } 

        return guess;
}

int generatenumber(void)
{
        printf("Generating number...\n");
        sleep(2);
        return rand() % 6 + 1;
}
