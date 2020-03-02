#include <gtest/gtest.h>
#include <webquery/sqlparser.hpp>

#include <sstream>

using namespace ltc::webquery;

class test_sqlparser : public ::testing::Test
{
public:
    void SetUp() {}
    void TearDown() {}
};

TEST_F(test_sqlparser, test_sql_token)
{
    std::stringstream ss("select * from mytable;");
    sql_token tok;
    ss >> tok;
    ASSERT_EQ(tok.type(), sql_token_type::SELECT);
}
