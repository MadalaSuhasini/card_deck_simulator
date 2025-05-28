#include "Card.h"

using namespace std;

Card::Card(string s,string r)
{
    suit=s;
    rank=r;
}

Card::Card()
{
    suit="";
    rank="";
}

string Card::toString()
{
    return rank+" of "+suit;
}
