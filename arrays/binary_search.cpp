//Binary search
#include<iostream>
using namespace std;

int binary_search(int a[],int n,int k){
	int s,e,mid;
	s=0;
	e=n-1;
	while(s<=e){
		mid=(s+e)/2;
		if(a[mid]==k){
			cout<<"Found it"<<endl;
			return mid;

		}
		else if(a[mid]<k){
			s=mid+1;
		}
		else if(a[mid]>k){
			e = mid-1;
		}

	}
	return -1;
}



int main(){

	int a[1000] = {0}; 
	int n;
	cout<<"Enter the no. of elements you would want in the array"<<endl;
	cin>>n;
	cout<<"enter all the elements in the array"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//searching for the element
	//taking the element as input 
	cout<<"enter the element to be searched"<<endl;
	int key;
	cin>>key;
	//calling the function for the same 
	//assuming it is in the ascending orde1r
	cout<<"the element is at place "<<binary_search(a,n,key)+1<<endl;

}