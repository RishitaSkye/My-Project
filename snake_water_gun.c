/*
Snake, water, gun or Rock, paper, scissors is a game most of us have played during school time.
write a c program capable of playing this game with u.
*/

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0)); // to generate random number
    int player, computer = (rand() % 3);
    // 0---->snake
    // 1---->water
    // 2---->gun
    printf("Choose 0 for Rock, 1 for Paper, 2 for Scissor \n");
    scanf("%d", &player);
    printf("Computer choose %d\n", computer);

    if (player == 0 && computer == 0){
        printf("Match Draw \n");
    }
    
    else if(player == 0 && computer == 1){
        printf("You Win \n");
    }
    else if(player == 0 && computer == 2){
        printf("You Lose \n");
    }
    else if(player == 1 && computer == 0){
        printf("You Lose \n");
    }
    else if(player == 1 && computer == 1){
        printf("Match Draw \n");
    }
    else if(player == 1 && computer == 2){
        printf("You Win \n");
    }
    else if(player == 2 && computer == 0){
        printf("You Win \n");
    }
    else if(player == 2 && computer == 1){
        printf("You Lose \n");
    }
    else if(player == 2 && computer == 2){
        printf("Match Draw \n");
    }
    else{
        printf("Something went wrong! \n");
    }
    


    return 0;
}