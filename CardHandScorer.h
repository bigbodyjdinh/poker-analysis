//
// Created by jdinh on 10/15/2020.
//

#ifndef POKER_ANALYSIS_CARDHANDSCORER_H
#define POKER_ANALYSIS_CARDHANDSCORER_H

#include "CardHand.h"
#include "PokerScore.h"

class CardHandScorer
{
public:
    CardHandScorer(CardHand& ch);
    static PokerScore setHandScore(CardHand& ch);

    static void display(CardHand& ch);

private:
    static bool checkForHighCard(CardHand& ch); //automatically returns true for high card
    static bool checkForOnePair(CardHand& ch); //check for two cards of the same rank
    static bool checkForTwoPair(CardHand& ch); //check for two cards of the same rank along with another two cards of the same rank
    static bool checkForThreeOfAKind(CardHand& ch); //checks if three cards are of the same rank
    static bool checkForStraight(CardHand& ch); //checks if all five cards are of the same rank
    static bool checkForFlush(CardHand& ch); //checks if all five cards of the same suit
    static bool checkForFullHouse(CardHand& ch); //checks if there are three cards of the same rank as well as a one pair
    static bool checkForFourOfAKind(CardHand& ch); //checks if four cards have the same rank
    static bool checkForStraightFlush(CardHand& ch); //checks if all five cards have the same suits and ranks
    static bool checkForRoyalFlush(CardHand& ch); //checks if the Ace, King, Queen, Jack, and 10 have the same suit
};


#endif //POKER_ANALYSIS_CARDHANDSCORER_H
