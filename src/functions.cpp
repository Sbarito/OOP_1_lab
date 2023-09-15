#include <vector>
#include "includes.h"

bool valid_false(char symbol) {
    vector<char> symbols {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '};
    int flag = 0;
    for (int i = 0; i < symbols.size(); i++) {
        if (symbols[i] == symbol) {
                flag = 1;
                break;
        };
    }
    return !(flag == 1);
}

int findVowels(string stringUser) {
        int numberOfVowels = 0;
        extern bool valid_false(char symbol);
        extern bool true_vowel(char symbol);
        for(int i = 0; i < stringUser.size(); ++i) {
                if (valid_false(stringUser[i])){
                        numberOfVowels = -1;
                        break;
                }
                if(true_vowel(stringUser[i]))
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

bool true_vowel(char symbol) {
    return ((symbol == 'a') || (symbol == 'e') || (symbol == 'y') || (symbol == 'u') || (symbol == 'i') || (symbol == 'o'));
}