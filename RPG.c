#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int intelligence, stamina, charisma;
    int class_type;
    srand((unsigned int)time(NULL));
    
    intelligence = rand() % 21;
    stamina = rand() % (21 - intelligence);
    charisma = 20 - intelligence - stamina;
    
    if (intelligence >= stamina && intelligence >= charisma)
     { class_type = 0;}
    else if (stamina >= intelligence && stamina >= charisma)
     { class_type = 1;}
    else { class_type = 2;}
    
    printf("Intelligence: %d\n", intelligence);
    printf("Stamina     : %d\n", stamina);
    printf("Charisma    : %d\n", charisma);
    
    printf("Class       : ");
    if (class_type == 0) {
        printf("Mage\n");
    } else if (class_type == 1) {
        printf("Knight\n");
    } else {
        printf("Thief\n");
    }

    return 0;
}