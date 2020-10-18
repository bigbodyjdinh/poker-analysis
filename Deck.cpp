//
// Created by jdinh on 10/12/2020.
//

#include "Deck.h"

Deck::Deck()
{
    cardIndex = 0;
}


void Deck::setDeck()
{
    int counter = 0;

    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            deck[counter].setRank(i);
            deck[counter].setSuit(j);
            counter++;
        }
    }
}


void Deck::setScores()
{
    for (int i = 0; i < deckSize; i++)
    {
        if (i == 0 || i == 1 || i == 2 || i == 3)
        {
            deck[i].setCardScore(2);
        }
        else if (i == 4 || i == 5 || i == 6 || i == 7)
        {
            deck[i].setCardScore(3);
        }
        else if (i == 8 || i == 9 || i == 10 || i == 11)
        {
            deck[i].setCardScore(4);
        }
        else if (i == 12 || i == 13 || i == 14 || i == 15)
        {
            deck[i].setCardScore(5);
        }
        else if (i == 16 || i == 17 || i == 18 || i == 19)
        {
            deck[i].setCardScore(6);
        }
        else if (i == 20 || i == 21 || i == 22 || i == 23)
        {
            deck[i].setCardScore(7);
        }
        else if (i == 24 || i == 25 || i == 26 || i == 27)
        {
            deck[i].setCardScore(8);
        }
        else if (i == 28 || i == 29 || i == 30 || i == 31)
        {
            deck[i].setCardScore(9);
        }
        else if (i == 32 || i == 33 || i == 34 || i == 35)
        {
            deck[i].setCardScore(10);
        }
        else if (i == 36 || i == 37 || i == 38 || i == 39)
        {
            deck[i].setCardScore(11);
        }
        else if (i == 40 || i == 41 || i == 42 || i == 43)
        {
            deck[i].setCardScore(12);
        }
        else if (i == 44 || i == 45 || i == 46 || i == 47)
        {
            deck[i].setCardScore(13);
        }
        else if (i == 48 || i == 49 || i == 50 || i == 51)
        {
            deck[i].setCardScore(14);
        }
    }
}


void Deck::setSuits()
{
    for (int i = 0; i < deckSize; i += 4)
    {
        deck[i].setCardSuit("Clubs");
    }

    for (int i = 1; i < deckSize; i += 4)
    {
        deck[i].setCardSuit("Diamonds");
    }

    for (int i = 2; i < deckSize; i += 4)
    {
        deck[i].setCardSuit("Hearts");
    }

    for (int i = 3; i < deckSize; i += 4)
    {
        deck[i].setCardSuit("Spades");
    }
}


void Deck::shuffle()
{
    srand(time(NULL));

    for (int i = 0; i < 52; i++)
    {
        int randCard = i + (rand() % (52 - i));

        swap(deck[i], deck[randCard]);
    }
}


Card Deck::getCardAt(int index)
{
    return deck[index];
}


Card Deck::dealCard()
{
    if (empty())
    {
        //cout << "\nThere are no more cards left in the deck. The game is over! ";
        //exit(1);
        cardIndex = 0;
    }

    //Card nextCard = getCardAt(cardIndex);
    //cardIndex++;
    return deck[cardIndex];
}


bool Deck::empty()
{
    bool emptyDeck;

    if (cardIndex == deckSize)
    {
        emptyDeck = true;
    }

    else
    {
        emptyDeck = false;
    }
    return emptyDeck;
}


ostream& operator << (ostream& outs, const Deck& d)
{
    for (int i = 0; i < d.deckSize; i++)
    {
        outs << i+1 << ": " << d.deck[i] << endl;
    }
    return outs;
}