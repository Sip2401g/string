#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "hello world";

    // Find the space between the two words
    int spaceIndex = str.find(' ');

    // First word = "hello"
    string first = str.substr(0, spaceIndex);

    // Second word = "world"
    string second = str.substr(spaceIndex + 1);

    // Print them in reverse order
    cout << second << " " << first << endl;

    return 0;
}
