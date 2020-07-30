// input and print
#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter the element you want to search";
	cin>>n;
	int a[10] = {0}; 
	cout<<"enter the 10 elements in the array"<<endl;
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	//searching for the element
	int i=0;
	for(i=0;i<10;i++){
		if(a[i]==n){
			cout<<"element found at "<<i<<endl;
			break;
		}
	}
		if(i==10){
			cout<<"not found"<<endl;
		
		}
	
	for(int i=0;i<10;i++){
		cout<<a[i]<<",";
	}
}