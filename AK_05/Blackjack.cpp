#include "Blackjack.h"
# include "std_lib_facilities.h"


bool Blackjack::isAce(Card card){
    if (card.getRank() == Rank::ace) return true;
    else return false;
}

int Blackjack::getCardValue(Card card){
    if ((int)card.getRank()>10) return 10;
    else return (int)card.getRank();
}

int Blackjack::getHandScore(vector<Card> hand, int desired_score){
    int sum = 0;
    int noAces = 0;
    for (int i=0;i<hand.size();i++){
        if (isAce(hand.at(i))) noAces++;
        else sum += getCardValue(hand.at(i));
    }
    if (noAces>0){
        int checkOne = 0;
        int checkTwo = 0;
        if (noAces == 1){
            checkOne = 11 + sum;
            checkTwo = 1 + sum; 
        }
        else{
            checkOne = 10 + noAces + sum;
            checkTwo = noAces + sum;
        }
        if (checkOne>desired_score){
            if (checkTwo>desired_score){
                return min(checkOne,checkTwo);
            }
            else return checkTwo;
        }
        else return checkOne;
    }
    return sum;
}

bool Blackjack::askPlayerDrawCard(){
    cout << "Do you want to draw a new card? y/n " << endl;
    string answer = "";
    cin >> answer;
    if (answer=="y") return true;
    else return false;
}

void Blackjack::drawPlayerCard(){
    playerHand.push_back(deck.drawCard());
}

void Blackjack::drawDealerCard(){
    dealerHand.push_back(deck.drawCard());
}

void Blackjack::playGame(){
    bool RUNNING = true;
    bool PLAYER_WIN = false;

    deck.shuffle(1000);

    drawDealerCard();
    drawDealerCard();
    
    cout << "The dealer has two cards one is: " << rankToString(dealerHand.at(1).getRank()) << endl;

    drawPlayerCard();
    drawPlayerCard();
    cout << "You have the two cards: " 
         << rankToString(playerHand.at(0).getRank()) << " and " 
         << rankToString(playerHand.at(1).getRank()) << endl;

    while (RUNNING){
        playerHandSum = getHandScore(playerHand, 21);
        cout << " your Score: " << playerHandSum << endl;
        if (getHandScore(playerHand,21) < 21){
            if (askPlayerDrawCard()){
                drawPlayerCard();
            }
            else RUNNING = false;
        }
        else break;
    }

    while (dealerHandSum < 17){
        dealerHandSum = getHandScore(dealerHand, 21);
        drawDealerCard(); 
    }

    playerHandSum = getHandScore(playerHand, 21);
    dealerHandSum = getHandScore(dealerHand, 21);

    if (playerHandSum > 21) PLAYER_WIN = false;
    else if (dealerHandSum > 21) PLAYER_WIN = true;
    if (playerHandSum < 21 && dealerHandSum < 21){
        if (playerHandSum > dealerHandSum) PLAYER_WIN = true;
        else PLAYER_WIN = false;
    }

    cout << "The dealer had a score of: " << dealerHandSum << endl;
    cout << "Your score was: " << playerHandSum << endl;
    if(PLAYER_WIN) cout << "Woohooo You win bby" <<endl;
    else cout << "As always the house won" <<endl;
}