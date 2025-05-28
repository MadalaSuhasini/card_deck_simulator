#ifndef CARD_H
#define CARD_H

#include<string>
using namespace std;

class Card
{
    private:
    string suit;
    string rank;

    public:
    Card(string s,string r);
    Card();
    string toString();
};

#endif
