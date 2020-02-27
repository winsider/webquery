#include <webquery/context.hpp>
#include <iostream>
#include <string>

using namespace ltc::webquery;

int main(int argc, char *argv[])
{
    std::cout << "webquery\n";
    std::string s;
    context ctx;
    while (std::getline(std::cin, s))
    {
        std::cout << s << " ok\n";
    }
    return 0;
}
