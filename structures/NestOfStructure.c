#include <stdio.h>
#include <string.h>


int main()
{
    typedef struct pokemon
    {
        int hp , attack , speed;
        char name[50];

    }pokemon;

    typedef struct legendary
    {
        char ability[200];
        pokemon normal;
    }legendary;


    typedef struct god
    {
        legendary legend;
        int specialattack;
    }god;


god abhi;

strcpy( abhi.legend.normal.name ,  "Abhi Sharma"   );
abhi.specialattack = 500;
abhi.legend.normal.attack = 500;
abhi.legend.normal.speed = 600;
// abhi.legend.ab;



legendary mewto;


    printf("%s" , abhi.legend.normal.name );

    return 0;
}