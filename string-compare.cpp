#include <gtest/gtest.h> // googletest header file
#include "func.h"
#include <string>
using std::string;

const char *actualValTrue  = "hello gtest";
const char *actualValFalse = "hello world";
const char *expectVal      = "hello gtest";

TEST(StrCompare, CStrEqual) {
    EXPECT_STREQ(expectVal, actualValTrue);
}

TEST(StrCompare, CStrNotEqual) {
    EXPECT_STREQ(expectVal, actualValFalse);
}

TEST(AddTest, Positive)
{
	EXPECT_EQ(2, add(1,1));
	EXPECT_EQ(10,add(5,5));
}

TEST(AddTest, Negative)
{
	EXPECT_EQ(0, add(1,1));
}


