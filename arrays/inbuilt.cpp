//inbuilt sort
#include<iostream>
using namespace std;
#include<climits>
#include<algorithm>
//Defining a comparator Function 
bool compare(int a, int b){
	cout<<"comparing"<<a<<"and"<<b<<endl;
	return a>b;
}
int main(){
	
	int a[1000]; 
	int n,key;
	cout<<"Enter the no. of elements you would want in the array"<<endl;
	cin>>n;
	cout<<"enter all the elements in the array"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//printing the unsorted part 

	for(int i=0;i<n;i++){
		cout<<a[i]<<",";
	}
	cout<<endl;
	cout<<"printing the sorted array"<<endl;
	sort(a,a+n,compare);//start(included) , ending (excluded)
	for(int i=0;i<n;i++){
		cout<<a[i]<<",";
	}
}
