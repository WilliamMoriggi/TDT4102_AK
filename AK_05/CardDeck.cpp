# include "CardDeck.h"
# include "Card.h"
# include "std_lib_facilities.h"

CardDeck::CardDeck(){
    for (Rank i = Rank::ace; i != Rank::END; ++i){
        for (Suit j = Suit::clubs; j != Suit::END; ++j){
            Card c{j,i};
            CardDeck::cards.push_back(c);
        }
    }
}

void CardDeck::swap(int cardOne, int cardTwo){ std::swap(cards.at(cardOne),cards.at(cardTwo)); }

void CardDeck::shuffle(int shuffleAmount){
    for (int i = 0; i < shuffleAmount+1; i++){
        int rngOne = rand()%51;
        int rngTwo = rand()%51;
        CardDeck::swap(rngOne,rngTwo);
    }
}

Card CardDeck::drawCard(){
    Card card = cards.at(0);
    cards.erase(cards.begin());
    return card;
}

void CardDeck::printDeck(){
    for(int i = 0; i < (int)cards.size(); i++){
        cout << cards.at(i).toString() << endl;
    }
}