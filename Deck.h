//
// Created by jdinh on 10/12/2020.
//

#ifndef POKER_ANALYSIS_DECK_H
#define POKER_ANALYSIS_DECK_H

#include <iostream>
#include "Card.h"
#include <time.h>
#include <cstdlib>

using namespace std;


class Deck
{
private:
    Card deck[52]; //final deck of cards
    const int deckSize = 52; //size of the card deck

public:
    Deck();

    int cardIndex = 0; //marks the index of the next card in the deck

    bool empty(); //returns true if deck has no cards
    void setDeck(); //simply sets the Card deck[52]
    void shuffle(); //puts cards in random order
    void setScores(); //set scores for each card in correspondence with their rank
    void setSuits(); //set suit values for each card

    Card dealCard(); //returns the next card in the deck
    Card getCardAt(int index); //gets the Card at the given index

    friend ostream& operator << (ostream& outs, const Deck& d); //prints all the cards to the console
};


#endif //POKER_ANALYSIS_DECK_H
