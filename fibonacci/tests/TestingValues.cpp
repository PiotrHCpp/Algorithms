#include "TestingValues.hpp"

TestingValues::TestingValues(unsigned expected, unsigned argument, std::string msg)
    :   expected(expected), argument(argument), msg(msg)
    {}

std::ostream& operator<< (std::ostream& os, const TestingValues& tv) {
    os << "\nExpected value: " << tv.msg << ", argument: " << tv.argument;
    return os;
}
