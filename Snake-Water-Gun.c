#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char you, char comp)
{
    if (you == comp)
    {
        return 0;
    }
    else if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
    else if (you == 's' && comp == 'g')
    {
        return -1;
    }
}

int main()
{
    char you, comp;

    srand(time(0));
    int num = rand() % 100 + 1;
    if (num < 33)
    {
        comp = 'w';
    }
    else if (num > 33 && num < 66)
    {
        comp = 's';
    }
    else
    {
        comp = 'g';
    }
    printf("Enter 's' for snake, 'w' for water and 'g' for gun\n");
    scanf("%c", &you);
    int result = game(you, comp);
    if (result == 0)
    {
        printf("The Match Is A DRAW As You Choosed %c And Computer Choosed %c", you, comp);
    }
    else if (result == 1)
    {
        printf("You WON! As You Choosed %c And Computer Choosed %c", you, comp);
    }
    else
    {
        printf("You LOST! As You Choosed %c And Computer Choosed %c", you, comp);
    }

    return 0;
}
