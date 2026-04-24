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
/* my logic
 string str = "she was pretty";
 int count = str.size();
 for(int i =0; i<str.size();i++){
 if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u' || str[i])==' '){  yaha pr capital vowels bhi consonant hote hai isileye ye thoda galat tha
 count--;
}}
cout<<count;

*/
