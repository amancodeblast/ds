/*Binary search
Two methods both works ......
the for loop one has to deal with the edge case of getting to the a[-1] index and 
update the a[0] = temp; 
for that i copy the temp value to the position for every shift to the rihgt i make the left copy replace with temp 
it is not exactly how the algo works but it can work that way with no difficulty
*/
#include<iostream>
using namespace std;
#include<climits>
/*
int insertion_sort(int a[],int n){
	int temp;
	for(int i=1;i<=n-1;i++){
		temp=a[i];
		for(int j=i-1;j>=0;j--){
		
			if(temp<a[j]){
				a[j+1]=a[j];
				a[j]=temp;
			}
			else{
				a[j+1]=temp;
				break;
			}
		}
			
	}
	
	
}
*/
int insertion_sort(int a[],int n){
	int temp;
	for(int i=1;i<=n-1;i++){
		temp=a[i];
		int j = i-1;
		while(j>=0&&a[j]>temp){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
			
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
	cout<<"printing the sorted array"<<endl;
	insertion_sort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<",";
	}
}
