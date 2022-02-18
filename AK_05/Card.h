# include "std_lib_facilities.h"

#ifndef FILE_CARD_SEEN
#define FILE_CARD_SEEN

enum class Suit{clubs, diamonds, hearts, spades, END};
inline Suit operator++(Suit& x){return x = (Suit)((int)(x)+1);}

enum class Rank {ace   = 1,
                  two   = 2, 
                  three = 3,
                  four  = 4,
                  five  = 5,
                  six   = 6,
                  seven = 7,
                  eight = 8,
                  nine  = 9,
                  ten   = 10,
                  jack  = 11,
                  queen = 12, 
                  king  = 13,
                  END   = 14};

inline Rank operator++(Rank& x){return x = (Rank)((int)(x)+1);}

string suitToString(Suit suit);
string rankToString(Rank rank);

class Card{
    private:
    Suit s;
    Rank r;

    public:
    Card(Suit suit,Rank rank);
    Suit getSuit();
    Rank getRank();
    string toString();
};

#endif /* !FILE_CARD_SEEN */