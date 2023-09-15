//4 var: finding vowels in a sentence

#include "src/includes.h"
#include "src/functions.h"



int main() {

    string stringUser;

    cout << "Enter your sentence: ";
    getline(std::cin, stringUser);

    int numberOfVowels = findVowels(stringUser);
    cout << output(numberOfVowels);
}