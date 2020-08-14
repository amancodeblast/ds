#include<iostream>
using namespace std;
int main(){
	char c[10][10];
	c[0][0]='a';
	char a [][10]= {{'a','b','c','\0'},{'d','e','f','\0'},{'g','h','i','\0'}};
	char b [][10] = {"abc","def","ghi"};
	cout<<b[1];
	cout<<a[2];
	//this will print a with some garbage value 
	cout<<c[0];
	return 0;
}