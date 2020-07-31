//khadane's solution in O(n)
#include<iostream>
using namespace std;
#include<climits>


int main(){

	int a[1000] = {0}; 
	int n;
	cout<<"Enter the no. of elements you would want in the array"<<endl;
	cin>>n;
	cout<<"enter all the elements in the array"<<endl;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//calculating the cumulative sum array
	int cs=0;
	int ms = 0;

	//kadane's algo
	for(int i=0;i<n;i++){
		cs =cs +a[i];
		if(cs<0){
			cs=0;
		}
		ms = max(cs,ms);
	}
	cout<<"the max sum is "<<ms<<endl;

	}
