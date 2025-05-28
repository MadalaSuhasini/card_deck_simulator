#ifndef DECK_H
#define DECK_H

#include<bits/stdc++.h>
#include "Card.h"
using namespace std;

class Deck
{
    Card array[52];
    int top;
   
    public:
    Deck();
    void adding_card(Card card);
    Card removing_from_top();
    void display();
    void shuffle();
    int size();
    bool isEmpty();
};

#endif