#include<iostream>
using namespace std;
int main(){
	int m,n;
	cout<<"enter two number for rows and columns respectively"<<endl;
	cin>>m;
	cin>>n;
	int a[m][n];
	int c=0;
	// intialize the array in the order
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			a[i][j]=c;
			cout<<a[i][j]<<" ";
			c=c+1;
		}
		cout<<endl;
	}
	
	//Iterate or print over the array
	for(int j=0;j<n;j++){
		if(j%2==0){
			for(int i=0; i<m ; i++){
				cout<<a[i][j]<<", ";
			}
		}
		else{
			for(int i=m-1; i >= 0 ; i++){
				cout<<a[i][j]<<", ";
			}

		}
		cout<<endl;
	}



	return 0;
}