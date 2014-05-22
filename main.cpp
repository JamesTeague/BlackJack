#include <iostream>
#include "deck.h"

using namespace std;

int main()
{
    Deck d;

    cout << "Dealt card " << d.deal() << endl;
    cout << "Shuffling deck " << endl;
    d.shuffle();
    d.showDeck();


    return 0;
}

