/*
Name: Johnson Dinh
Poker Analysis Project
*/

#include "CardHandScorer.h"
#include "PokerScore.h"

int main()
{
    Deck d;
    CardHand ch1(d), ch2(d), ch3(d), ch4(d), ch5(d);
    PokerScore p;

    for (int i = 0; i < 2000000; i++)
    {
        d.setDeck();
        d.setScores();
        d.setSuits();
        d.shuffle();

        //cout << d << endl;

        ch1.addCard();
        ch2.addCard();
        ch3.addCard();
        ch4.addCard();
        ch5.addCard();

        //cout << "\nHAND 1\n" << ch1 << endl;
        //cout << "HAND 2\n" << ch2 << endl;
        //cout << "HAND 3\n" << ch3 << endl;
        //cout << "HAND 4\n" << ch4 << endl;
        //cout << "HAND 5\n" << ch5 << endl;

        ch1.sortCardHand();

        //cout << "\n\nHAND 1 ANALYSIS";
        //CardHandScorer::display(ch1);

        p = CardHandScorer::setHandScore(ch1);
        ch1.deleteCardHand();
        ch2.deleteCardHand();
        ch3.deleteCardHand();
        ch4.deleteCardHand();
        ch5.deleteCardHand();
    }
    cout << endl << endl << p;

    return 0;
}
