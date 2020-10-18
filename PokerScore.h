//
// Created by jdinh on 10/15/2020.
//

#ifndef POKER_ANALYSIS_POKERSCORE_H
#define POKER_ANALYSIS_POKERSCORE_H

#include <iostream>
#include <vector>

using namespace std;


class PokerScore
{
public:
    enum Scores
    {
        ROYAL_FLUSH, //A, K, Q, J, 10, all the same suit.

        STRAIGHT_FLUSH, //five cards of the same suit and consecutive ranking

        FOUR_OF_A_KIND, //four cards of the same ranking

        FULL_HOUSE, //three cards of the same rank along with two cards of the same rank

        FLUSH, //five cards of the same suit

        STRAIGHT, //five cards in consecutive ranking

        THREE_OF_A_KIND, //three cards of the same rank

        TWO_PAIR, //two cards of the same rank along with another two cards of the same rank

        ONE_PAIR, //two cards of the same rank

        HIGH_CARD //highest card in the player’s hand
    };

    PokerScore();

    void operator += (const Scores& score);
    void operator = (const PokerScore& newScore);

    friend bool operator == (const PokerScore& p, Scores score);

    int size() const;

    Scores operator [] (unsigned int index) const;

    friend ostream& operator << (ostream& outs, const PokerScore& p);

private:
    vector<Scores> scores;
    int counter, highCard, onePair, twoPair, threeKind, straight, flush, fullHouse, fourKind, straightFlush, royalFlush;

};


#endif //POKER_ANALYSIS_POKERSCORE_H
