//Binary search
#include<iostream>
using namespace std;
#include<climits>


int main(){
	int max= INT_MIN;
	int sum= INT_MIN;
	int ci,cj;
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
			sum=0;
			for(int k=i;k<j;k++){
				//cout<<a[k]<<",";
				sum+=a[k];
			}
			if(max<sum){
				max=sum;
				ci=i;
				cj=j;
			}
			//cout<<endl;
		}
	}
	cout<<"the max sum is "<<max<<endl;
	cout<<"the sub array whose sum is max is "<<endl;
	for(int i=ci;i<cj;i++){
		cout<<a[i]<<",";
	}
}
