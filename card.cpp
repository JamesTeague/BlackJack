#include "card.h"
#include <string>
#include <sstream>

using namespace std;

Card::Card(){
    rank = 'A';
    suit = 'S';
}

Card::Card(char r, char s) {
    suit = s;
    rank = r;
}

char Card::getSuit() const{
    return(suit);
}

char Card::getRank() const {
    return rank;
}

string Card::toString() const {
    stringstream ss;
    stringstream tt;
    string level;
    ss << rank;
    ss >> level;
    string type;
    tt << suit;
    tt >> type;
    return ""+level+type+"";
}
