#include <iostream>
#include <time.h>
#include "shuffle.h"
#include "deal.h"

int main()
{
    const char* suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };//suit = naipe

    const char* face[13] = { "Ace","Deuce","Three", "Four",
    "Five", "Six", "Seven", "Eight", "Nine", "Ten",
    "Jack", "Queen", "king" };

    int deck[4][13] = { 0 };

    srand(time(0));

    Shuffle::shuffle(deck);
    Deal::deal(deck, face, suit);
    
    return 0;

}
