#include "hello/hello.h"
#include "hello/hello1.h"

#include "gtest/gtest.h"

TEST(Hello, Hello0)
{
    EXPECT_EQ(0, Hello());
}

TEST(IsOdd, IsOdd3)
{
    EXPECT_TRUE(IsOdd(3)) << "3 is odd!";
}

// 反案例
TEST(IsOdd, IsOdd8)
{
    EXPECT_TRUE(!IsOdd(8)) << "8 is not odd!";
}

TEST(Sum, Sum1_2)
{
    int a = 10;
    int b = 11;
    EXPECT_EQ(Sum(a, b), 21);
    a = 20;
    b = 23;
    EXPECT_EQ(Sum(a, b), 43);
}