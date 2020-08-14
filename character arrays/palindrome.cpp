#include<iostream>
using namespace std;
// c++ has an stl function called as cin.getline(_,_,_);
void isPalindrome(char a[]){
	int i= 0;
	int j= strlen(a)-1;
	while(i<j){
		if(a[i]!=a[j]){
			cout<<"Not palindrome"<<endl;
			return;
		}
		i++;
		j--;
	}
	cout<<"palindrome"<<endl;
	return;
}

int main(){
	//create a character array and pass it to a function to check if the string is palindrome or not
	char ch[]="thiht";	
	isPalindrome(ch,4);
	return 0;
}