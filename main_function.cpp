#include "Card.h"
#include "Deck.h"
#include "Hand.h"
#include <iostream>
using namespace std;

int main() {
    Deck myDeck;
    string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    string ranks[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 13; j++) {
            Card newCard(suits[i], ranks[j]);
            myDeck.adding_card(newCard);
        }
    }
    
    cout << "Deck created with " << myDeck.size() << " cards" << endl;
    myDeck.shuffle();
    
    cout << "Now let's begin the Game!!" << endl;
    cout << "What's the number of cards you want to pick up? ";
    int n;
    cin >> n;
    
    Hand playerHand;
    
    cout << "\nDrawing " << n << " cards..." << endl;
    for(int i = 0; i < n; i++) {
        if(!(myDeck.isEmpty())) {
            Card drawnCard=myDeck.removing_from_top();  
            playerHand.addCard(drawnCard);
        } else {
            cout << "Deck is empty! Only drew " << i << " cards." << endl;
            break;
        }
    }
    
    cout << "\nYour hand:" << endl;
    playerHand.display();
    
    cout << "\nRemaining deck size: " << myDeck.size() << endl;
    return 0;
}