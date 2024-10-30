#include<stdio.h>
#include<stdio.h>

#define TABLEAU_SIZE 7
#define FOUNDATION_SIZE 4
#define MAX_DECK_SIZE 52
#define SUIT_SIZE 13
#define MAX_POSSIBLE_TABLEAU_DECK_SIZE 21

// Defining structure of a card
typedef struct card{
    int val;    // Card values range from 1-13 (1 - Ace, 11 - Jack, 12 - Queen, 13 - King)
    int suit;   // Suit values from 1-4 (1 - spades, 2 - hearts, 3 - clubs, 4 - diamonds)
}Card;

// Using array stack implementation to define a deck of cards
typedef struct deck{
    Card *cards;    // Dynamic array of Card datatype 
    int top;        // Holds index of topmost card
}Deck;

// Defining structure of play table
typedef struct klondike{
    Deck tableau[TABLEAU_SIZE];         // Main playing area consisting of cards dealt in 7 columns at the start of the game
    Deck stock;                         // After dealing cards onto tableau, remaining cards left in stack make up stockpile
    Deck talon;                         // Cards from stockpile are drawn and placed into talon/waste pile to be used
    Deck foundation[FOUNDATION_SIZE];   // Win the game by filling up foundation piles wich corresponds to one of 4 suits
}Klondike;

// Initialization functions
void initKlon(Klondike *klon);
void initDeck(Deck *deck, int size);
void shuffle(Deck *deck);

// Operating functions
void push(Card card, Deck *deck);
Card pop(Deck *deck);

// Game functions
void displayKlon(Klondike *klon);

int main(){

    return 0;
}

// Sets up the solitaire game
void initKlon(Klondike *klon){

}

// Initializes deck before use
void initDeck(Deck *deck, int size){

}

// Shuffles the cards in a deck
void shuffle(Deck *deck){

}

// Pushes card to top of a deck
void push(Card card, Deck *deck){

}

// Removes card from top of stack and returns
Card pop(Deck *deck){

}

// Displays cards to terminal
void displayKlon(Klondike *klon){

}