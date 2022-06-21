#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int forLose = 2;
// initialize the game program
char initGame(char gameStart[50]);
void playGame();
void screenClear();

int main(){ 

    screenClear();
    initGame(" \n");
    playGame();

    if(forLose <= 2){
        playGame();
    }

    return 0;
}

// user defined functions start here
char initGame(char gameStart[50]){
    printf("****************************************** W E L C O M E   T O    G U E S S T ******************************************\n");
    return *gameStart;
}

void playGame(){

    srand(time(NULL));
    int num = rand() % 10;
    int guessedNum;
    printf("Guess the correct number(0-9): ");\
    
    scanf("%d", &guessedNum);
    screenClear();

    if(guessedNum == num){
        printf("The correct number was %d\nCONGRATULATIONS!\nCONGRATULATIONS!\nCONGRATULATIONS!\nCONGRATULATIONS!\nCONGRATULATIONS!\n", num);
        forLose++;
    }else{
        printf("The correct number was %d\n", num);
        forLose--;
        printf("You have %d lives left\n", forLose);
    }
    
}

void screenClear(){
    system("clear || cls");
    return;
}