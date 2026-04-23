#include<iostream>
using namespace std;
int main(){
    string s = "shuuUubhaaam";
    int count = 0;
    for(int i = 0; i<s.size();i++){
        char ch = tolower(s[i]);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            count++;
    }
    cout<<count;
}