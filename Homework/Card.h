#ifndef HOMEWORK_CARD_H
#define HOMEWORK_CARD_H



class Card {
public:
    enum suit {
        SPADES,
        HEARTS,
        DIAMONDS,
        CLUBS
    };
    enum rank { ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
                JACK, QUEEN, KING
    };
    void Flip();
    int GetValue();
private:
    suit m_Suit;
    rank m_Rank;
    bool m_position;
};


#endif //HOMEWORK_CARD_H
