#include "blackjack.h"
#include <iostream>

BlackJack::BlackJack()
{
    busted = false;
}

void BlackJack::playGame() {
    string response;

    deck.shuffle();
    dealtCard = deck.deal();
    p1.getNextCard(dealtCard);
    deck.deal(); //this will be dealers card
    dealtCard = deck.deal();
    p1.getNextCard(dealtCard);
    p1.changeHandVal();
    //decision making
    while(!busted){
        cout << p1.getHandVal() << endl;
        p1.getHand();
        cout << "Hit or Stay?" << endl;
        cin >> response;
        if (response.at(0) == 'H'){
            dealtCard = deck.deal();
            p1.getNextCard(dealtCard);
            p1.changeHandVal();

            if(p1.getHandVal() > 21){
                cout << "Bust" << endl;
                p1.changeWallet(0-p1.getBet());
                busted = true;
            }
        }
     }
    //test
    cout << p1.getHandVal() << endl;
    p1.getHand();
}
