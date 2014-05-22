#include "deck.h"
#include "card.cpp"
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <iostream>


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
    _cardsLeft = stack.size();
}

string Deck::deal(){
    int size = stack.size();
    Card x = stack.at(size-1);
    stack.pop_back();
    _cardsLeft = stack.size();
    stack.resize(_cardsLeft);
    return x.toString();
}

void Deck::shuffle(){
    cout << "Shuffling the Deck..." << endl;
    srand(unsigned (time(0)));
    random_shuffle(stack.begin(), stack.end());
//    shuffle(stack.begin(), stack.end(), myRandom());
}

void Deck::showDeck() const {
    for (int i=0; i<_cardsLeft; i++){
        cout << stack.at(i).toString() << endl;
    }
}

int Deck::cardsRemaining() const {
    return _cardsLeft;
}
