#include "std_lib_facilities.h"
#include "Card.h"
#include "CardDeck.h"
#include "Blackjack.h"

int main()
{
    srand(time(0));

    CardDeck cd = CardDeck();
    cd.printDeck();
    cd.shuffle(1000);

    Blackjack bj = Blackjack();
    bj.playGame();
}
 
