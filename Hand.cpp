#include "Hand.h"
using namespace std;

Hand::Hand()
{
    head=nullptr;
    cardCount=0;
}


void Hand::addCard(Card card)
{
    CardNode* temp= new CardNode(card);
    temp->next=head;
    head=temp;
    cardCount++;
}

void Hand::display()
{
    CardNode* temp1=head;
    while(temp1!=nullptr)
    {
        cout<<temp1->c.toString()<<" ";
        temp1=temp1->next;
    }
    cout<<endl;
}

int Hand::size()
{
    return cardCount;
}

bool Hand::isEmpty()
{
    if(cardCount==0)
       return true;
    else
       return false;   
}