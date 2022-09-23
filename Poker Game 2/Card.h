#pragma once

class Card
{
public:
    enum Suits
    {
        CLUBS,
        DIAMONDS,
        SPADES,
        HEARTS,
    };

    enum Ranks
    {
        TWO = 2,
        THREE,
        FOUR,
        FIVE,
        SIX,
        SEVEN,
        EIGHT,
        NINE,
        TEN,
        JACK,
        QUEEN,
        KING,
        ACE = 14
    };

    Card(Ranks RANK, Suits SUIT);
    virtual ~Card();

    Ranks GetRank();
    Suits GetSuit();

    virtual int GetFaceValue();
    void Print();

private:
    int Rank;
    int Suit;
};