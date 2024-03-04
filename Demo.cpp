/*
 * CPP course Exercise 1.
 * Author: Benjamin Saldman.
 * A demo program.
 */

#include "morse.hpp"
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

int main()
{
    cout << ariel::encode("This is an encoded message") << endl;
    // Should print: "- .... .. ... / .. ... / .- -. / . -. -.-. --- -.. . -.. / -- . ... ... .- --. ."

    cout << ariel::encode("Hello, World") << endl;
    // Should print: ".... . .-.. .-.. --- --..-- / .-- --- .-. .-.. -.."

    cout << ariel::decode(".... . .-.. .-.. --- --..-- / .-- --- .-. .-.. -.. -.-.--") << endl;
    // Should print: "HELLO, WORLD"

    try
    {
        cout << ariel::encode("An error message!") << endl; // Exception - a message contains only English letters, spaces and numbers.
    }
    catch (exception &ex)
    {
        cout << "caught exception: " << ex.what() << endl; // Should print "Invalid message".
    }
}