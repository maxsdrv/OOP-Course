#ifndef HOMEWORK_CARD_H
#define HOMEWORK_CARD_H

#include <iostream>
#include <string>

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
    explicit Card(rank r = ACE, suit s = SPADES, bool pos = true);
    void Flip();
    [[nodiscard]]int GetValue() const;

    friend std::ostream& operator<<(std::ostream& os, const Card& card);
private:
    suit m_Suit;
    rank m_Rank;
    bool m_PositionUp;
};


#endif //HOMEWORK_CARD_H
