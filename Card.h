//
// Created by jdinh on 10/12/2020.
//

#ifndef POKER_ANALYSIS_CARD_H
#define POKER_ANALYSIS_CARD_H

#include <iostream>

using namespace std;


enum suits
{
    Clubs, Diamonds, Hearts, Spades
};

enum ranks
{
    Two = 2, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace
};


class Card
{
private:
    suits suit;
    ranks rank;
    int score;
    string suitName;

public:
    Card();
    Card(suits suit, ranks rank);

    void setRank(int rankInput);
    void setSuit(int suitInput);

    void setCardScore(int num);
    void setCardSuit(string s);
    int returnScore();

    string getRank() const;
    string getSuit() const;
    string returnSuit();

    void setRank(ranks rankInput);
    void setSuit(suits suitInput);

    friend ostream& operator << (ostream& outs, const Card& card);
};


#endif //POKER_ANALYSIS_CARD_H
