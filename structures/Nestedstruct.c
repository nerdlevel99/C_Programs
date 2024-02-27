#include <stdio.h>
int main()
{
    
    struct  pokemon
    {
        char name[50];
        int hp; 
        int power;

    };

    struct specialPokemon
    {
        char specialattack[50];
        struct pokemon;
        
    };

    struct specialPokemon abhi;

    printf("Enter the name for Pokemon" );
    scanf("%[^\n]s" , abhi.name);

    printf("Lord %s I bow for your abilities " , abhi.name);

    
    
    return 0;
}