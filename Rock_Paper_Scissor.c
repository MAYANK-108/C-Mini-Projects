// Rock Paper Scissors Game
// Language: C
// Author: Mayank
// Description: Console-based game using random numbers


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    printf("0--> Rock   1--> Paper   2--> Scissor  -1-->Exit\n");
    srand(time(0));
    int player,computer;
    int score = 0;
    while(1){
        computer = rand()%3;
        printf("Enter your Choice: ");
        scanf("%d",&player);

        if((computer == 0 && player == 0) || (computer == 1 && player == 1) || (computer == 2 && player == 2)){
            printf("Draw\n");
        }
        else if((computer == 0 && player == 2) || (computer == 1 && player == 0) || (computer == 2 && player == 1)){
            printf("You Lose\n");
            score--;
        }
        else if((computer == 0 && player == 1) || (computer == 1 && player == 2) || (computer == 2 && player == 0)){
            printf("You Win\n");
            score++;
        }
        else if(player == -1){
            printf("Final score: %d\n",score);
            printf("Game Closed Successfully\n");
            return 0;
        }
        else{
            printf("Invalid Choice Try again...\n");
            continue;
        }
        
        if(computer == 0){
            printf("Computer chose Rock\n");
        }
        else if(computer == 1){
            printf("Computer chose Paper\n");
        }
        else if(computer == 2){
            printf("Computer chose Scissors\n");
        }
        printf("your score = %d\n\n",score);
    }


    return 0 ;
}