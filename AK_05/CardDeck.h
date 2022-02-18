# include "std_lib_facilities.h"
# include "Card.h"


#ifndef FILE_CARDDECK_SEEN
#define FILE_CARDDECK_SEEN

class CardDeck{
private:
vector<Card> cards;
void swap(int cardOne, int cardTwo);

public:
CardDeck();
void shuffle(int shuffleAmount);
Card drawCard();
void printDeck();

};

#endif /* !FILE_CARDDECK_SEEN */