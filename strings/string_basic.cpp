#include<iostream>
using namespace std;
#include<string>
int main(){
	//String Init
	string s0;
	string s1("Hello");

	string s2 = "Hello World";
	string s3(s2);
	string s4 = s3;

	char a[] = {'a','b','c','d'};
	string s5(a);

	cout<<s0<<endl;
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
	cout<<s4<<endl;
	cout<<s5<<endl;

	if(s0.empty()){
		cout<<"s0 is an empty string"<<endl;
	}
	//Append 
	s0.append("I love c++");
	cout<<s0<<endl;
	s0+=" and python";
	cout<<s0<<endl;

	//remove
	cout<<s0.length()<<endl;
	s0.clear();
	cout<<s0.length()<<endl;

	//compare two strings
	s0="Apple";
	s1="Mango";
	cout<<s1.compare(s1)<<endl; // Return an integer ==0, <0, >0

	//Operator
	if(s0<s1){
		cout<<"Mango is lext greater than apple";

	}
	cout<<s1[0]<<endl;
	//find substrings 
	string s= "I want to have apple juice";
	int idx = s.find("apple");
	cout<<idx<<endl;
	//Remove a word 
	string word = "Apple";
	int len =word.length();
	cout<<s<<endl;
	s.erase(idx, len+1);
	cout<<s<<endl;

	//Iterate over all the characters in the strings 
	for(int i=0; i <s1.length();i++ ){
		cout<<s1[i]<<":";
	}	
	cout<<endl;

	//Iterator
for(auto it =s1.begin(); it!=s1.endl();it++){
	cout<<(*it)<<",";
}

for(string::iterator it =s1.begin(); it!=s1.endl();it++){
	cout<<(*it)<<",";
}
cout<<endl;
//for each loop 
for(auto c:s1){
	cut<<c<<",";
}
for(char c:s1){
	cout<<c<<",";
}


	return 0;

}