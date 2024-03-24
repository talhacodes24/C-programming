#include <stdio.h>
#include <stdlib.h>
int main(){

const int number =17;
int maxguesses =5;
int userguesses;
while (userguesses != number && maxguesses >0){
    printf("guess the number (%d chances left):",maxguesses);
    scanf("%d",&userguesses);
    maxguesses--;
}
if (userguesses !=number){
    printf("you lost!");

}

else{
    printf("i win the game");
}

    return 0;
}
