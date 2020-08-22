#include<iostream>
using namespace std;
#include<string>
# include<algorithm>
/*
bool compare(string a, string b){
		if(a.length()==b.length()){ // if same length then
			return a<b; //then lexographical comparision
		}
		return a.length()>b.length();// the largest should be to the right or top
	}
*/
int main(){
	int n;
	cout<<"Input the number of strings"<<endl;
	cin>>n;
	cin.get();
	string s1[1000];
	cout<<"And now the strings"<<endl;
	for(int i=0; i<n; i++){
		s1[i]=getline();
	}

	return 0;

}