#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

void ResetGame();
void DrawBoard();
int CheckFreeSpaces();
void PlayerTurn();
void EnemyTurn();
char CheckWinner();
void PrintWinner(char winner);



int main(){

    char winner = ' ';

    ResetGame();
    
    while(winner == ' ' && CheckFreeSpaces() != 0){
        DrawBoard();
        PlayerTurn();
        winner = CheckWinner();
        if(winner != ' ' && CheckFreeSpaces() == 0)
        {
            break;
        }
        EnemyTurn();
        if(winner != ' ' && CheckFreeSpaces() == 0)
        {
            break;
        }
        CheckWinner();
    }
    DrawBoard();
    PrintWinner(winner);
    return 0;
}
void ResetGame(){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            board[i][j] = ' ';
        }
    }
}
void DrawBoard(){
    printf(" %c | %c | %c", board[0][0], board[0][1], board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c", board[1][0], board[1][1], board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}
int CheckFreeSpaces(){
    int freeSpaces = 9;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if(board[i][j] != ' '){
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
}
void PlayerTurn(){
    int x;
    int y;

    do
    {
        printf("Enter row number (1,2,3)\n");
        scanf("%d", &x);
        x--;
        printf("Enter column number (1,2,3)\n");
        scanf("%d", &y);
        y--;
        if (board[x][y] != ' ')
        {
            printf("Invalid move");
        }
        else
        {   
            board[x][y] = PLAYER;
            break;
        }
    } while (board[x][y] != ' ');
    
}
void EnemyTurn(){

    srand(time(0));
    int x;
    int y;

    if(CheckFreeSpaces() > 0)
    {
        do
        {
            x = rand() % 3;
            y = rand() % 3;

        } while (board[x][y] != ' ');
        board[x][y] = COMPUTER;
    }
    else{
        PrintWinner(' ');
    }
}
char CheckWinner(){
    for(int i = 0; i < 3; i++)
    {
        if(board[i][0] == board[i][1] && board[i][0] == board[i][2]){
            return board[i][0];
        }
    }
    for(int j = 0; j < 3; j++)
    {
        if(board[0][j] == board[1][j] && board[0][j] == board[2][j]){
            return board[0][j];
        }
    }
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2]){
        return board[0][0];
    }
    else if(board[0][2] == board[1][1] && board[0][2] == board[2][0]){
        return board[0][2];
    }
    return ' ';
}
void PrintWinner(char winner){
    if (winner == PLAYER){
        printf("Player won!");
        
    }
    else if (winner == COMPUTER){
        printf("Computer won!");
    }
    else{
        printf("Its a draw!");
    }
}