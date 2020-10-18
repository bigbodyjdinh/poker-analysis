//
// Created by jdinh on 10/15/2020.
//

#include "PokerScore.h"

PokerScore::PokerScore()
{
    counter = 0;
    highCard = 0;
    onePair = 0;
    twoPair = 0;
    threeKind = 0;
    straight = 0;
    flush = 0;
    fullHouse = 0;
    fourKind = 0;
    straightFlush = 0;
    royalFlush = 0;
}


void PokerScore::operator += (const Scores& score)
{
    scores.push_back(score); //check for push_back type

    if (score == HIGH_CARD)
    {
        highCard++;
    }

    else if (score == ONE_PAIR)
    {
        onePair++;
    }

    else if (score == TWO_PAIR)
    {
        twoPair++;
    }

    else if (score == THREE_OF_A_KIND)
    {
        threeKind++;
    }

    else if (score == STRAIGHT)
    {
        straight++;
    }

    else if (score == FLUSH)
    {
        flush++;
    }

    else if (score == FULL_HOUSE)
    {
        fullHouse++;
    }
    else if (score == FOUR_OF_A_KIND)
    {
        fourKind++;
    }

    else if (score == STRAIGHT_FLUSH)
    {
        straightFlush++;
    }

    else if (score == ROYAL_FLUSH)
    {
        royalFlush++;
    }
}


void PokerScore::operator = (const PokerScore& newScore)
{
    for (auto score : newScore.scores)
    {
        scores.push_back(score);
    }
    highCard += newScore.highCard;
    onePair += newScore.onePair;
    twoPair += newScore.twoPair;
    threeKind += newScore.threeKind;
    straight += newScore.straight;
    flush += newScore.flush;
    fullHouse += newScore.fullHouse;
    fourKind += newScore.fourKind;
    straightFlush += newScore.straightFlush;
    royalFlush += newScore.royalFlush;
}


bool operator == (const PokerScore& p, PokerScore::Scores score)
{
    for (int i = 0; i < p.size(); i++)
    {
        if (p[i] == score)
        {
            return true;
        }
    }
    return false;
}


int PokerScore::size() const
{
    return scores.size();
}


PokerScore::Scores PokerScore::operator [] (unsigned int index) const
{
    return scores[index];
}


ostream& operator << (ostream& outs, const PokerScore& p)
{
    outs << "ROYAL_FLUSH: " << p.royalFlush << endl;
    outs << "STRAIGHT_FLUSH: " << p.straightFlush << endl;
    outs << "FOUR_OF_A_KIND: " << p.fourKind << endl;
    outs << "FULL_HOUSE: " << p.fullHouse << endl;
    outs << "FLUSH: " << p.flush << endl;
    outs << "STRAIGHT: " << p.straight << endl;
    outs << "THREE_OF_A_KIND: " << p.threeKind << endl;
    outs << "TWO_PAIR: " << p.twoPair << endl;
    outs << "ONE_PAIR: " << p.onePair << endl;
    outs << "HIGH_CARD: " << p.highCard << endl;

    return outs;
}