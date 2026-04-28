#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "listen";
    string str2 = "silent";

    // Step 1: Length check
    if(str1.size() != str2.size()) {
        cout << "Not Anagram";
        return 0;
    }

    // Step 2: Check each character
    for(int i = 0; i < str1.size(); i++) {
        bool found = false;

        for(int j = 0; j < str2.size(); j++) {
            if(str1[i] == str2[j]) {
                str2[j] = '#';  // mark as used
                found = true;
                break;
            }
        }

        if(!found) {
            cout << "Not Anagram";
            return 0;
        }
    }

    cout << "Anagram";
}