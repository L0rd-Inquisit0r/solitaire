#include<stdio.h>

// Defining structure of a card
typedef struct card{
    int val;    // Card values range from 1-13 (1 - Ace, 11 - Jack, 12 - Queen, 13 - King)
    int suit;   // Suit values from 1-4 (1 - spades, 2 - hearts, 3 - clubs, 4 - diamonds)
}Card;

// Using array stack implementation to define a deck of cards
typedef struct deck{
    Card *cards;    // Dynamic array of Card datatype
    int size;       // Holds total number of cards in deck
}Deck;

// Defining structure of play table
typedef struct klondike{
    Deck tableau[7];    // Main playing area consisting of cards dealt in 7 columns at the start of the game
    Deck stock;         // After dealing cards onto tableau, remaining cards left in stack make up stockpile
    Deck talon;         // Cards from stockpile are drawn and placed into talon/waste pile to be used
    Deck foundation[4]; // Win the game by filling up foundation piles wich corresponds to one of 4 suits
}Klondike;

// Initialization functions
void initKlon(Klondike *table);
void initDeck(Deck *deck, int size);
void shuffle(Deck *deck);
void distribute(Klondike *table);

// Operating functions
void push(Card card, Deck *deck);
Card pop(Deck *deck);

int main(){

    return 0;
}

// Initializes play table
void initKlon(Klondike *table){

}

// Initializes each deck of the table
void initDeck(Deck *deck, int size){

}

// shuffles the cards in the shuffle deck after initialization and distribution
void shuffle(Deck *deck){

}

// distrubutes cards from shuffle deck to main play decks
void distribute(Klondike *table){

}

// pushes card to a deck
void push(Card card, Deck *deck){

}

// removes top card from a deck
Card pop(Deck *deck){

}