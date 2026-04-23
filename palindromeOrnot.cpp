#include<iostream>
using namespace std;
int main(){
    string str = "Madam";
    bool isPalindrome = true;
    for(int i =0; i<str.size();i++){
        if(tolower(str[i])!=tolower(str[str.size()-1-i])){ // yaha -i dia taki har iteration pe ek piche aa sake simultaneously i++ toh ho he rah hai
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

//alternate mai 2 pointer lagate hau

/* bool ispalindrome = true;
int start =0, end = str.size()-1;
while(start<end){
if(str[start]!= str[end]){
ispalindrome = false ;
break;
}
start++;
end--;
}
if(ispalindrome){
cout<<"palindrome";}
else{
cout<<"not";
}

*/
