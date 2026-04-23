#include<iostream>
using namespace std;
int main(){
    string s = "shuuUubhaaam";
    int count = 0;
    for(int i = 0; i<s.size();i++){
        char ch = tolower(s[i]); //tolower() yaha pr kisi bhi eelemnt ko small krta hai q ki yaha caps consider nhi hota
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') // fir ek ek kar ke sab ko char mai store krn apadta hai
            count++;
    }
    cout<<count;
}


//alternate kya tha jab capital nhi tha tab
int count =0;
for(int i = 0 ;i<s.size();i++){
if (s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i');
