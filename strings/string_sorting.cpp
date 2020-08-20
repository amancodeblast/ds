#include<iostream>
using namespace std;
#include<string>
# include<algorithm>

bool compare(string a, string b){
		if(a.length()==b.length()){ // if same length then
			return a<b; //then lexographical comparision
		}
		return a.length()>b.length();// the largest should be to the right or top

	}
int main(){
	int n;
	cin>>n;
	cin.get();

	string s[1000]; 

	for(int i=0;i <n ; i++){
		getline(cin, s[i]);
	}
	//sorting the array
	sort(s,s+n,compare);

	//output of the string 
	for(int i=0;i<n;i++){
		cout<<s[i]<<endl;

	}

	return 0;

}