#include <gtest/gtest.h>
#include "../src/includes.h"
#include "../src/function_first.h"
#include "../src/function_second.h"
#include "../src/function_third.h"
#include "../src/function_fourth.h"


TEST(isVowel, vowel) {
  // arrange 
  char symbol = 'a';

  // act
  bool vowel = true_vowel(symbol);

  // assert
  EXPECT_EQ(vowel, true);
}

TEST(isVowel, capitalLetter) {
  // arrange 
  char symbol = 'A';

  // act
  bool capitalLetter = true_vowel(symbol);

  // assert
  EXPECT_EQ(capitalLetter, false);
}

TEST(isVowel, latin) {
  // arrange 
  char symbol = 'а';

  // act
  bool latin = true_vowel(symbol);

  // assert
  EXPECT_EQ(latin, false);
}

TEST(isVowel, consonant) {
  // arrange 
  char symbol = 'b';

  // act
  bool consonant = true_vowel(symbol);

  // assert
  EXPECT_EQ(consonant, false);
}

TEST(isVowel, space) {
  // arrange 
  char symbol = ' ';

  // act
  bool space = true_vowel(symbol);

  // assert
  EXPECT_EQ(space, false);
}

TEST(isVowel, number) {
  // arrange 
  char symbol = '9';

  // act
  bool number = true_vowel(symbol);

  // assert
  EXPECT_EQ(number, false);
}

// ================================================================================= //

TEST(findVowel, vowel) {
  // arrange 
  string sentence = "abpslo";

  // act
  int vowel = findVowels(sentence);

  // assert
  EXPECT_EQ(vowel, 2);
}

TEST(findVowel, vowel_with_space) {
  // arrange 
  string sentence = "abpsl o";

  // act
  int vowel = findVowels(sentence);

  // assert
  EXPECT_EQ(vowel, 2);
}

TEST(findVowel, consonant) {
 // arrange 
  string sentence = "bbb";

  // act
  int vowel = findVowels(sentence);

  // assert
  EXPECT_EQ(vowel, 0);
}

TEST(findVowel, space) {
 // arrange 
  string sentence = " ";

  // act
  int vowel = findVowels(sentence);

  // assert
  EXPECT_EQ(vowel, 0);
}

// ================================================================================= //

TEST(isValidity, capitalLetter) {
  // arrange 
  string sentence = "Abpsl o";

  // act
  int vowel = findVowels(sentence);

  // assert
  EXPECT_EQ(vowel, -1);
}

TEST(isValidity, latin) {
  // arrange 
  string sentence = "абсд";

  // act
  int vowel = findVowels(sentence);

  // assert
  EXPECT_EQ(vowel, -1);
}

TEST(isValidity, number) {
 // arrange 
  string sentence = "976";

  // act
  int vowel = findVowels(sentence);

  // assert
  EXPECT_EQ(vowel, -1);
}

// ================================================================================= //

TEST(isValid, capitalLetter) {
  // arrange 
  char symbol = 'A';

  // act
  bool capitalLetter = valid_false(symbol);

  // assert
  EXPECT_EQ(capitalLetter, true);
}

TEST(isValid, space) {
  // arrange 
  char symbol = ' ';

  // act
  bool space = valid_false(symbol);

  // assert
  EXPECT_EQ(space, false);
}

TEST(isValid, letter) {
  // arrange 
  char symbol = 'a';

  // act
  bool letter = valid_false(symbol);

  // assert
  EXPECT_EQ(letter, false);
}

TEST(isValid, latin) {
  // arrange 
  char symbol = 'а';

  // act
  bool latin = valid_false(symbol);

  // assert
  EXPECT_EQ(latin, true);
}

TEST(isValid, number) {
  // arrange 
  char symbol = '9';

  // act
  bool number = valid_false(symbol);

  // assert
  EXPECT_EQ(number, true);
}

// ================================================================================= //

TEST(output, indexTrue) {
 // arrange 
  int numberOfVowels = 6;

  // act
  string msg = output(numberOfVowels);

  // assert
  EXPECT_EQ(msg, ("Number of vowels: " + to_string(numberOfVowels)));
}

TEST(output, indexFalse) {
 // arrange 
  int numberOfVowels = -1;

  // act
  string msg = output(numberOfVowels);

  // assert
  EXPECT_EQ(msg, ("Invalid input"));
}


int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}