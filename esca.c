#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_WORD_LENGTH 50
#define NUM_WORDS 7

void wordScrambleGame();
void sudokuSolver();
void sequenceGame();
void puzzleGame();
void MatrixMatch();
void messageEncryption();

int main()
{
    printf("\033[1;35mww         ww  EEEEEEEEEEEE  LL             CCCCCCCCCC    OOOOO    MM            MM  EEEEEEEEEEEE\033[0m\n");
    printf("\033[1;35mww         ww  EE            LL           CC            OO     OO  MM MM      MM MM  EE\033[0m\n");
    printf("\033[1;35mww    w    ww  EEEEEEEEEEEE  LL           CC            OO     OO  MM   MM  MM   MM  EEEEEEEEEEEE\033[0m\n");
    printf("\033[1;35mww   www   ww  EE            LL           CC            OO     OO  MM     MM     MM  EE\n\033[0m");
    printf("\033[1;35m  ww     ww    EEEEEEEEEEEE  LLLLLLLLLLLL   CCCCCCCCCC    OOOOO    MM            MM  EEEEEEEEEEEE\033[0m\n");
    printf("\n");
    printf("\t\t\t\t\033[1;35m TTTTTTTTTTT    OOOOO  \033[0m\n");
    printf("\t\t\t\t\033[1;35m     TT       OO     OO\033[0m \n");
    printf("\t\t\t\t\033[1;35m     TT       OO     OO\033[0m \n");
    printf("\t\t\t\t\033[1;35m     TT       OO     OO\033[0m \n");
    printf("\t\t\t\t\033[1;35m     TT         OOOOO  \033[0m\n");
    printf("\n");
    printf("\t\033[1;35mEEEEEEEEEEEE    SSSSSSSSS      CCCCCCCCCC       AA       PPPPPPPPPP  EEEEEEEEEEEE\033[0m \n");
    printf("\t\033[1;35mEE            SS             CC               AA  AA     PP      PP  EE\033[0m\n");
    printf("\t\033[1;35mEEEEEEEEEEEE    SSSSSSSSS    CC              AAAAAAAA    PPPPPPPPPP  EEEEEEEEEEEE\033[0m \n");
    printf("\t\033[1;35mEE                       SS  CC             AA      AA   PP          EE\033[0m\n");
    printf("\t\033[1;35mEEEEEEEEEEEE    SSSSSSSSS      CCCCCCCCCC  AA        AA  PP          EEEEEEEEEEEE\033[0m \n");
    printf("\n");
    printf("\t\t\t\033[1;35mRRRRRRRRR    OOOOO      OOOOO    MM            MM\033[0m\n");
    printf("\t\t\t\033[1;35mRR    RR   OO     OO  OO     OO  MM MM      MM MM\033[0m\n");
    printf("\t\t\t\033[1;35mRRRRR      OO     OO  OO     OO  MM   MM  MM   MM\033[0m \n");
    printf("\t\t\t\033[1;35mRR   RR    OO     OO  OO     OO  MM     MM     MM\033[0m \n");
    printf("\t\t\t\033[1;35mRR     RR    OOOOO      OOOOO    MM            MM\033[0m\n");
    printf("\n\n\n\n");
    int choice;
    for (choice = 1; choice <= 6; choice++)
    {

        switch (choice)
        {
        case 1:
            printf("\033[1;34mLL           EEEEEEEEEE  VV       VV  EEEEEEEEEE  LL              111\033[0m\n");
            printf("\033[1;34mLL           EE           VV     VV   EE          LL            11 11\033[0m\n");
            printf("\033[1;34mLL           EEEEEEEEEE    VV   VV    EEEEEEEEEE  LL               11\033[0m\n");
            printf("\033[1;34mLL           EE             VV VV     EE          LL               11\033[0m\n");
            printf("\033[1;34mLLLLLLLLLLLL EEEEEEEEEE       V       EEEEEEEEEE  LLLLLLLLLLLL  11111111\033[0m\n\n");
            printf("-------------------------------------------------------------------------\n\n\n");
            wordScrambleGame();
            continue;
        case 2:
            printf("\033[1;34mLL           EEEEEEEEEE  VV       VV  EEEEEEEEEE  LL            222222 \033[0m \n");
            printf("\033[1;34mLL           EE           VV     VV   EE          LL                22 \033[0m \n");
            printf("\033[1;34mLL           EEEEEEEEEE    VV   VV    EEEEEEEEEE  LL              22   \033[0m \n");
            printf("\033[1;34mLL           EE             VV VV     EE          LL             22    \033[0m \n");
            printf("\033[1;34mLLLLLLLLLLLL EEEEEEEEEE       V       EEEEEEEEEE  LLLLLLLLLLLL  2222222\033[0m \n\n");
            printf("-------------------------------------------------------------------------\n\n\n");
            sequenceGame();
            continue;
        case 3:
            printf("\033[1;34mLL           EEEEEEEEEE  VV       VV  EEEEEEEEEE  LL            333333\033[0m\n");
            printf("\033[1;34mLL           EE           VV     VV   EE          LL                33\033[0m\n");
            printf("\033[1;34mLL           EEEEEEEEEE    VV   VV    EEEEEEEEEE  LL            333333\033[0m\n");
            printf("\033[1;34mLL           EE             VV VV     EE          LL                33\033[0m\n");
            printf("\033[1;34mLLLLLLLLLLLL EEEEEEEEEE       V       EEEEEEEEEE  LLLLLLLLLLLL  333333\033[0m\n\n");
            printf("-------------------------------------------------------------------------\n\n\n");
            MatrixMatch();
            continue;
        case 4:
            printf("\033[1;34mLL           EEEEEEEEEE  VV       VV  EEEEEEEEEE  LL            44       \033[0m \n");
            printf("\033[1;34mLL           EE           VV     VV   EE          LL            44       \033[0m \n");
            printf("\033[1;34mLL           EEEEEEEEEE    VV   VV    EEEEEEEEEE  LL            44   44  \033[0m \n");
            printf("\033[1;34mLL           EE             VV VV     EE          LL            444444444\033[0m \n");
            printf("\033[1;34mLLLLLLLLLLLL EEEEEEEEEE       V       EEEEEEEEEE  LLLLLLLLLLLL       44  \033[0m \n\n");
            printf("-------------------------------------------------------------------------\n\n\n");
            getchar();
            messageEncryption();
            continue;
        case 5:
            printf("\033[1;34mLL           EEEEEEEEEE  VV       VV  EEEEEEEEEE  LL            555555555\033[0m\n");
            printf("\033[1;34mLL           EE           VV     VV   EE          LL            55       \033[0m\n");
            printf("\033[1;34mLL           EEEEEEEEEE    VV   VV    EEEEEEEEEE  LL            555555555\033[0m\n");
            printf("\033[1;34mLL           EE             VV VV     EE          LL                   55\033[0m\n");
            printf("\033[1;34mLLLLLLLLLLLL EEEEEEEEEE       V       EEEEEEEEEE  LLLLLLLLLLLL  555555555\033[0m\n\n");
            printf("-------------------------------------------------------------------------\n\n\n");
            puzzleGame();
            continue;
        case 6:
            printf("\033[1;34mLL           EEEEEEEEEE  VV       VV  EEEEEEEEEE  LL            666666666\033[0m\n");
            printf("\033[1;34mLL           EE           VV     VV   EE          LL            66       \033[0m\n");
            printf("\033[1;34mLL           EEEEEEEEEE    VV   VV    EEEEEEEEEE  LL            666666666\033[0m\n");
            printf("\033[1;34mLL           EE             VV VV     EE          LL            66     66\033[0m\n");
            printf("\033[1;34mLLLLLLLLLLLL EEEEEEEEEE       V       EEEEEEEEEE  LLLLLLLLLLLL  666666666\033[0m\n\n");
            printf("-------------------------------------------------------------------------\n\n\n");
            sudokuSolver();
            continue;

        default:
            printf(">Invalid choice. Exiting...\n");
            break;
        }

        return 0;
    }
}
// Function to scramble a word by shuffling its characters
void scrambleWord(char *word)
{
    int length = strlen(word);
    for (int i = 0; i < length - 1; i++)
    {
        // Generate a random index between i and length - 1
        int j = i + rand() % (length - i);
        // Swap characters at positions i and j
        char temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
}

void wordScrambleGame()
{
    srand(time(0)); // Seed the random number generator with the current time

    // Array of words to choose from
    char words[NUM_WORDS][MAX_WORD_LENGTH] = {
        "apple",
        "banana",
        "orange",
        "grape",
        "melon",
        "strawberry",
        "pineapple"};

    // Select a random word from the array
    int randomIndex = rand() % NUM_WORDS;
    char originalWord[MAX_WORD_LENGTH];
    strcpy(originalWord, words[randomIndex]);

    // Create a scrambled version of the word
    char scrambledWord[MAX_WORD_LENGTH];
    strcpy(scrambledWord, originalWord);
    scrambleWord(scrambledWord);

    // Display welcome message and the scrambled word
    printf("|-----------------------------------------------------|\n|\t\tWelcome to Word Scramble!             |\n");
    printf("|-----------------------------------------------------|\n\n\n");

    printf(">Unscramble the word: %s\n", scrambledWord);
    printf(">Hint: They are all fruits.\n\n");

    char guess[MAX_WORD_LENGTH];
    printf(">Your guess: ");
    scanf("%s", guess);

    // Compare the player's guess with the original word
    if (strcmp(guess, originalWord) == 0)
    {
        printf(">Congratulations! You unscrambled the word!\n");
    }
    else
    {
        printf(">Sorry, that's incorrect. The word was: %s\n", originalWord);
    }

    // Compare the player's guess with the original word
    if (strcmp(guess, originalWord) == 0)
    {
        printf("Congratulations! You unscrambled the word!\n");
        printf("\033[1;32mLL           EEEEEEEEEE  VV       VV  EEEEEEEEEE  LL           \033[0m \n");
        printf("\033[1;32mLL           EE           VV     VV   EE          LL           \033[0m \n");
        printf("\033[1;32mLL           EEEEEEEEEE    VV   VV    EEEEEEEEEE  LL           \033[0m \n");
        printf("\033[1;32mLL           EE             VV VV     EE          LL           \033[0m \n");
        printf("\033[1;32mLLLLLLLLLLLL EEEEEEEEEE       V       EEEEEEEEEE  LLLLLLLLLLLL \033[0m \n");

        printf("\033[1;32mPPPPPPPP       AA         SSSSSSSSS     SSSSSSSSS    EEEEEEEEEE  DDDDDDDDDD \033[0m\n");
        printf("\033[1;32mPP    PP     AA  AA     SS            SS             EE          DD       D \033[0m\n");
        printf("\033[1;32mPPPPPPPP    AAAAAAAA      SSSSSSSSS     SSSSSSSSS    EEEEEEEEEE  DD       D \033[0m\n");
        printf("\033[1;32mPP         AA      AA              SS            SS  EE          DD       D \033[0m\n");
        printf("\033[1;32mPP        AA        AA    SSSSSSSSS     SSSSSSSSS    EEEEEEEEEE  DDDDDDDDDD \033[0m\n\n");
        printf("---------------------------------------------------------------------------\n");
    }
    else
    {
        printf("Sorry, that's incorrect. The word was: %s\n", originalWord);
        printf("\033[1;31mLL           EEEEEEEEEE  VV       VV  EEEEEEEEEE  LL           \033[0m \n");
        printf("\033[1;31mLL           EE           VV     VV   EE          LL           \033[0m \n");
        printf("\033[1;31mLL           EEEEEEEEEE    VV   VV    EEEEEEEEEE  LL           \033[0m \n");
        printf("\033[1;31mLL           EE             VV VV     EE          LL           \033[0m \n");
        printf("\033[1;31mLLLLLLLLLLLL EEEEEEEEEE       V       EEEEEEEEEE  LLLLLLLLLLLL \033[0m \n");

        printf("\033[1;31mFFFFFFFFFFFF       AA       IIIIIIIIII  LL           EEEEEEEEEE  DDDDDDDDDD\033[0m\n");
        printf("\033[1;31mFF               AA  AA          I      LL           EE          DD       D\033[0m\n");
        printf("\033[1;31mFFFFFFFFFFFF    AAAAAAAA         I      LL           EEEEEEEEEE  DD       D\033[0m\n");
        printf("\033[1;31mFF             AA      AA        I      LL           EE          DD       D\033[0m\n");
        printf("\033[1;31mFF            AA        AA  IIIIIIIIII  LLLLLLLLLLL  EEEEEEEEEE  DDDDDDDDDD\033[0m\n\n");
        printf("---------------------------------------------------------------------------\n");
        wordScrambleGame();
    }
}
void display(int arr[6][6])
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
}
int rowcheck(int arr[6][6])
{
    int c[7] = {0};

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            c[arr[i][j]]++;
        }

        for (int k = 1; k <= 6; k++)
        {
            if (c[k] != 1)
            {
                printf(">The value %d occurs %d times in row %d\n", k, c[k], i + 1);
                return 0;
            }
        }

        for (int k = 1; k <= 6; k++)
        {
            c[k] = 0;
        }
    }

    return 1;
}

