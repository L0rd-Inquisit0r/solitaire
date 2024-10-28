#include<stdio.h>

// Defining structure of a card
typedef struct card{
    int val;
    int suit;
}Card;

// Using array stack implementation to define a deck of cards
typedef struct deck{
    Card *cards;
    int size;
}Deck;

// Defining structure of play table
typedef struct table{
    Deck shuffleDeck[2];
    Deck playDeck[7];
    Deck acesDeck[4];
}Table;

// Initialization functions
void initTable(Table *table);
void initDeck(Deck *deck, int size);
void shuffle(Deck *deck);
void distribute(Table *table);

// Operating functions
void push(Card card, Deck *deck);
Card pop(Deck *deck);

int main(){

    return 0;
}

// Initializes play table
void initTable(Table *table){

}

// Initializes each deck of the table
void initDeck(Deck *deck, int size){

}

// shuffles the cards in the shuffle deck after initialization and distribution
void shuffle(Deck *deck){

}

// distrubutes cards from shuffle deck to main play decks
void distribute(Table *table){

}

// pushes card to a deck
void push(Card card, Deck *deck){

}

// removes top card from a deck
Card pop(Deck *deck){

}