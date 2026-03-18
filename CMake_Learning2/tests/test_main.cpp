#include <gtest/gtest.h>

// Test cases for MyLib
TEST(MyLib, BasicTest) {
    EXPECT_EQ(1, 1);
}

// GTest main function
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}