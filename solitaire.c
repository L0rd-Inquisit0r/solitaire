#include<stdio.h>
#include<stdlib.h>

#define TABLEAU_SIZE 7              // Number of columns in tableau 
#define FOUNDATION_SIZE 4           // 1 deck for each suit
#define MAX_DECK_SIZE 52            // Total number of cards
#define SUIT_SIZE 13                // Number of cards per suit
#define STOCK_SIZE 24               // Number of cards in stock/talon
#define MAX_TABLEAU_COLUMN_SIZE 21  // Possible max number of cards in a tableau column 
#define EMPTY -1                    // Value of empty deck

// Enum for card values
typedef enum{
    ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING
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
    Deck deck;
    initDeck(&deck, MAX_DECK_SIZE);                     // Initializes shuffle deck
    Card card;                                          // Declares card template

    for(int suit = 0; suit < 4; suit++){
        for(int val = 1; val <= 13; val++){
            card.suit = suit;
            card.value = val;
            push(card, &deck);                          // Pushes card into shuffle deck
        }
    }

    shuffle(&deck);                                     // Shuffles shuffle deck

    for(int n = 0; n < TABLEAU_SIZE; n++){
        initDeck(&klon->tableau[n], MAX_TABLEAU_COLUMN_SIZE);   // Initializes each column in tableau
    }

    for(int n = 0; n < FOUNDATION_SIZE; n++){
        initDeck(&klon->foundation[n], SUIT_SIZE);      // Initializes each foundation deck
    }

    initDeck(&klon->stock, STOCK_SIZE);                 // Initializes stock deck
    initDeck(&klon->talon, STOCK_SIZE);                 // Initializes talon deck

    for(int n = 0; n < TABLEAU_SIZE; n++){
        for(int i = n; i < TABLEAU_SIZE; i++){
            push(pop(&deck), &klon->tableau[i]);        // Pops card from shuffle deck and pushes into tableau column
        }
    }

    for(int n = 0; n < STOCK_SIZE; n++){
        push(pop(&deck), &klon->stock);                 // Remaining cards from shuffle deck is pushed into stock
    }
}

// Initializes deck before use
void initDeck(Deck *deck, int size){
    deck->cards = (Card*) malloc(sizeof(Card) * size);  // allocates array depending on size in heap
    deck->top = EMPTY;                                  // initializes top index as -1
    deck->size = size;                                  // holds the maximum size of the deck
}

// Shuffles the cards in a deck
void shuffle(Deck *deck){

}

// Pushes card to top of a deck
void push(Card card, Deck *deck){
    if(deck->top + 1 < deck->size){     // Condition to check if deck is full
        deck->top++;                    // Increment top index
        deck->cards[deck->top] = card;  // Card is at top of deck 
    }
}

// Removes card from top of stack and returns
Card pop(Deck *deck){
    Card card;                              // Declaration of card template

    if(deck->top != EMPTY){                 // Condition to check if deck is not empty 
        card = deck->cards[deck->top--];    // Top card is assigned to card template
    }

    return card;                            // returns card value to calling funtion
}

// Displays cards to terminal
void displayKlon(Klondike *klon){

}