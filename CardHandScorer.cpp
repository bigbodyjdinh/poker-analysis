//
// Created by jdinh on 10/15/2020.
//

#include "CardHandScorer.h"


CardHandScorer::CardHandScorer(CardHand &ch)
{

}


PokerScore CardHandScorer::setHandScore(CardHand& ch)
{
    PokerScore p;
    if (checkForHighCard(ch))
    {
        p += PokerScore::HIGH_CARD;
    }
    if (checkForOnePair(ch))
    {
        p += PokerScore::ONE_PAIR;
    }

    if(checkForTwoPair(ch))
    {
        p += PokerScore::TWO_PAIR;
    }

    if (checkForThreeOfAKind(ch))
    {
        p += PokerScore::THREE_OF_A_KIND;
    }

    if (checkForStraight(ch))
    {
        p += PokerScore::STRAIGHT;
    }

    if (checkForFlush(ch))
    {
        p += PokerScore::FLUSH;
    }

    if (checkForFullHouse(ch))
    {
        p += PokerScore::FULL_HOUSE;
    }

    if (checkForFourOfAKind(ch))
    {
        p += PokerScore::FOUR_OF_A_KIND;
    }

    if (checkForStraightFlush(ch))
    {
        p += PokerScore::STRAIGHT_FLUSH;
    }

    if (checkForRoyalFlush(ch))
    {
        p += PokerScore::ROYAL_FLUSH;
    }
    return p;
}


void CardHandScorer::display(CardHand& ch)
{
    cout << endl << ch.cardHand[0] << ": " << ch.cardHand[0].returnScore();
    cout << endl << ch.cardHand[1] << ": " << ch.cardHand[1].returnScore();
    cout << endl << ch.cardHand[2] << ": " << ch.cardHand[2].returnScore();
    cout << endl << ch.cardHand[3] << ": " << ch.cardHand[3].returnScore();
    cout << endl << ch.cardHand[4] << ": " << ch.cardHand[4].returnScore();

    if (checkForHighCard(ch))
    {
        cout << "\nhigh card, ";
    }
    if (checkForOnePair(ch))
    {
        cout << "one pair, ";
    }

    if(checkForTwoPair(ch))
    {
        cout << "two pair, ";
    }

    if (checkForThreeOfAKind(ch))
    {
        cout << "three of a kind, ";
    }

    if (checkForStraight(ch))
    {
        cout << "straight, ";
    }

    if (checkForFlush(ch))
    {
        cout << "flush, ";
    }

    if (checkForFullHouse(ch))
    {
        cout << "full house, ";
    }

    if (checkForFourOfAKind(ch))
    {
        cout << "four of a kind, ";
    }

    if (checkForStraightFlush(ch))
    {
        cout << "straight flush, ";
    }

    if (checkForRoyalFlush(ch))
    {
        cout << "royal flush!";
    }
}


bool CardHandScorer::checkForHighCard(CardHand& ch)
{
    return true;
}


bool CardHandScorer::checkForOnePair(CardHand& ch)
{
    for (int i = 0; i < 5; i++)
    {
        if (ch.cardHand[i].returnScore() == ch.cardHand[i+1].returnScore()
            || ch.cardHand[i].returnScore() == ch.cardHand[i+2].returnScore()
            || ch.cardHand[i].returnScore() == ch.cardHand[i+3].returnScore()
            || ch.cardHand[i].returnScore() == ch.cardHand[i+4].returnScore())
        {
            return true;
        }
    }
    return false;
}


bool CardHandScorer::checkForTwoPair(CardHand& ch)
{
    if (ch.cardHand[0].returnScore() == ch.cardHand[1].returnScore() && ch.cardHand[2].returnScore() == ch.cardHand[3].returnScore()
        || ch.cardHand[0].returnScore() == ch.cardHand[1].returnScore() && ch.cardHand[3].returnScore() == ch.cardHand[4].returnScore()
        || ch.cardHand[1].returnScore() == ch.cardHand[2].returnScore() && ch.cardHand[3].returnScore() == ch.cardHand[4].returnScore())
    {
        return true;
    }
    return false;
}


bool CardHandScorer::checkForThreeOfAKind(CardHand& ch)
{
    if (ch.cardHand[0].returnScore() == ch.cardHand[2].returnScore()
        || ch.cardHand[1].returnScore() == ch.cardHand[3].returnScore()
        || ch.cardHand[2].returnScore() == ch.cardHand[4].returnScore())
    {
        return true;
    }
    return false;
}


bool CardHandScorer::checkForStraight(CardHand& ch)
{
    if (ch.cardHand[0].returnScore() == ch.cardHand[4].returnScore())
    {
        return true;
    }
    return false;
}


bool CardHandScorer::checkForFlush(CardHand& ch)
{
    if (ch.cardHand[0].returnSuit() == ch.cardHand[1].returnSuit() && ch.cardHand[1].returnSuit() == ch.cardHand[2].returnSuit()
        && ch.cardHand[2].returnSuit() == ch.cardHand[3].returnSuit() && ch.cardHand[3].returnSuit() == ch.cardHand[4].returnSuit())
    {
        return true;
    }
    return false;
}


bool CardHandScorer::checkForFullHouse(CardHand& ch)
{
    if (checkForThreeOfAKind(ch) && checkForTwoPair(ch))
    {
        return true;
    }
    return false;
}


bool CardHandScorer::checkForFourOfAKind(CardHand& ch)
{
    if (ch.cardHand[0].returnScore() == ch.cardHand[3].returnScore() || ch.cardHand[1].returnScore() == ch.cardHand[4].returnScore())
    {
        return true;
    }
    return false;
}


bool CardHandScorer::checkForStraightFlush(CardHand& ch)
{
    if (checkForStraight(ch) && checkForFlush(ch))
    {
        return true;
    }
    return false;
}


bool CardHandScorer::checkForRoyalFlush(CardHand& ch)
{
    if (ch.cardHand[0].returnScore() == 10 && ch.cardHand[1].returnScore() == 11 && ch.cardHand[2].returnScore() == 12
        && ch.cardHand[3].returnScore() == 13 && ch.cardHand[4].returnScore() == 14 && checkForFlush(ch))
    {
        return true;
    }
    return false;
}