int colcheck(int arr[6][6])
{
    int c[7] = {0};

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            c[arr[i][j]]++;
        }

        for (int k = 1; k <= 6; k++)
        {
            if (c[k] != 1)
            {
                printf(">The value %d occurs %d times in row %d\n", k, c[k], i + 1);
                return 0;
            }
        }

        for (int k = 1; k <= 6; k++)
        {
            c[k] = 0;
        }
    }

    return 1;
}

int cubecheck(int arr[6][6])
{
    int c[7] = {0};
    int count = 0;
    for (int m = 0; m < 6; m += 3)
    {
        for (int b = 0; b < 6; b += 3)
        {
            for (int i = m; i < m + 2; i++)
            {
                for (int j = b; j < b + 3; j++)
                {
                    c[arr[i][j]]++;
                }
            }
            count++;
            for (int k = 1; k <= 6; k++)
            {
                if (c[k] != 1)
                {
                    printf(">The value %d occurs %d times in %d box\n", k, c[k], count);
                    return 0;
                }
            }

            for (int k = 1; k <= 6; k++)
            {
                c[k] = 0;
            }
        }
    }

    return 1;
}

void isCorrect(int arr[6][6])
{

    if (rowcheck(arr) == 1 && colcheck(arr) == 1 && cubecheck(arr) == 1)
    {
        printf("Success\n");
        printf("Congratulations! You unscrambled the word!\n");
        printf("\033[1;32mLL           EEEEEEEEEE  VV       VV  EEEEEEEEEE  LL           \033[0m \n");
        printf("\033[1;32mLL           EE           VV     VV   EE          LL           \033[0m \n");
        printf("\033[1;32mLL           EEEEEEEEEE    VV   VV    EEEEEEEEEE  LL           \033[0m \n");
        printf("\033[1;32mLL           EE             VV VV     EE          LL           \033[0m \n");
        printf("\033[1;32mLLLLLLLLLLLL EEEEEEEEEE       V       EEEEEEEEEE  LLLLLLLLLLLL \033[0m \n");

        printf("\033[1;32mPPPPPPPP       AA         SSSSSSSSS     SSSSSSSSS    EEEEEEEEEE  DDDDDDDDDD \033[0m\n");
        printf("\033[1;32mPP    PP     AA  AA     SS            SS             EE          DD       D \033[0m\n");
        printf("\033[1;32mPPPPPPPP    AAAAAAAA      SSSSSSSSS     SSSSSSSSS    EEEEEEEEEE  DD       D \033[0m\n");
        printf("\033[1;32mPP         AA      AA              SS            SS  EE          DD       D \033[0m\n");
        printf("\033[1;32mPP        AA        AA    SSSSSSSSS     SSSSSSSSS    EEEEEEEEEE  DDDDDDDDDD \033[0m\n\n");
        printf("---------------------------------------------------------------------------\n");
        printf("\n\n\n");
        printf("\t\t\t\t\033[1;32mYY     YY   OOOOO   UU     UU\033[0m\n");
        printf("\t\t\t\t\033[1;32m  YY  YY  OO    OO  UU     UU\033[0m\n");
        printf("\t\t\t\t\033[1;32m    YY    OO    OO  UU     UU\033[0m\n");
        printf("\t\t\t\t\033[1;32m    YY    OO    OO  UU     UU\033[0m\n");
        printf("\t\t\t\t\033[1;32m    YY      OOOOO   UUUUUUUUU\033[0m\n");

        printf("\t\033[1;32mEEEEEEEEEEEE    SSSSSSSSS      CCCCCCCCCC       AA       PPPPPPPPPP  EEEEEEEEEEEE  DDDDDDDDDD\033[0m\n");
        printf("\t\033[1;32mEE            SS             CC               AA  AA     PP      PP  EE            DD       D\033[0m\n");
        printf("\t\033[1;32mEEEEEEEEEEEE    SSSSSSSSS    CC              AAAAAAAA    PPPPPPPPPP  EEEEEEEEEEEE  DD       D\033[0m\n");
        printf("\t\033[1;32mEE                       SS  CC             AA      AA   PP          EE            DD       D\033[0m\n");
        printf("\t\033[1;32mEEEEEEEEEEEE    SSSSSSSSS      CCCCCCCCCC  AA        AA  PP          EEEEEEEEEEEE  DDDDDDDDDD\033[0m\n");
        printf("-----------------------------------------------------------------------------------------------\n");
        printf("\n");
    }
    else
    {
        printf("Failed\n");
        printf("\033[1;31mLL           EEEEEEEEEE  VV       VV  EEEEEEEEEE  LL           \033[0m \n");
        printf("\033[1;31mLL           EE           VV     VV   EE          LL           \033[0m \n");
        printf("\033[1;31mLL           EEEEEEEEEE    VV   VV    EEEEEEEEEE  LL           \033[0m \n");
        printf("\033[1;31mLL           EE             VV VV     EE          LL           \033[0m \n");
        printf("\033[1;31mLLLLLLLLLLLL EEEEEEEEEE       V       EEEEEEEEEE  LLLLLLLLLLLL \033[0m \n");

        printf("\033[1;31mFFFFFFFFFFFF       AA       IIIIIIIIII  LL           EEEEEEEEEE  DDDDDDDDDD\033[0m\n");
        printf("\033[1;31mFF               AA  AA          I      LL           EE          DD       D\033[0m\n");
        printf("\033[1;31mFFFFFFFFFFFF    AAAAAAAA         I      LL           EEEEEEEEEE  DD       D\033[0m\n");
        printf("\033[1;31mFF             AA      AA        I      LL           EE          DD       D\033[0m\n");
        printf("\033[1;31mFF            AA        AA  IIIIIIIIII  LLLLLLLLLLL  EEEEEEEEEE  DDDDDDDDDD\033[0m\n\n");
        printf("---------------------------------------------------------------------------\n");
        sudokuSolver();
    }
}
void sudokuSolver()
{

    printf("|-----------------------------------------------------|\n|\tWelcome to the Sudoku Solver Game!            |\n");
    printf("|-----------------------------------------------------|\n\n\n");
    int arr[6][6] = {
        {0, 2, 4, 6, 0, 3},
        {1, 0, 6, 0, 5, 2},
        {2, 6, 0, 5, 3, 4},
        {3, 4, 5, 0, 6, 1},
        {6, 1, 2, 3, 0, 5},
        {4, 0, 3, 1, 2, 0},
    };

    printf(">Solve the sudoku by replacing 0 with a number between 1 to 6:\n");
    display(arr);

    int num, i = 0, j = 0, r, c;

    while (1)
    {
        printf(">Enter the row and column where you would like to change : ");
        scanf("%d%d", &r, &c);
        printf(">Enter the number");
        scanf("%d", &num);
        arr[r - 1][c - 1] = num;
        display(arr);
        int count = 0;
        for (int *ptr = &arr[0][0]; ptr <= &arr[5][5]; ptr++)
        {

            if (*ptr > 0)
            {
                count++;
            }
        }
        if (count == 36)
        {
            break;
        }
    }

    isCorrect(arr);
}
int generateRandomNumber(int min, int max)
{
    return min + rand() % (max - min + 1);
}
// Function to play the sequence game
void playSequenceGame()
{
    // Define the questions and their corresponding answers
    int questions[15][5] = {
        {2, 5, 10, 17, 26},
        {1, 4, 9, 16, 25},
        {3, 9, 27, 81, 243},
        {10, 20, 40, 80, 160},
        {2, 7, 14, 23, 34},
        {1, 3, 6, 10, 15},
        {0, 2, 5, 9, 14},
        {4, 8, 16, 32, 64},
        {15, 26, 37, 48, 59},
        {7, 14, 21, 28, 35},
        {6, 11, 16, 21, 26},
        {9, 16, 25, 36, 49},
        {97, 84, 71, 58, 45},
        {1, 1, 2, 3, 5},
        {0, 1, 3, 6, 10}};

    int chosenQuestions[3]; // Array to store the indices of randomly chosen questions

    srand(time(NULL)); // Initialize the random number generator with the current time

    // Randomly select 3 questions
    for (int i = 0; i < 3; i++)
    {
        int index = generateRandomNumber(0, 14);
        chosenQuestions[i] = index;
    }

    printf("|-----------------------------------------------------|\n|\tWelcome to the Sequence Game!                 |\n");
    printf("|-----------------------------------------------------|\n\n\n");
    printf(">You will be given a sequence of numbers, and you need to input the next number.\n");
    printf(">Enter -1 at any time to quit the game.\n\n");

    int score = 0; // Initialize the score to 0

    // Loop through the randomly chosen questions
    for (int i = 0; i < 3; i++)
    {
        int *question = questions[chosenQuestions[i]];
        printf(">Question %d:\n", i + 1);

        // Print the sequence
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", question[j]);
        }

        // Get the user's answer
        int answer;
        scanf("%d", &answer);

        // Check if the user wants to quit
        if (answer == -1)
        {
            printf(">You chose to quit the game.\n");
            break;
        }

        // Check if the answer is correct
        if (answer == question[4])
        {
            printf(">Correct!\n");
            score++;
        }
        else
        {
            printf(">Incorrect. The correct answer is %d.\n", question[4]);
        }

        printf("\n");
    }

    printf("Game Over!\n");
    printf("Your score: %d\n", score);
    if (score != 3)
    {   printf("\033[1;31mLL           EEEEEEEEEE  VV       VV  EEEEEEEEEE  LL           \033[0m \n");
        printf("\033[1;31mLL           EE           VV     VV   EE          LL           \033[0m \n");
        printf("\033[1;31mLL           EEEEEEEEEE    VV   VV    EEEEEEEEEE  LL           \033[0m \n");
        printf("\033[1;31mLL           EE             VV VV     EE          LL           \033[0m \n");
        printf("\033[1;31mLLLLLLLLLLLL EEEEEEEEEE       V       EEEEEEEEEE  LLLLLLLLLLLL \033[0m \n");

        printf("\033[1;31mFFFFFFFFFFFF       AA       IIIIIIIIII  LL           EEEEEEEEEE  DDDDDDDDDD\033[0m\n");
        printf("\033[1;31mFF               AA  AA          I      LL           EE          DD       D\033[0m\n");
        printf("\033[1;31mFFFFFFFFFFFF    AAAAAAAA         I      LL           EEEEEEEEEE  DD       D\033[0m\n");
        printf("\033[1;31mFF             AA      AA        I      LL           EE          DD       D\033[0m\n");
        printf("\033[1;31mFF            AA        AA  IIIIIIIIII  LLLLLLLLLLL  EEEEEEEEEE  DDDDDDDDDD\033[0m\n\n");
        printf("---------------------------------------------------------------------------\n");
        
        puzzleGame();
    }
    else
    {
        printf("\n");
        printf("\033[1;32mLL           EEEEEEEEEE  VV       VV  EEEEEEEEEE  LL           \033[0m \n");
        printf("\033[1;32mLL           EE           VV     VV   EE          LL           \033[0m \n");
        printf("\033[1;32mLL           EEEEEEEEEE    VV   VV    EEEEEEEEEE  LL           \033[0m \n");
        printf("\033[1;32mLL           EE             VV VV     EE          LL           \033[0m \n");
        printf("\033[1;32mLLLLLLLLLLLL EEEEEEEEEE       V       EEEEEEEEEE  LLLLLLLLLLLL \033[0m \n");

        printf("\033[1;32mPPPPPPPP       AA         SSSSSSSSS     SSSSSSSSS    EEEEEEEEEE  DDDDDDDDDD \033[0m\n");
        printf("\033[1;32mPP    PP     AA  AA     SS            SS             EE          DD       D \033[0m\n");
        printf("\033[1;32mPPPPPPPP    AAAAAAAA      SSSSSSSSS     SSSSSSSSS    EEEEEEEEEE  DD       D \033[0m\n");
        printf("\033[1;32mPP         AA      AA              SS            SS  EE          DD       D \033[0m\n");
        printf("\033[1;32mPP        AA        AA    SSSSSSSSS     SSSSSSSSS    EEEEEEEEEE  DDDDDDDDDD \033[0m\n\n");
        printf("---------------------------------------------------------------------------\n");
    }
}
void sequenceGame()
{
    playSequenceGame();
}
int check_letter(char letter, char word[], char progress[])
{
    int found = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        if (letter == word[i])
        {
            found++;
            progress[i] = letter;
        }
    }
    return found;
}

