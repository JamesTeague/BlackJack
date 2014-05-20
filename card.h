#ifndef CARD_H
#define CARD_H
#include <string>
using namespace std;

class Card
{
public:
    Card();
    Card(char s, char r);
    char getSuit() const;
    char getRank() const;
    string toString() const;

private:
    char suit;
    char rank;
};

#endif // CARD_H
