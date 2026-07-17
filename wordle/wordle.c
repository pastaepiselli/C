#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

#define ResultGreen     1 
#define ResultYellow    3
#define ResultRed       4

#define WORD_LEN        5

typedef char Result;

bool isinword(char, char*);
void Example_print_result(Result *);
int main(int, char *[]);
Result check_char(char, int, char*);
Result* check_word(char *guess, char *word);

void Example_print_result(Result *res)
{
    int i;
    for (i = 0; i < 5; i++)
        switch(res[i])
        {
            case ResultGreen:
                printf("%s\n", "Green");
                break;
            case ResultYellow:
                printf("%s\n", "Yellow");
                break;
            case ResultRed:
                printf("%s\n", "Red");
                break;
            default:
                printf("Unknown: %d\n", res[i]);
                break;
        }
    return;
}

Result check_char(char guess, int idx, char *word)
{
    char correct;
    correct = word[idx];
    if (guess == correct)
        return ResultGreen;
    else if(isinword(guess, word))
        return ResultYellow;
    return ResultRed;
}

bool isinword(char guess, char *word)
{
    bool result;
    int i, size; 

    result = false;
    size = strlen(word);

    for (i = 0; i < size; i++)
        if (word[i] == guess){
            result = true;
            break;
        }

    return result;
}

Result* check_word(char *guess, char *word){
    static Result res[5];
    int i;

    for (i = 0; i < WORD_LEN; i++)
        res[i] = check_char(guess[i], i, word);

    return res;
}

int main(int argc, char *argv[])
{
    char *correct, *guess;
    Result *res;
    if (argc < 3){
        fprintf(stderr, "Usage: %s CORRECTGUESSWORD\n", argv[0]);
        return -1;
    }

    correct = argv[1];
    guess = argv[2];

    res = check_word(correct, guess);
    Example_print_result(res);
    return 0;
}
