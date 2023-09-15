#include <vector>

bool valid_false(char symbol) {
    vector<char> symbols {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' '};
    int flag = 0;
    for (int i = 0; i < symbols.size(); i++) {
        if (symbols[i] == symbol) {
                flag = 1;
                break;
        }
    }
    if (flag == 1) {
        return false;
    } else {
        return true;
    }
}