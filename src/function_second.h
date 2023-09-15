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