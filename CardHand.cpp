//
// Created by jdinh on 10/14/2020.
//

#include "CardHand.h"

CardHand::CardHand(Deck& d) : d(d)
{

}


void CardHand::addCard()
{
    for (int i = 0; i < 5; i++)
    {
        cardHand.push_back(d.dealCard());
        d.cardIndex++;
    }
}


Card CardHand::returnCard()
{
    return cardHand[handIndex];
}


void CardHand::sortCardHand()
{
    for (int i = 0; i < 5-1; i++)
    {
        for (int j = 0; j < 5-i-1; j++)
        {
            if (cardHand[j].returnScore() > cardHand[j+1].returnScore())
            {
                swap(cardHand[j], cardHand[j+1]);
            }
        }
    }
}


void CardHand::deleteCardHand()
{
    cardHand.clear();
}

ostream& operator << (ostream& outs, const CardHand& ch)
{
    for (int i = 0; i < ch.handSize; i++)
    {
        outs << ch.cardHand[i] << endl;
    }

    return outs;
}