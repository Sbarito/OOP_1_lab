string output(int numberOfVowels) {
    if (numberOfVowels == -1) {
            return "Invalid input";
        } else {
            return "Number of vowels: " + to_string(numberOfVowels);
        }
}