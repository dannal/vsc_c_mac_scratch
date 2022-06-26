// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// int main()
// {
//     vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

//     for (const string& word : msg)
//     {
//         cout << word << " ";
//     }
//     cout << endl;
// }












#include <stdio.h>
#include <stdlib.h>

// #define's

#define PLAYER 0
#define AI 1
#define DRAW 2
#define INPROGRESS 3

#define NROWS 6
#define NCOLS 7


// Typedefs
typedef int board[NCOLS][NROWS];

// Function Prototypes


int gameLoop();
int checkState(board *);
void printBoard(board *);
void initialiseBoard(board *);



int main()
{
    int outcome = gameLoop();
    return 0;
}



int gameLoop()
{
    int status = INPROGRESS;
    board b;
    printf("Start\n");
    initialiseBoard(&b);
    printBoard(&b);
    // while (status == INPROGRESS)
    // {
    //     // Get player turn

    //     // Player move

    //     // Validate Player move

    //     // Score board

    //     // AI turn

    //     //Score board


    // }

    printf("End\n");

    return status;
}

int checkState(board *b)
{
    int state = 0;

    return state;
}

void printBoard(board *b)
{
    for (int i = 0; i < NROWS; i++)
    {
        for (int j = 0; j < NCOLS; j++)
        {
            printf("%d ", (*b)[j][i]);
        }
        printf("\r\n");
    }
}

void initialiseBoard(board *b)
{
    for (int i = 0; i < NROWS; i++)
    {
        for (int j = 0; j < NCOLS; j++)
        {
            
            // printf("%d\n", (*b)[j][i]);
            // printf("hello");
            (*b)[j][i] = 0;
            

        }
    }
}