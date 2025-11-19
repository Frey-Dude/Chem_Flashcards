#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



char poly_molecule[20][6] = {
    {"C2H3O2"},
    {"NO3"},
    {"NH4+3"},
    {"NH4+4"},
    {"NH4+5"},
    {"NH4+6"},
    {"NH4+7"},
    {"NH4+8"},
    {"NH4+9"},
    {"NH4+10"},
    {"NH4+11"},
    {"NH4+12"},
    {"NH4+12"},
    {"NH4+13"},
    {"NH4+14"},
    {"NH4+15"},
    {"NH4+16"},
    {"NH4+17"},
    {"NH4+18"},
    {"NH4+19"}
};

char poly_name[20][2] = {
    {"01"},
    {"02"},
    {"03"},
    {"04"},
    {"05"},
    {"06"},
    {"07"},
    {"08"},
    {"09"},
    {"10"},
    {"11"},
    {"12"},
    {"13"},
    {"14"},
    {"15"},
    {"16"},
    {"17"},
    {"18"},
    {"19"},
    {"20"},
};

int list_length = sizeof(poly_molecule) / sizeof(poly_molecule[0]);

int random_int() {
    srand(time(NULL));
    int random = rand() % sizeof(poly_molecule) +1;
    printf("%d", random);
    return random;
}

int start() {
    for (int i = list_length; i > 0; i--) {

    }
    return 0;
}

int main(void) {
    int test=sizeof(poly_molecule);
    // printf("%d", list_length);
    start();
    return 0;
}