#include "Deck.h"
#include<cstdlib>
#include<ctime>

using namespace std;

Deck::Deck()
{
    top=-1;
}

void Deck::adding_card(Card card)
{
    if(top>=52)
        {
            cout<<"Deck is full"<<endl;
            return;
        }
        top++;
        array[top]=card;
}

Card Deck:: removing_from_top()
{
    if(top==-1)
        {
            cout<<"Deck is empty"<<endl;
            return Card();
        }
        Card temp=array[top];
        top--;
        return temp;
}

void Deck:: display()
{
    cout<<"Cards in the Deck"<<endl;
        for(int i=0;i<=top;i++)
        {
            cout<<array[i].toString();
            cout<<endl;
        }
}

void Deck::shuffle()
{
    srand(time(0));
    for(int i=0;i<=top;i++)
    {
        int random_index=rand()%(top+1);
        Card temp=array[i];
        array[i]=array[random_index];
        array[random_index]=temp;
    }
}

int Deck::size()
{
    return (top+1);
}

bool Deck::isEmpty()
{
    if(top>0)
      return false;
    else
     return true;  
}

