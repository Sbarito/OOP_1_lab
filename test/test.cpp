#include "four.h"
#include <gtest/gtest.h>
#include "string"
#include <stdexcept>

using namespace four;

// ================================================================================= //

TEST(setGet, setValueTest) {
  // arrange 
  Four firstVariable;
  firstVariable.setValue("1111");

  // act
  bool equals = firstVariable.getValue() == 1111;

  // assert
  ASSERT_EQ(equals, true);
}

// ================================================================================= //

TEST(operatorCopy, copy) {
  // arrange 
  Four firstVariable("1111");
  Four secondVariable("2222");

  // act
  secondVariable = firstVariable;

  // assert
  ASSERT_EQ(secondVariable.getValue(), firstVariable.getValue());
}

// ================================================================================= //

TEST(operatorEquals, operatorCopy) {
  // arrange 
  Four firstVariable("1111");
  Four Variable("1111");

  // act
  bool equals = firstVariable == Variable;

  // assert
  ASSERT_EQ(equals, true);
}

TEST(operatorEquals, equals) {
  
  Four equalsFirstVariable("1001");
  Four equalsSecondVariable("1001");
  
  // arrange 
  bool equals = equalsFirstVariable == equalsSecondVariable;;

  // assert
  ASSERT_EQ(equals, true);
}

TEST(operatorEquals, notEquals) {

  Four firstVariable("1111");
  Four secondVariable("131");
  
  // arrange 
  bool equals = firstVariable == secondVariable;

  // assert
  ASSERT_EQ(equals, false);
} 

// ================================================================================= //

TEST(operatorLessThan, differentLentght) {
  
  Four firstVariable("1111");
  Four secondVariable("131");
   
  // arrange 
  bool result = (secondVariable < firstVariable);

  // assert
  ASSERT_EQ(result, true);
}

TEST(operatorLessThan, equalsLentght) {

  Four firstVariable("1111");
  Four equalsFirstVariable("1001");
  
  // arrange 
  bool result = (equalsFirstVariable < firstVariable);

  // assert
  ASSERT_EQ(result, false);
}

TEST(operatorLessThan, equalsSymbol) {

  Four equalsFirstVariable("1001");
  Four equalsSecondVariable("1001");
  // arrange 
  bool result = (equalsSecondVariable < equalsFirstVariable);

  // assert
  ASSERT_EQ(result, false);
}

// ================================================================================= //

TEST(operatorGreaterThan, differentLentght) {

  Four firstVariable("1111");
  Four secondVariable("131");

  // act
  bool result = (firstVariable > secondVariable);

  // assert
  ASSERT_EQ(result, true);
}

TEST(operatorGreaterThan, equalsLentght) {

  Four firstVariable("1111");
  Four equalsFirstVariable("1001");

  // act
  bool result = (firstVariable > equalsFirstVariable);

  // assert
  ASSERT_EQ(result, true);
}

TEST(operatorGreaterThan, equalsSymbol) {

  Four equalsFirstVariable("1001");
  Four equalsSecondVariable("1001");

  // act
  bool result = (equalsFirstVariable > equalsSecondVariable);

  // assert
  ASSERT_EQ(result, false);
}

// ================================================================================= //

TEST(operatorPlus, equalsLenghtWithoutRank) {
  
  Four firstVariable("1111");
  Four equalsFirstVariable("1001");

  // act
  Four result = (firstVariable + equalsFirstVariable);

  // assert
  ASSERT_EQ(result.getValue(), 2112);
}

TEST(operatorPlus, differentLenghtWithoutRank) {

  Four firstVariable("1111");
  Four secondVariable("131");
  
  // act
  Four result = (firstVariable + secondVariable);

  // assert
  ASSERT_EQ(result.getValue(), 1302);
}

TEST(operatorPlus, zero) {
  Four firstVariable("1");
  Four secondVariable("0");
  
  // act
  Four result = (firstVariable - secondVariable);

  // assert
  ASSERT_EQ(result.getValue(), 1);

}

// ================================================================================= //

TEST(operatorMinus, equalsLenghtWithoutRank) {

  Four firstVariable("1111");
  Four equalsFirstVariable("1001");

  // act
  Four result = (firstVariable - equalsFirstVariable);

  // assert
  ASSERT_EQ(result.getValue(), 110);
}

TEST(operatorMinus, differentLenghtWithRank) {
  Four firstVariable("1111");
  Four secondVariable("131");
  
  // act
  Four result = (firstVariable - secondVariable);

  // assert
  ASSERT_EQ(result.getValue(), 320);

}

TEST(operatorMinus, zero) {
  Four firstVariable("1");
  Four secondVariable("1");
  
  // act
  Four result = (firstVariable - secondVariable);

  // assert
  ASSERT_EQ(result.getValue(), 0);

}


int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
