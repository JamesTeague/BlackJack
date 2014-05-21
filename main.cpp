#include <iostream>
#include "deck.h"

using namespace std;

int main()
{
    Deck d;

    cout << "Dealt card " << d.deal().toString() << endl;
    cout << "Cards left " << d.testSize() << endl;
    for (int i = 0; i < 52; i++){
        cout << d.testCard(i).toString() << endl;
    }


    return 0;
}

