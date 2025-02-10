#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    int num;
    int guesses = 0;
    int yourNum;
    int max;
    srand(time(0));

    printf("Mennyi legyen a maximum? ");
    scanf("%d", &max);
    num = rand() % max;
    printf("Gondoltam egy számra!\n");
    bool running = true;
    while(running){
        guesses++;
        printf("Tippelj egy számra! ");
        scanf("%d", &yourNum);
        if (yourNum == num){
            printf("Nyertel\n");
            break;
        }
        else if(yourNum > num){
            printf("A szamom kisebb mint a tied\n");
        }
        else if(yourNum < num){
            printf("A szamom nagyobb mint a tied\n");
        }

    }
}