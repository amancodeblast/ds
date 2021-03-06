//Binary search with comparator function passed
#include<iostream>
using namespace std;
#include<climits>

bool compare(int a, int b){
	return a>b;
}


int Bubble_sort(int a[],int n,bool (&cmp)(int a, int b)){
	int temp;
	for(int i=1;i<n;i++){
		
		for(int j=0;j<n-i;j++){
			if(cmp(a[j],a[j+1])){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			
		}
		
	}

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
	//printing the unsorted part 

	for(int i=0;i<n;i++){
		cout<<a[i]<<",";
	}
	cout<<endl;
	cout<<"printing the sorted array"<<endl;
	Bubble_sort(a,n,compare);
	for(int i=0;i<n;i++){
		cout<<a[i]<<",";
	}
}
