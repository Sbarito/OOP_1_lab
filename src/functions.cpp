#include <vector>
#include "includes.h"

bool validSymbol(char symbol) {
    vector<char> symbols {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '};
    for (int i = 0; i < symbols.size(); i++) {
        if (symbols[i] == symbol) {
                return false;
        };
    }
    return true;
}

extern bool validSymbol(char symbol);
extern bool isVowel(char symbol);

int findVowels(string stringUser) {
    int numberOfVowels = 0;
    for(int i = 0; i < stringUser.size(); ++i) {
        if (validSymbol(stringUser[i])){
                numberOfVowels = -1;
                break;
        }
        if(isVowel(stringUser[i]))
            numberOfVowels += 1;
    }
    return numberOfVowels;
}

string output(int numberOfVowels) {
    if (numberOfVowels == -1) {
            return "Invalid input";
        } else {
            return "Number of vowels: " + to_string(numberOfVowels);
        };
}

extern bool isVowel(char symbol) {
    return ((symbol == 'a') || (symbol == 'e') || (symbol == 'y') || (symbol == 'u') || (symbol == 'i') || (symbol == 'o'));
}