#include <iostream>
#include "deck.h"
#include "player.h"
using namespace std;

int main()
{
    Deck d;
    Player p1;
    Card currentCard;

    d.shuffle();
    d.showDeck();
    currentCard = d.deal();
    cout << "Dealt card " << currentCard.toString() << endl;

    p1.changeBet(5);
    p1.changeWallet(5000);
    p1.changeHandVal(16);
    p1.getNextCard(currentCard);

    currentCard = d.deal();
    cout << "Dealt card " << currentCard.toString() << endl;
    p1.getNextCard(currentCard);
    cout << "All Player details: " << endl;
    cout << "Player name: " << p1.getName() << endl;
    cout << "Player money: " << p1.getMoney() << endl;
    cout << "Player bet and handVal: " << p1.getBet() << " " << p1.getHandVal() << endl;
    cout << "Player Hand is: ";
    p1.getHand();

    return 0;
}

