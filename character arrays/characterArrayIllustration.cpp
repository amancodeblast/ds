#include<iostream>
using namespace std;
int main(){
	//first way to define a character array
	char ch[100];
	char a[10]={'a','b','c'};
	char b[10] = {'a','b','c','\0'}; // recommended to end a character array with a null character
	//difference between integer array and character array
	cout<<a<<endl;//gets the content of the array in the case of character array(Unless you find a null )
	int c[10]={10,12,1};
	cout<<c<<endl;//gets the starting index of an array(Default)
	//Input
	char c1 [10];
	cin>>c1;// while you take the character as input, the null is by default added to it
	cout<<c1<<endl;

	char b1[]= {"hello"};//len(=6) the null is added automatically
	char b2[] = {'a','b','c'};//as size not defined(len=3) contrary to the one on line 6 char a[10]={'a','b','c'} (len=10)
	cout<<a<<sizeof(a)<<endl; // len= 10
	cout<<b<<sizeof(b)<<endl; //len= 4
	cout<<b1<<sizeof(b1)<<endl; //len= 4
	cout<<b2<<sizeof(b2)<<endl;// len = 4 as initially len is not defined but will surely give garbage value
	return 0;
}