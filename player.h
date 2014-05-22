#ifndef PLAYER_H
#define PLAYER_H
#include <string>

using namespace std;

class Player
{
public:
    Player();

private:
    string name;
    double moneyLeft;
    double bet;
    int handValue;
    int hands;

};

#endif // PLAYER_H
