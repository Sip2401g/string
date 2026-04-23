#include<iostream>
using namespace std;
int main(){
    string str = "kMadam";
    bool isPalindrome = true;
    for(int i =0; i<str.size();i++){
        if(tolower(str[i])!=tolower(str[str.size()-1-i])){
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
}