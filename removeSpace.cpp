#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "i miss her so much";
    string result = "";
    for(int i =0; i<str.size();i++){
        if(str[i]!=' '){                // use single quotes for character and double quotes for string
            result+=str[i];
        }
    }
    cout<<result<<endl;
}

/*  one can also solve this using the continue (skip one iteration statement)


 string str = "i miss her so much";
    string result = "";
    for(int i =0; i<str.size();i++){
        if(str[i]==' '){
            continue;
        }
        result+=str[i];
    }
    cout<<result<<endl;







*/