int check_win(char word[], char progress[])
{
    return strcmp(word, progress) == 0;
}

char *pick_word()
{
    char *words[] = {"instagram", "facebook", "youtube", "playstore", "spotify", "snapchat", "telegram", "gmail", "flipkart", "amazon", "netflix"};
    int size = sizeof(words) / sizeof(words[0]);
    int index = rand() % size;
    return words[index];
}
void puzzleGame()
{
    srand(time(NULL));
    char *word = pick_word();
    int length = strlen(word);
    char progress[length + 1];
    for (int i = 0; i < length; i++)
    {
        progress[i] = '_';
    }
    progress[length] = '\0';
    int chances = 10;
    char letter;
    printf("|-----------------------------------------------------|\n|\t\tWelcome to the Puzzle Game!           |\n");
    printf("|-----------------------------------------------------|\n>I have a word in mind. Can you guess it?\n\n\n");
    printf(">The word is an application available in mobile phones\n");
    do
    {
        printf(">The word has %d letters: %s\n", length, progress);
        printf(">You have %d chances left.\n", chances);
        printf(">Enter a letter:");
        scanf(" %c", &letter);
        printf("|-----------------------------------------------------|\n\n");
        int found = check_letter(letter, word, progress);
        if (found > 0)
        {
            printf(">You found %d %c(s)!<\n", found, letter);
            if (check_win(word, progress))
            {
                printf(">You got it! The word is %s.\n", word);
                printf(">Congratulation you have won this game\nProceed to the next level");

                printf("\n");
                 printf("\033[1;32mLL           EEEEEEEEEE  VV       VV  EEEEEEEEEE  LL           \033[0m \n");
                 printf("\033[1;32mLL           EE           VV     VV   EE          LL           \033[0m \n");
                 printf("\033[1;32mLL           EEEEEEEEEE    VV   VV    EEEEEEEEEE  LL           \033[0m \n");
                 printf("\033[1;32mLL           EE             VV VV     EE          LL           \033[0m \n");
                 printf("\033[1;32mLLLLLLLLLLLL EEEEEEEEEE       V       EEEEEEEEEE  LLLLLLLLLLLL \033[0m \n");
         
                 printf("\033[1;32mPPPPPPPP       AA         SSSSSSSSS     SSSSSSSSS    EEEEEEEEEE  DDDDDDDDDD \033[0m\n");
                 printf("\033[1;32mPP    PP     AA  AA     SS            SS             EE          DD       D \033[0m\n");
                 printf("\033[1;32mPPPPPPPP    AAAAAAAA      SSSSSSSSS     SSSSSSSSS    EEEEEEEEEE  DD       D \033[0m\n");
                 printf("\033[1;32mPP         AA      AA              SS            SS  EE          DD       D \033[0m\n");
                 printf("\033[1;32mPP        AA        AA    SSSSSSSSS     SSSSSSSSS    EEEEEEEEEE  DDDDDDDDDD \033[0m\n\n");
                printf("---------------------------------------------------------------------------\n\n\n");

                break;
            }
        }

            else
            {
                printf(">Sorry, there is no letter %c present in this word.<\n", letter);
                chances--;
                if (chances == 0)
                {
                    printf("You ran out of chances. The word was %s.\n", word);
                    printf(">Sorry, there is no letter %c present in this word.<\n", letter);
                    

                    printf("You ran out of chances. The word was %s.\n", word);
                    printf("\033[1;31mLL           EEEEEEEEEE  VV       VV  EEEEEEEEEE  LL           \033[0m \n");
                    printf("\033[1;31mLL           EE           VV     VV   EE          LL           \033[0m \n");
                    printf("\033[1;31mLL           EEEEEEEEEE    VV   VV    EEEEEEEEEE  LL           \033[0m \n");
                    printf("\033[1;31mLL           EE             VV VV     EE          LL           \033[0m \n");
                    printf("\033[1;31mLLLLLLLLLLLL EEEEEEEEEE       V       EEEEEEEEEE  LLLLLLLLLLLL \033[0m \n");
            
                    printf("\033[1;31mFFFFFFFFFFFF       AA       IIIIIIIIII  LL           EEEEEEEEEE  DDDDDDDDDD\033[0m\n");
                    printf("\033[1;31mFF               AA  AA          I      LL           EE          DD       D\033[0m\n");
                    printf("\033[1;31mFFFFFFFFFFFF    AAAAAAAA         I      LL           EEEEEEEEEE  DD       D\033[0m\n");
                    printf("\033[1;31mFF             AA      AA        I      LL           EE          DD       D\033[0m\n");
                    printf("\033[1;31mFF            AA        AA  IIIIIIIIII  LLLLLLLLLLL  EEEEEEEEEE  DDDDDDDDDD\033[0m\n\n");
                    printf("---------------------------------------------------------------------------\n");
                    printf("---------------------------------------------------------------------------\n\n\n");

                    puzzleGame();
                    break;
                }
            }
        
    } while (1);
}

