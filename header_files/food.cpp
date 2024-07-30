#include "food.h"

const char* RecommandMeAFood(char firstLetter){
    if(firstLetter == 'A' || firstLetter == 'a'){
        return "Apple";
    }else if(firstLetter == 'B' || firstLetter == 'b'){
        return "Banana";
    }else if(firstLetter == 'C' || firstLetter == 'c'){
        return "Candy";
    }else{
        return "I don't know";
    }

}