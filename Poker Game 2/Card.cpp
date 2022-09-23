#include "Card.h"
#include "iostream"

Card::Card(Ranks RANK, Suits SUIT)
	:Rank(RANK),
	Suit(SUIT)
{
	//Nothing
}

Card::~Card()
{
	//Nothing in here
}

Card::Ranks Card::GetRank()
{
	return Ranks();
}

Card::Suits Card::GetSuit()
{
	return Suits();
}

int Card::GetFaceValue()
{
	return static_cast<int>(Rank);
}

void Card::Print()
{
	if (Rank <= TEN)
		std::cout << Rank;
	else if (Rank == JACK)
		std::cout << "J";
	else if (Rank == QUEEN)
		std::cout << "Q";
	else if (Rank == KING)
		std::cout << "K";
	else if (Rank == ACE)
		std::cout << "A";
}
