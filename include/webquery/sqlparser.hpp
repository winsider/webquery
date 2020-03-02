#pragma once

#include <string>
#include <vector>
#include <iostream>

namespace ltc { namespace webquery {

    class sql_statement
    {

    };

    enum class sql_token_type
    {
        NONE = 0,
        SELECT,
        DISTINCT,
        ALL,
        ASTERISK = '*',
        AS,
        identifier,
        column_expr,
        COMMA = ',',
        PERIOD = '.',
        FROM
    };

    class sql_token final
    {
    public:
        sql_token() = default;
        friend std::istream& operator>>(std::istream& is, sql_token& tok);

        sql_token_type type() const { return m_type; }

    private:
        std::string m_value;
        sql_token_type m_type;
    };

    class sql_tokenizer
    {
    public:
        friend std::istream& operator>>(std::istream&, sql_tokenizer&);

    private:
        std::vector<sql_token> m_tokens;
    };

    class sql_parser
    {
    public:

    };


}}