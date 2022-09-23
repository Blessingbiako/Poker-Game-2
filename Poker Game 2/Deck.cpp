#include "Deck.h"
#include <iostream>

Deck::Deck()
	: deck()
{
	deck.reserve(52);
	for (Card::Ranks r = Card::TWO; r <= Card::ACE; r = static_cast<Card::Ranks>(static_cast<int>(r) + 1))
	{
		for (Card::Suits s = Card::CLUBS; s <= Card::HEARTS; s = static_cast<Card::Suits>(static_cast<int>(s) + 1))
		{
			Card* card = new Card(r,s);
			card->Print();
			std::cout << card << std::endl;
		}
	}
}

Deck::~Deck()
{
	for (Card* card : deck)
	{
		delete card;
	}
}