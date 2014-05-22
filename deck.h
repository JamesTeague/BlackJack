
#ifndef DECK_H
#define DECK_H
#include "card.h"
#include <vector>
class Deck
{
public:
    Deck();
    string deal();
    void shuffle();
    int cardsRemaining() const;
    void showDeck() const;

private:
    vector<Card> stack;
    int _cardsLeft;

};

#endif // DECK_H
