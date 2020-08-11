#include "gtest/gtest.h"
#include "IsPrimeNumber.hpp"

TEST(IsPrimeNumberTests, returnFalseIfPassed0) {
    EXPECT_EQ(false, isPrimeNumber(0));
}
TEST(IsPrimeNumberTests, returnFalseIfPassed1) {
    EXPECT_EQ(false, isPrimeNumber(1));
}
TEST(IsPrimeNumberTests, returnTrueIfPassed2) {
    EXPECT_EQ(true, isPrimeNumber(2));
}
TEST(IsPrimeNumberTests, returnTrueIfPassed3) {
    EXPECT_EQ(true, isPrimeNumber(3));
}
TEST(IsPrimeNumberTests, returnFalseIfPassed4) {
    EXPECT_EQ(false, isPrimeNumber(4));
}
TEST(IsPrimeNumberTests, returnTrueIfPassed5) {
    EXPECT_EQ(true, isPrimeNumber(5));
}