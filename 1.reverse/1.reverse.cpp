#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"please enter a sentence, the program will reverse the entire sentence\n";
    getline(cin, s);
    for(int i=(s.length()-1);i>-1;--i){
        cout<<s[i];
    }
    cout<<"\n";
}