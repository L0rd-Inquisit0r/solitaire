#include<stdio.h>
#include<stdlib.h>

#define TABLEAU_SIZE 7              // Number of columns in tableau 
#define FOUNDATION_SIZE 4           // 1 deck for each suit
#define MAX_DECK_SIZE 52            // Total number of cards
#define SUIT_SIZE 13                // Number of cards per suit
#define MAX_TABLEAU_COLUMN_SIZE 21  // Possible max number of cards in a tableau column 

// Enum for card values
typedef enum{
    A = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING
}CardValue;

// Enum for card suits
typedef enum{
    SPADES = 0, HEARTS, CLUBS, DIAMONDS
}CardSuit;

// Card data structure
typedef struct{
    CardValue value;
    CardSuit suit;
}Card;

// Deck struct with a dynamic size using array stack implementation
typedef struct{
    Card *cards;    // Dynamic array of Card datatype 
    int top;        // Holds index of topmost card
    int size;       // Max capacity for the deck
}Deck;

// Defining Klondike game structure
typedef struct{
    Deck tableau[TABLEAU_SIZE];         // Columns where cards are dealt at the start
    Deck stock;                         // Remaining cards after dealing into tableau
    Deck talon;                         // Cards drawn from stockpile, placed into talon (waste pile)
    Deck foundation[FOUNDATION_SIZE];   // Foundation piles for each suit
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
    deck->cards = (Card*) malloc(sizeof(Card) * size);  // allocates array depending on size in heap
    deck->top = -1;                                     // initializes top index as -1
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