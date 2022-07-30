#include "deal.h"
#include <stdio.h>

void Deal::deal(const int wDeck[][13], const char* wFace[],
    const char* wSuit[])
{
    int card{};
    int row{};
    int column{};

    for (card = 1; card <= 52; card++)
    {
        for (row = 0; row <= 3; row++)
        {
            for (column = 0; column <= 12; column++)
            {
                if (wDeck[row][column] == card)
                {
                    printf("%5s of %-8s%c", wFace[column], wSuit[row],
                        card % 2 == 0 ? '\n' : '\t');
                }
            }
        }
    }
}
