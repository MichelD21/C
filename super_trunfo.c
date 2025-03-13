#include <stdio.h>

// format and print card data
void print_card(int card, char state, char id[], char city[], int pop, float area, float gdp, int tour){
    printf("\nCard %d:\n",                  card    );
    printf("State: %c\n",                   state   );
    printf("ID: %s\n",                      id      );
    printf("City: %s\n",                    city    );
    printf("Population: %d\n",              pop     );
    printf("Area: %.2f km²\n",              area    );
    printf("GDP: R$ %.2f\n",                gdp     );
    printf("Tourism Attractions: %d\n",   tour    );
}

// get card info from user
void get_card(char *state, char *id, char *city, int *pop, float *area, float *gdp, int *tour){
    printf("Enter card info: ");
    scanf(" %c %s %s %d %f %f %d", state, id, city, pop, area, gdp, tour);
}

int main(){
    
    // variables (2 for 2 inputs)
    char    state[2];
    char    id[2][4];       // size 3 + end of
    char    city[2][20];    // size 19 + end of
    int     pop[2];
    float   area[2];
    float   gdp[2];
    int     tour[2];

    // main routine
    get_card(&state[0], id[0], city[0], &pop[0], &area[0], &gdp[0], &tour[0]);
    get_card(&state[1], id[1], city[1], &pop[1], &area[1], &gdp[1], &tour[1]);
    print_card(1, state[0], id[0], city[0], pop[0], area[0], gdp[0], tour[0]);
    print_card(2, state[1], id[1], city[1], pop[1], area[1], gdp[1], tour[1]);

    return 0;
}
