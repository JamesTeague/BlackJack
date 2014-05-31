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
    int changeHandVal();
    void getNextCard(Card c);

    // accessor methods
    string getName() const;
    double getMoney() const;
    double getBet() const;
    int getHandVal() const;
    void getHand() const;

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
