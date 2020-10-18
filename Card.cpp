//
// Created by jdinh on 10/12/2020.
//

#include "Card.h"

Card::Card()
{
    rank = Ace;
    suit = Clubs;
}


Card::Card (suits suitInput, ranks rankInput)
{
    suit = suitInput;
    rank = rankInput;
}


void Card::setSuit(int suitInput)
{
    switch(suitInput)
    {
        case 0:
            suit = Clubs;
            break;
        case 1:
            suit = Diamonds;
            break;
        case 2:
            suit = Hearts;
            break;
        case 3:
            suit = Spades;
            break;

        default:
            suit = Clubs;
    }
}


void Card::setRank(int rankInput)
{
    switch(rankInput)
    {
        case 0:
            rank = Two;
            break;
        case 1:
            rank = Three;
            break;
        case 2:
            rank = Four;
            break;
        case 3:
            rank = Five;
            break;
        case 4:
            rank = Six;
            break;
        case 5:
            rank = Seven;
            break;
        case 6:
            rank = Eight;
            break;
        case 7:
            rank = Nine;
            break;
        case 8:
            rank = Ten;
            break;
        case 9:
            rank = Jack;
            break;
        case 10:
            rank = Queen;
            break;
        case 11:
            rank = King;
            break;
        case 12:
            rank = Ace;
            break;

        default:
            rank = Ace;
    }
}


string Card::getSuit() const
{
    switch (suit)
    {
        case Clubs:
            return "Clubs";
        case Diamonds:
            return "Diamonds";
        case Hearts:
            return "Hearts";
        case Spades:
            return "Spades";
        default:
            return "None";
    }
}


string Card::getRank() const
{
    switch (rank)
    {
        case Two:
            return "Two";
        case Three:
            return "Three";
        case Four:
            return "Four";
        case Five:
            return "Five";
        case Six:
            return "Six";
        case Seven:
            return "Seven";
        case Eight:
            return "Eight";
        case Nine:
            return "Nine";
        case Ten:
            return "Ten";
        case Jack:
            return "Jack";
        case Queen:
            return "Queen";
        case King:
            return "King";
        case Ace:
            return "Ace";
        default:
            return "None";
    }
}


void Card::setRank(ranks rankInput)
{
    rank = rankInput;
}


void Card::setSuit(suits suitInput)
{
    suit = suitInput;
}


void Card::setCardScore(int num)
{
    score = num;
}


void Card::setCardSuit(string s)
{
    suitName = s;
}


int Card::returnScore()
{
    return score;
}


string Card::returnSuit()
{
    return suitName;
}


ostream& operator << (ostream& outs, const Card& card)
{
    outs << card.getRank() << " of " << card.getSuit();
    return outs;
}