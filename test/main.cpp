#include <gtest/gtest.h>
#include <venus/all.h>

// 测试集为 MyTest，测试案例为 Sum
TEST(MyTest, Sum)
{
    EXPECT_EQ(add(1, 4), 5);
}


int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
