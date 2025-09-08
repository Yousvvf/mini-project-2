#include <stdio.h>

int main() 
{
    char mot[] = "hola";
    char cache[] = {'_', '_', '_', '_'};
    char guess;
    int tentatives = 0;
    int max_tentatives = 6;
    int i, trouve;
    int letr_trv = 0;

    while (letr_trv < 4 && tentatives < max_tentatives) 
    {
        printf("mot : ");
        for (i = 0; i < 4; i++) 
        {
            printf("%c ", cache[i]);
        }

        printf("\ndevine une lettre : ");
        scanf(" %c", &guess);

        trouve = 0;
        for (i = 0; i < 4; i++) 
        {
            if (mot[i] == guess && cache[i] == '_') 
            {
                cache[i] = guess;
                trouve = 1;
                letr_trv++;
            }
        }

        if (!trouve) 
        {
            tentatives++;
            printf("mauvaise lettre. tentatives restantes : %d\n", max_tentatives - tentatives);
        }
    }

    if (letr_trv == 4) 
    {
        printf("victoire, le mot est: %s\n", mot);
    } 
    else 
    {
        printf("Game Over");
    }
    
    return 0;
}