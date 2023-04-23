#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num,a=1;
    int guess, nog=0;
    srand(time(0));
    num = rand() % 100 + 1; // This Generates Random Num. b/w 1 & 100
    // printf("The Number Is %d\n", num);
    do
    {
        printf("Guess The Number (Between 1 to 100)\n");
        scanf("%d", &guess);
        if(guess>num){
            printf("Lower Number Please!\n");
            nog++;
        }
        else if (guess<num){
            printf("Higher Number Please!\n");
            nog++;
        }
        else{
            a=0;
        }        
    } while (a);
    printf("YOU GUESSED IT IN %d GUESSES!!!", nog);  
    return 0;
}
