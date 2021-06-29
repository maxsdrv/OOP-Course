
#include "Card.h"

void Card::Flip() {
  m_PositionUp = !(m_PositionUp);
}

int Card::GetValue() const{
    int value = 0;
    if (m_PositionUp) {
        value = m_Rank;
        if (value > 10) {
            value = 10;
        }
    }
    return value;
}

Card::Card(Card::rank r, Card::suit s, bool pos) : m_Rank(r), m_Suit(s),m_PositionUp(pos) {

}

std::ostream &operator<<(std::ostream &os, const Card &card) {
    const std::string RANKS[] = {"0", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    const std::string SUITS[] = {"c", "d", "h", "s"};
    if (card.m_PositionUp) {
        os << RANKS[card.m_Rank] << " " << SUITS[card.m_Suit];
    }
    else {
        os << "XX";
    }
    
    return os;
}
