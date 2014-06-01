#include "player.h"
#include <iostream>

Player::Player() {
    moneyLeft = 2000;
    bet = 0;
    hands = 1;
    handValue = 0;
    name = "player1";
}

double Player::getMoney() const {
	return moneyLeft;
}

string Player::getName() const {
	return name;
}

double Player::getBet() const {
	return bet;
}

int Player::changeHandVal() {
    handValue = 0;
    for (Card c : hand){
        handValue += evalCard(c);
    }

    return handValue;
}

void Player::changeWallet(double amount) {
    moneyLeft += amount;
}

void Player::changeBet(int wager) {
    bet = wager;
}

int Player::getHandVal() const {
    return handValue;
}

void Player::getNextCard(Card c) {
    hand.push_back(c);
}

int Player::evalCard(Card c) {
    int value;
    switch (c.getRank())
    {
    case '2':
        value = 2;
        break;
    case '3':
        value = 3;
        break;
    case '4':
        value = 4;
        break;
    case '5':
        value = 5;
        break;
    case '6':
        value = 6;
        break;
    case '7':
        value = 7;
        break;
    case '8':
        value = 8;
        break;
    case '9':
        value = 9;
        break;
    case 'T':
        value = 10;
        break;
    case 'J':
        value = 10;
        break;
    case 'Q':
        value = 10;
        break;
    case 'K':
        value = 10;
        break;
    case 'A':
        value = 11;
        break;
    }

    return value;
}

void Player::getHand() const {
    for (Card c : hand){
        cout << c.toString() << " ";
    }
    cout << "" << endl;
}
