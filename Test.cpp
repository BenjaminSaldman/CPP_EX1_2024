#include "doctest.h"
#include "morse.hpp"
using namespace ariel;
#include <string>
using namespace std;

/*
Example for using doctest:
The following test should pass successfully.
*/
TEST_CASE("Good inputs")
{
    CHECK(encode("This is an encoded message") == "- .... .. ... / .. ... / .- -. / . -. -.-. --- -.. . -.. / -- . ... ... .- --. .");
    CHECK(encode("Hello, World") == ".... . .-.. .-.. --- --..-- / .-- --- .-. .-.. -..");
    CHECK(decode(".... . .-.. .-.. --- --..-- / .-- --- .-. .-.. -.. -.-.--") == "HELLO, WORLD");
    CHECK(decode("- .... .. ... / .. ... / .- -. / . -. -.-. --- -.. . -.. / -- . ... ... .- --. .") == "THIS IS AN ENCODED MESSAGE");
}
TEST_CASE("Bad inputs")
{
    CHECK_THROWS(encode("An error message!"));
    CHECK_THROWS(encode(""));
    CHECK_THROWS(encode("!"));
}
// Add more tests here.
