#ifndef CARD_H
#define CARD_H
#include <string>

using namespace std;

class Card
{
public:
    Card();
    Card(char r, char s);
    char getSuit() const;
    char getRank() const;
    string toString() const;

private:
    char suit;
    char rank;

};

#endif // CARD_H
