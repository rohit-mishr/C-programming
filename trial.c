#include<stdio.h>
#include <stdlib.h>
#include <time.h>

#define simulation_rounds 1000000
#define numCards 52 
#define one_hand 7 
#define MAX_SIZE 100

typedef enum{clubs, diamonds, hearts, spades} Suit; 

typedef struct{
    Suit suit; 
    short pips; 
} Card;


void shuffleDeck(Card *deck) {
    srand(time(NULL));
    for(int i = numCards-1; i >0;i--){
        int j = rand()%(i+1);
        Card temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;

    }
}

int dealncheck(Card *deck) {
    int count[13] = {0};
    for (int i = 0; i<one_hand; i++){
        count[deck[i].pips]++;
    }

    int two = 0, three = 0, four = 0; 
    for (int j = 0; j< 13;j++){
        if (count[j] == 2)
            two++; 
        if(count[j]==3)
            three++; 
        if(count[j]==4)
            four++;
    }

    if (four>0)
        return 4; /*four of a kind*/
    if (three >0 && two > 0)
        return 5; /*full house*/
    if (three >0)
        return 3; /*three of a kind*/
    if (two > 1)
        return 2; /*two pair*/
    if (two ==1)
        return 1;/*one pair*/
    
    return 0; 
}

int main(){
    Card deck[numCards];
    int cardIndex = 0; 
    for(int suit = clubs; suit <= spades; suit ++){
        for(int pips = 0; pips < 13; pips++){
            deck[cardIndex].suit = suit; 
            deck[cardIndex].pips = pips;
            cardIndex++; 
        }
    }
    shuffleDeck(deck);
    int pattern[6] = {0};
    char pattern_disc[6][MAX_SIZE] = {"no pattern","one pair","two pair","three of a kind","four of a kind","full house"};
    
    for (int t = 0; t<simulation_rounds; t++){
            pattern[dealncheck(deck)] ++; 

    }

    for (int i = 0; i < 6; i++) {
        printf("probability of %s is %lf, there are %d combinations\n", pattern_disc[i], pattern[i]/1000000.0, pattern[i]);
    }

    return 0;

}
