#include <stdio.h>

   typedef struct pokemon
    {
        int hp;
        int speed;
    }pokemon;

void abhi(pokemon p)
{
    printf("%d\n" , p.hp);
    printf("%d\n" , p.speed);
}
int main()
{
 

    pokemon charizard; 
    charizard.hp = 500;
    charizard.speed = 80;

    abhi(charizard);

    return 0;
}