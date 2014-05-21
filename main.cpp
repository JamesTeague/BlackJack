#include <iostream>
#include "deck.h"

using namespace std;

int main()
{
    Deck d;
    cout << d.testSize() << endl;
    for (int i = 0; i < 52; i++){
        cout << d.testCard(i).toString() << endl;
    }
    return 0;
}

