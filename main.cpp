//4 var: finding vowels in a sentence

#include "includes.h"
#include "functions.h"



int main() {

    string stringUser;

    cout << "Enter your sentence: ";
    getline(std::cin, stringUser);

    int numberOfVowels = findVowels(stringUser);
    cout << output(numberOfVowels);
}