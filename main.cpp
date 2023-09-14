#include <iostream>
#include <string>

bool is_vowel(char c) {
    if ((c == 'a') || (c == 'e') || (c == 'y') || (c == 'u') || (c == 'i') || (c == 'o'))
    {
            return true;
    } else {
            return false;
    }
}

int main() {
    int num = 0;
    std::string str;
    std::cout << "Enter your sentence: ";
    std::getline(std::cin, str);

    for(int i = 0; i < str.size(); ++i) {
        if(is_vowel(str[i]))
            num+=1;
    }
    std::cout << num;
}