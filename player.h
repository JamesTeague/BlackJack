#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <vector>
#include "card.h"

using namespace std;

class Player
{
public:
    Player();

    // mutator methods
    void changeWallet(double amount);
    void changeBet(int wager);
    void changeHandVal(int value);
    void getNextCard(Card c);

    // accessor methods
    string getName();
    double getMoney();
    double getBet();
    int getHandVal();
    void getHand();

private:
    string name;
    double moneyLeft;
    double bet;
    int handValue;
    int hands;
    vector<Card> hand;

    int evalCard(Card c);

};

#endif // PLAYER_H
