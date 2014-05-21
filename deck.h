#ifndef DECK_H
#define DECK_H
#include "card.h"
#include <vector>
class Deck
{
public:
    Deck();
    Card deal();
    void shuffle();
    int testSize();
    Card testCard(int n);

private:
    vector<Card> stack;
    int _nextCardIndex;
};

#endif // DECK_H
