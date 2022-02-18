#pragma once
#include "CardDeck.h"

class Blackjack{
    private:
    CardDeck deck;
    vector<Card> playerHand;
    vector<Card> dealerHand;
    int playerHandSum;
    int dealerHandSum;

    bool isAce(Card card);
    int getCardValue(Card card);
    int getHandScore(vector<Card> hand,int desired_score);
    bool askPlayerDrawCard();
    void drawPlayerCard();
    void drawDealerCard();

    public:

    void playGame();

};