void MatrixMatch()
{
    int matrix[5][5];
    int i, j;

    // random number generation
    srand(time(NULL));

    // Generate random numbers and fill the matrix
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            matrix[i][j] = rand() % 10; // Generate random number between 0 and 9
        }
    }

    printf("|-----------------------------------------------------|\n|\tWelcome to the Matrix Match Game!             |\n");
    printf("|-----------------------------------------------------|\n\n\n");
    printf(">Instructions: You have 3 rounds to guess the positions of matching elements.\n");
    printf(">You must guess correctly in all 3 chances to win the game.\n\n");
    // Print the matrix
    printf("Randomly generated matrix:\n");
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int win = 0;
    int x;
    printf("Press any number key to play :");
    scanf("%d", &x);

    for (int i = 1; i <= 3; i++)
    {
        int row1, col1, row2, col2;

        // Prompt the user to input row and column positions
        printf(">Enter the Postion of ELement in row column (1-4): ");
        scanf("%d %d", &row1, &col1);

        // Check if the entered positions are within the matrix range
        if (row1 < 1 || row1 > 4 || col1 < 1 || col1 > 4)
        {
            printf("Invalid position. Try again.\n");
            continue;
        }

        // Prompt the user to input row and column positions
        printf(">Enter the Postion of Same ELement in Different row column (1-4): ");
        scanf("%d %d", &row2, &col2);

        // Check if the entered positions are within the matrix range
        if (row2 < 1 || row2 > 4 || col2 < 1 || col2 > 4)
        {
            printf("Invalid position. Try again.\n");
            continue;
        }

        // Check if the entered positions have equal elements
        if (row1 == row2 && col1 == col2)
        {
            printf("Same position entered twice. Try again.\n");
            continue;
        }

        // Check if the entered positions have already been matched
        if (matrix[row1][col1] == 11 || matrix[row2][col2] == 11)
        {
            printf("One or both elements have already been matched. Try again.\n");
            continue;
        }

        if (matrix[row1][col1] == matrix[row2][col2])
        {
            printf("Matched...!\n");
            win++;
            // Mark the matched elements as 0 to indicate they have been matched
            matrix[row1][col1] = 11;
            matrix[row2][col2] = 11;
        }
        else
        {
            printf("Not Matched...!\n");
        }
    }
    if (win == 3)
    {
        printf("You Successfully WON this level\n\n");
        printf("\033[1;32mLL           EEEEEEEEEE  VV       VV  EEEEEEEEEE  LL           \033[0m \n");
        printf("\033[1;32mLL           EE           VV     VV   EE          LL           \033[0m \n");
        printf("\033[1;32mLL           EEEEEEEEEE    VV   VV    EEEEEEEEEE  LL           \033[0m \n");
        printf("\033[1;32mLL           EE             VV VV     EE          LL           \033[0m \n");
        printf("\033[1;32mLLLLLLLLLLLL EEEEEEEEEE       V       EEEEEEEEEE  LLLLLLLLLLLL \033[0m \n");

        printf("\033[1;32mPPPPPPPP       AA         SSSSSSSSS     SSSSSSSSS    EEEEEEEEEE  DDDDDDDDDD \033[0m\n");
        printf("\033[1;32mPP    PP     AA  AA     SS            SS             EE          DD       D \033[0m\n");
        printf("\033[1;32mPPPPPPPP    AAAAAAAA      SSSSSSSSS     SSSSSSSSS    EEEEEEEEEE  DD       D \033[0m\n");
        printf("\033[1;32mPP         AA      AA              SS            SS  EE          DD       D \033[0m\n");
        printf("\033[1;32mPP        AA        AA    SSSSSSSSS     SSSSSSSSS    EEEEEEEEEE  DDDDDDDDDD \033[0m\n\n");
        printf("---------------------------------------------------------------------------\n\n");
        
    }
    else
    {
        printf("You LOST this level\n");
        printf("\033[1;31mLL           EEEEEEEEEE  VV       VV  EEEEEEEEEE  LL           \033[0m \n");
        printf("\033[1;31mLL           EE           VV     VV   EE          LL           \033[0m \n");
        printf("\033[1;31mLL           EEEEEEEEEE    VV   VV    EEEEEEEEEE  LL           \033[0m \n");
        printf("\033[1;31mLL           EE             VV VV     EE          LL           \033[0m \n");
        printf("\033[1;31mLLLLLLLLLLLL EEEEEEEEEE       V       EEEEEEEEEE  LLLLLLLLLLLL \033[0m \n");

        printf("\033[1;31mFFFFFFFFFFFF       AA       IIIIIIIIII  LL           EEEEEEEEEE  DDDDDDDDDD\033[0m\n");
        printf("\033[1;31mFF               AA  AA          I      LL           EE          DD       D\033[0m\n");
        printf("\033[1;31mFFFFFFFFFFFF    AAAAAAAA         I      LL           EEEEEEEEEE  DD       D\033[0m\n");
        printf("\033[1;31mFF             AA      AA        I      LL           EE          DD       D\033[0m\n");
        printf("\033[1;31mFF            AA        AA  IIIIIIIIII  LLLLLLLLLLL  EEEEEEEEEE  DDDDDDDDDD\033[0m\n\n");
        printf("---------------------------------------------------------------------------\n");
        printf("---------------------------------------------------------------------------\n\n\n");
        MatrixMatch();
    }
}

