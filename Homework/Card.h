#ifndef HOMEWORK_CARD_H
#define HOMEWORK_CARD_H



class Card {
public:
    enum Suit{
        Jack = 2,
        Queen = 3,
        King = 4,
        Ace = 1
    };
    void Flip();
    int GetValue();
private:
    bool position;
};


#endif //HOMEWORK_CARD_H
