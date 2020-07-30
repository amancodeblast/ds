// input and print
#include<iostream>
using namespace std;
#include<climits>

int main(){
	int max=INT_MIN;
	int min = INT_MAX;
	int a[10] = {0}; 
	int n;
	cout<<"Enter the no. of elements you would want in the array"<<endl;
	cin>>n;
	cout<<"enter the 10 elements in the array"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
//printigng the maximum element
		
	for(int i=0;i<10;i++){
		cout<<a[i]<<",";
	cout<<"maximum no. is "<<max<<endl;
	cout<<"minimum no. is "<<min<<endl;

	}
}