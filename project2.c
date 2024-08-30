#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int player, computer = rand() % 3;
    printf("Choose 0 for Snake, 1 for water and 2 for Gun \n");
    scanf("%d", &player);
    printf("Computer chose %d\n", computer);
switch(player){
    case 0: // Player chose Snake
        switch (computer) {
        case 0: printf("It's a Draw!\n");
                    break;
        case 1: printf("You Win!\n");
                    break;
        case 2: printf("You Lose!\n");
                    break;} break;
        case 1: // Player chose Water
        switch (computer) {
        case 0: printf("You Lose!\n");
                    break;
        case 1: printf("It's a Draw!\n");
                    break;
        case 2: printf("You Win!\n");
                    break;}  break;
        case 2: // Player chose Gun
        switch (computer) {
        case 0: printf("You Win!\n");
                    break;
        case 1: printf("You Lose!\n");
                    break;
        case 2: printf("It's a Draw!\n");
                    break;} break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
