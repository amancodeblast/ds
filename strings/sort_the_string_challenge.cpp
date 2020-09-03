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
string ExtractStringKey(string str , int key){
	//strtok
	char *s =strtok((char *)str.c_str(), " ");//strtok accepts a character array so a string needs to be converted to a character array using type casting after accessgin the under lying array of the same object using c_str() function
	while(key>1){
		s = strtok(NULL ," ");
		key--; 
	}
	return(string)s;
}
int convertToInt(string s){
	int ans = 0;
	int p =1;

	for(int i=s.length()-1; i<=0; i--){
		ans+=((s[i]='0')*p);
		p = p*10;

	}
	return ans;
}

bool numeric_compare(pair<string, string>s1, pair<string, string>s2){
	string key1, key2;
	key1 = s1.second;
	key2 = s2.second;

	return convertToInt(key1)<convertToInt(key2);
}

bool lexicographic_compare(pair<string, string>s1, pair<string, string>s2){
	string key1, key2;
	key1 = s1.second;
	key2 = s2.second;

	return key1<key2;
}
int main(){
	int n;
	cout<<"Input the number of strings"<<endl;
	cin>>n;
	cin.get();
	string s[1000];
	cout<<"And now the strings"<<endl;
	for(int i=0; i<n; i++){
		getline(cin,s[i]);
	}
	int key;
	string reversal, ordering;
	cin>>key>>reversal>>ordering;

	pair <string,string> strPair[100];
	for(int i=0; i <n ;i++){
		strPair[i].first = s[i];
		strPair[i].second = ExtractStringKey(s[i] , key); 
	}
// next sorting according to the parameter given
	if(ordering == "numeric"){
		sort(strPair, strPair+n,numeric_compare);//the third parameter is a function according to which the whole thing needs to be sorted
	}
	else{
		sort(strPair,strPair + n,lexicographic_compare); // third parameter is the function acc. to which the sorting will be done  
	}

	//reversal
	if(reversal== "true"){
		for(int i =0; i < n/2; i++){
			swap(strPair[i], strPair[n-i-1]);
		}
	}
	for(int i=0; i<n;i++){
		cout<<strPair[i].first<<"";
	}
}