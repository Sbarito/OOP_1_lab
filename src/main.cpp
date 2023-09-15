//4 var: finding vowels in a sentence

#include "includes.h"
#include "function_first.h"
#include "function_second.h"
#include "function_third.h"
#include "function_fourth.h"



int main() {

    string stringUser;

    cout << "Enter your sentence: ";
    getline(std::cin, stringUser);

    int numberOfVowels = findVowels(stringUser);
    cout << output(numberOfVowels);
}