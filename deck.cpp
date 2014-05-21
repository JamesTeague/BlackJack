#include "deck.h"
#include "card.cpp"
using namespace std;

Deck::Deck()
{
    string suits = "SDCH";
    string ranks = "23456789TJQKA";
    for (int c = 0; c < 4; c++) {
        for (int l = 0; l < 13; l++) {
            Card f(ranks.at(l), suits.at(c));
            stack.push_back(f);
        }
    }
}

int Deck::testSize() {
    return stack.size();
}

Card Deck::testCard(int n) {
    return stack.at(n);
}
