#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Shubham";
    int maxCount =0;
    for(int i = 0; i<str.size();i++){
        int count =0;
        for (int j =0; j<str.size();j++){
            if(str[i]==str[j]){
                count++;
                maxCount = max(maxCount,count);    
            }
        }
    }
    cout<<maxCount;
    
}