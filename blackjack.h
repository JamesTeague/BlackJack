#ifndef BLACKJACK_H
#define BLACKJACK_H
#include "player.h"
#include "deck.h"

class BlackJack
{
public:
    BlackJack();
    void playGame();

private:
    Deck deck;
    Player p1;
    Card dealtCard;
    bool busted;
};

#endif // BLACKJACK_H
