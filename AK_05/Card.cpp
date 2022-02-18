# include "Card.h"
# include "std_lib_facilities.h"


string suitToString(Suit suit){
    switch (suit) {
        case Suit::clubs :    return  "Clubs";
        case Suit::diamonds:  return  "Diamonds";
        case Suit::hearts:    return  "Hearts";
        case Suit::spades:    return  "Spades";
        default: return  "";
        
    }
}

string rankToString(Rank rank){
        switch (rank) {
        case Rank::ace:    return  "Ace";
        case Rank::two:    return  "Two";
        case Rank::three:  return  "Three";
        case Rank::four:   return  "Four";
        case Rank::five:   return  "Five";
        case Rank::six:    return  "Six";
        case Rank::seven:  return  "Seven";
        case Rank::eight:  return  "Eight";
        case Rank::nine:   return  "Nine";
        case Rank::ten:    return  "Ten";
        case Rank::jack:   return  "Jack";
        case Rank::queen:  return  "Queen";
        case Rank::king:   return  "King";
        default: return  "";
    }
}

Card::Card(Suit suit, Rank rank): s{suit}, r{rank} {}

Suit Card::getSuit() { return Card::s; }
Rank Card::getRank() { return Card::r; }

string Card ::toString(){ return rankToString(r) + " of " + suitToString(s); }