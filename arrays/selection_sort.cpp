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
	int temp;
	for(int i=0;i<n;i++){
		min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
			
		}
		temp = a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	//Printing the sorted part 
	cout<<"printing the sorted array"<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<",";
	}
}