void decryptMessage(char *message, int shift)
{
    int i = 0;
    char decrypted[100];

    while (message[i])
    {
        char ch = message[i];

        // Decrypt uppercase letters
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = 'A' + (ch - 'A' - shift + 26) % 26;
        }
        // Decrypt lowercase letters
        else if (ch >= 'a' && ch <= 'z')
        {
            ch = 'a' + (ch - 'a' - shift + 26) % 26;
        }

        decrypted[i] = ch;
        i++;
    }

    decrypted[i] = '\0';
    strcpy(message, decrypted);
}
void messageEncryption()
{      printf("|-----------------------------------------------------|\n|\t\tWelcome to Decryption Game!             |\n");
    printf("|-----------------------------------------------------|\n\n\n");

    char message[100], que[] = "Ocdn dn Yzxmtkodji Bvhz";
    int shift, n;
    shift = 5;
    n = strlen(message);
    printf("The decrypt message for \n 'Bjqhtrj yt Jxhfuj Wttr'is \n 'Welcome to Escape Room' ");
    printf("\nThen the decrypt message for the sentence \n Ocdn dn Yzxmtkodji Bvhz is\n: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0';
    // Answer
    // This is Decryption Game
    decryptMessage(message, shift);

    int j=0;
    j= strcmp(que, message);
    if (j == 0)
    {
        printf("You have passed this level\n");
        printf("\033[1;32mLL           EEEEEEEEEE  VV       VV  EEEEEEEEEE  LL           \033[0m \n");
        printf("\033[1;32mLL           EE           VV     VV   EE          LL           \033[0m \n");
        printf("\033[1;32mLL           EEEEEEEEEE    VV   VV    EEEEEEEEEE  LL           \033[0m \n");
        printf("\033[1;32mLL           EE             VV VV     EE          LL           \033[0m \n");
        printf("\033[1;32mLLLLLLLLLLLL EEEEEEEEEE       V       EEEEEEEEEE  LLLLLLLLLLLL \033[0m \n");

        printf("\033[1;32mPPPPPPPP       AA         SSSSSSSSS     SSSSSSSSS    EEEEEEEEEE  DDDDDDDDDD \033[0m\n");
        printf("\033[1;32mPP    PP     AA  AA     SS            SS             EE          DD       D \033[0m\n");
        printf("\033[1;32mPPPPPPPP    AAAAAAAA      SSSSSSSSS     SSSSSSSSS    EEEEEEEEEE  DD       D \033[0m\n");
        printf("\033[1;32mPP         AA      AA              SS            SS  EE          DD       D \033[0m\n");
        printf("\033[1;32mPP        AA        AA    SSSSSSSSS     SSSSSSSSS    EEEEEEEEEE  DDDDDDDDDD \033[0m\n\n");
        printf("---------------------------------------------------------------------------\n\n\n");
    }

    else
    {
        printf("FAILED\n");
        printf("\033[1;31mLL           EEEEEEEEEE  VV       VV  EEEEEEEEEE  LL           \033[0m \n");
        printf("\033[1;31mLL           EE           VV     VV   EE          LL           \033[0m \n");
        printf("\033[1;31mLL           EEEEEEEEEE    VV   VV    EEEEEEEEEE  LL           \033[0m \n");
        printf("\033[1;31mLL           EE             VV VV     EE          LL           \033[0m \n");
        printf("\033[1;31mLLLLLLLLLLLL EEEEEEEEEE       V       EEEEEEEEEE  LLLLLLLLLLLL \033[0m \n");

        printf("\033[1;31mFFFFFFFFFFFF       AA       IIIIIIIIII  LL           EEEEEEEEEE  DDDDDDDDDD\033[0m\n");
        printf("\033[1;31mFF               AA  AA          I      LL           EE          DD       D\033[0m\n");
        printf("\033[1;31mFFFFFFFFFFFF    AAAAAAAA         I      LL           EEEEEEEEEE  DD       D\033[0m\n");
        printf("\033[1;31mFF             AA      AA        I      LL           EE          DD       D\033[0m\n");
        printf("\033[1;31mFF            AA        AA  IIIIIIIIII  LLLLLLLLLLL  EEEEEEEEEE  DDDDDDDDDD\033[0m\n\n");
        printf("---------------------------------------------------------------------------\n");
        printf("---------------------------------------------------------------------------\n");
        messageEncryption();
    }
}