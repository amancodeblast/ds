#include<iostream>
using namespace std;
#include<cstring>
//# include<algorithm>

int main(){
	char s[1000]= "today is a rainy day";
	char *ptr = strtok(s," "); // the first time it should be a character arrray and rest should be null until the ptr retruns a NULL itself 
	//i.e when there is nothing left in the character array

	cout<<ptr<<endl;

	while(ptr!=NULL){
		ptr = strtok(NULL," "); // the second token is the delimeter
		cout<<ptr<<endl;
	}
	




	return 0;

}