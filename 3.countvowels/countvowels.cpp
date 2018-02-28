#include<iostream>
#include<string>
using namespace std;

/*
    Count Vowels – Enter a string and the program counts the number of vowels in the text. 
    For added complexity have it report a sum of each vowel found.
 */

int main(){
    string s;
    int vow[5]={0,0,0,0,0}; //a e i o u
    while(cin){
        getline(cin,s);
        if(s=="")
        break;
        for(int i=0;i<s.length();i++){
            char w=s[i];
            switch(w){
                case 'a':
                    vow[0]++;
                    break;
                case 'e':
                    vow[1]++;
                    break;
                case 'i':
                    vow[2]++;
                    break;
                case 'o':
                    vow[3]++;
                    break;
                case 'u':
                    vow[4]++;
                    break;
                default:
                    break;
            }
        }

    }

    cout<<"a: "<<vow[0]<<endl;
    cout<<"e: "<<vow[1]<<endl;
    cout<<"i: "<<vow[2]<<endl;
    cout<<"o: "<<vow[3]<<endl;
    cout<<"u: "<<vow[4]<<endl;
}