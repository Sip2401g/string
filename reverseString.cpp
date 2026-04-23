#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Hello World";
    for(int s = str.size()-1; s >= 0; s--){
        cout<<str[s];
    }

}