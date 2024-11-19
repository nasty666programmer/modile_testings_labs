// src/main/cpp/math_utils_test.cpp
#include <gtest/gtest.h>
#include "math_utils.h"

class MathUtilsTest : public ::testing::Test {
protected:
    MathUtils mathUtils;
};

TEST_F(MathUtilsTest, FactorialTest) {
    EXPECT_EQ(mathUtils.factorial(0), 1); 
    EXPECT_EQ(mathUtils.factorial(1), 1);  
    EXPECT_EQ(mathUtils.factorial(5), 120); 
    EXPECT_THROW(mathUtils.factorial(-1), std::invalid_argument);
}

TEST_F(MathUtilsTest, GcdTest) {
    EXPECT_EQ(mathUtils.gcd(54, 24), 6); 
    EXPECT_EQ(mathUtils.gcd(0, 5), 5);   
    EXPECT_EQ(mathUtils.gcd(5, 0), 5);   
    EXPECT_EQ(mathUtils.gcd(7, 13), 1);  
}

TEST_F(MathUtilsTest, IsPrimeTest) {
    EXPECT_FALSE(mathUtils.isPrime(0));  
    EXPECT_FALSE(mathUtils.isPrime(1));  
    EXPECT_TRUE(mathUtils.isPrime(2));   
    EXPECT_TRUE(mathUtils.isPrime(13));  
    EXPECT_FALSE(mathUtils.isPrime(15)); 
    EXPECT_TRUE(mathUtils.isPrime(29));  
}
