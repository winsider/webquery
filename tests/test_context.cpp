#include <gtest/gtest.h>

class test_context : public ::testing::Test
{
public:
    void SetUp() {}
    void TearDown() {}
};

TEST_F(test_context, init)
{
    ASSERT_TRUE(true);
}
