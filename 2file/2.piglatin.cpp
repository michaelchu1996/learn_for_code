#include<iostream>
#include<string>
using namespace std;
void inputfunction(string& s, bool& seein){
	while(seein){
		getline(cin,s);
		s.erase(s.length());
		for(int i=0;i<s.length();i++){
		if(s[i]==' ')
			break;
		if(i==s.length()-1)
			seein=false;
		}
		//if(seein==true)
		//cout<<"error, please enter one word ONLY\n";
	}
}

void swap(string &s){
	int p; //pivot
	bool yes=true; //yes=has at least 1 vowel, no!= have vowel
   /* Swap rule:
	* 1) find char before first vowel and threw to the last
	* 2) add "ay" by the end of string
	*/

	for(int i=0;i<s.length();i++){
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
			p=i;
			break;
		}
		if(i==(s.length()-1)){
			yes=false;
		}
	}
	if(yes!=true)
	return;
	if(p==0){
		s.insert(s.length(),"way");
		return;
	}
	for(int i=0;i<p;){
		string s1(1,s[i]);
		s.insert(s.length(),s1);
		s.erase(i,1);
		p--;
	}
	s.insert(s.length(),"ay");

}


int main(){
	string s;
	bool seein=true;	
	//cout<<"please enter one word only\n";
	while(cin){
	//inputfunction(s,seein);
	cin>>s;
	swap(s);
	cout<<s<<endl;
	}
	

}

