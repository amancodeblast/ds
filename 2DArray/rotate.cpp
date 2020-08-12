#include<iostream>
using namespace std;
bool magical_park(int a[][100],int m, int n){
	int a1[100][100];
	for(int i=0;i<m;i++){
		for(int j=0;j<n; j++){
			a1[n-j-1][i]=a[i][j];
			cout<< "the i and the j value and the value assosiated is"<<n-j-1<<i<<a[i][j]<<endl;
		}
	}
	cout<<"the rotated matrix"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a1[i][j]<<",";
		}
		cout<<endl;
	}
}
int main(){
	int m,n,k,s;
	cout<<"enter two number for rows and columns respectively"<<endl;
	cin>>m>>n;
		
	int a[100][100];
	
	// intialize the array in the order
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	cout<<"the original matrix"<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
	magical_park(a,m,n);

	return 0;
}