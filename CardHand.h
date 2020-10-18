//
// Created by jdinh on 10/14/2020.
//

#ifndef POKER_ANALYSIS_CARDHAND_H
#define POKER_ANALYSIS_CARDHAND_H

#include "Deck.h"
#include "vector"


class CardHand
{
private:
    Deck& d;
    const int handSize = 5;

public:
    vector<Card> cardHand; //a vector to hold the cards and is a copy of Card hand[5]
    int handIndex = 0;

    CardHand(Deck& d);

    void deleteCardHand();
    void addCard();
    void sortCardHand();

    Card returnCard();

    friend ostream& operator << (ostream& outs, const CardHand& ch);
};


#endif //POKER_ANALYSIS_CARDHAND_H
