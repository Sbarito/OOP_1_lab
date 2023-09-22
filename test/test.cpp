#include <gtest/gtest.h>
#include "includes.h"
#include "functions.h"


TEST(isVowel, vowel) {
  // arrange 
  char symbol = 'a';

  // act
  bool vowel = isVowel(symbol);

  // assert
  ASSERT_EQ(vowel, true);
}

TEST(isVowel, capitalLetter) {
  // arrange 
  char symbol = 'A';

  // act
  bool capitalLetter = isVowel(symbol);

  // assert
  ASSERT_EQ(capitalLetter, false);
}

TEST(isVowel, latin) {
  // arrange 
  char symbol = 'а';

  // act
  bool latin = isVowel(symbol);

  // assert
  ASSERT_EQ(latin, false);
}

TEST(isVowel, consonant) {
  // arrange 
  char symbol = 'b';

  // act
  bool consonant = isVowel(symbol);

  // assert
  ASSERT_EQ(consonant, false);
}

TEST(isVowel, space) {
  // arrange 
  char symbol = ' ';

  // act
  bool space = isVowel(symbol);

  // assert
  ASSERT_EQ(space, false);
}

TEST(isVowel, number) {
  // arrange 
  char symbol = '9';

  // act
  bool number = isVowel(symbol);

  // assert
  ASSERT_EQ(number, false);
}

// ================================================================================= //

TEST(findVowel, vowel) {
  // arrange 
  string sentence = "abpslo";

  // act
  int vowel = findVowels(sentence);

  // assert
  ASSERT_EQ(vowel, 2);
}

TEST(findVowel, vowel_with_space) {
  // arrange 
  string sentence = "abpsl o";

  // act
  int vowel = findVowels(sentence);

  // assert
  ASSERT_EQ(vowel, 2);
}

TEST(findVowel, consonant) {
 // arrange 
  string sentence = "bbb";

  // act
  int vowel = findVowels(sentence);

  // assert
  ASSERT_EQ(vowel, 0);
}

TEST(findVowel, space) {
 // arrange 
  string sentence = " ";

  // act
  int vowel = findVowels(sentence);

  // assert
  ASSERT_EQ(vowel, 0);
}

// ================================================================================= //

TEST(isValidity, capitalLetter) {
  // arrange 
  string sentence = "Abpsl o";

  // act
  int vowel = findVowels(sentence);

  // assert
  ASSERT_EQ(vowel, -1);
}

TEST(isValidity, latin) {
  // arrange 
  string sentence = "абсд";

  // act
  int vowel = findVowels(sentence);

  // assert
  ASSERT_EQ(vowel, -1);
}

TEST(isValidity, number) {
 // arrange 
  string sentence = "976";

  // act
  int vowel = findVowels(sentence);

  // assert
  ASSERT_EQ(vowel, -1);
}

// ================================================================================= //

TEST(isValid, capitalLetter) {
  // arrange 
  char symbol = 'A';

  // act
  bool capitalLetter = validSymbol(symbol);

  // assert
  ASSERT_EQ(capitalLetter, true);
}

TEST(isValid, space) {
  // arrange 
  char symbol = ' ';

  // act
  bool space = validSymbol(symbol);

  // assert
  ASSERT_EQ(space, false);
}

TEST(isValid, letter) {
  // arrange 
  char symbol = 'a';

  // act
  bool letter = validSymbol(symbol);

  // assert
  ASSERT_EQ(letter, false);
}

TEST(isValid, latin) {
  // arrange 
  char symbol = 'а';

  // act
  bool latin = validSymbol(symbol);

  // assert
  ASSERT_EQ(latin, true);
}

TEST(isValid, number) {
  // arrange 
  char symbol = '9';

  // act
  bool number = validSymbol(symbol);

  // assert
  ASSERT_EQ(number, true);
}

// ================================================================================= //

TEST(output, indexTrue) {
 // arrange 
  int numberOfVowels = 6;

  // act
  string msg = output(numberOfVowels);

  // assert
  ASSERT_EQ(msg, ("Number of vowels: " + to_string(numberOfVowels)));
}

TEST(output, indexFalse) {
 // arrange 
  int numberOfVowels = -1;

  // act
  string msg = output(numberOfVowels);

  // assert
  ASSERT_EQ(msg, ("Invalid input"));
}


int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}