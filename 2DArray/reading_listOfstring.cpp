#include<iostream>
using namespace std;
int main(){
	cout<<"Enter the no. of lines you would like to enter"<<endl;
	int n;
	char a[100][1000];
	cin>>n;
	//to consume the enter after the value of n is feeded
	cin.get();
	for(int i=0;i<n;i++){
		cin.getline(a[i], 1000);//the second parameter is the maximum no. of character allowed in a line
	}
	cout<<"The strings you entered are as follows: "<<endl;
	//printing the inputed array
	for(int i =0; i< n; i++){
		cout<<a[i]<<endl;
	}
	return 0;
}