#include <iostream>
#include<string>
using namespace std;
int main() {
string str = "Preety LittlE Baby";
int count = str.size();
for(int i =0; i<str.size();i++){
    char ch = tolower(str[i]);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'|| ch==' ')
    count--;
    
}
cout<<count;
}