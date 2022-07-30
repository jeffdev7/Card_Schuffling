#include "shuffle.h"
#include <stdlib.h>

void Shuffle::shuffle(int wDeck[][13])
{
    int row{};
    int column{};
    int card{};

    for (card = 1; card <= 52; card++)
    {
        do {
            row = rand() % 4;
            column = rand() % 13;
        } while (wDeck[row][column] != 0);

        wDeck[row][column] = card;
    }
}
