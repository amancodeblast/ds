//Binary search
#include<iostream>
using namespace std;
#include<climits>


int main(){
	int min= INT_MAX;
	int a[1000] = {0}; 
	int n;
	cout<<"Enter the no. of elements you would want in the array"<<endl;
	cin>>n;
	cout<<"enter all the elements in the array"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//priinting the unsorted part 

	for(int i=0;i<n;i++){
		cout<<a[i]<<",";
	}
	for(int i =0;i<n;i++){
		for(int j=i; j<n; j++){
			for(int k=i;k<j;k++){
				cout<<a[k]<<",";
			}
			cout<<endl;
		}
	}
}
