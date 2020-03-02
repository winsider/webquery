#include <webquery/sqlparser.hpp>

using namespace ltc::webquery;

namespace ltc { namespace webquery {

    std::istream& operator>>(std::istream &is, sql_token &tok)
    {
        return is;
    }

}}
