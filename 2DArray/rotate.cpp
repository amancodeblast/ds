#include<iostream>
using namespace std;
# include<algorithm>
bool rotateExtraspace1(int a[][100],int m, int n){
	int a1[100][100];
	for(int i=0;i<m;i++){
		for(int j=0;j<n; j++){
			a1[n-j-1][i]=a[i][j];
			//cout<< "the i and the j value and the value assosiated is"<<n-j-1<<i<<a[i][j]<<endl;
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


void inplaceRotateSTL(int a[][100], int n){
	//reverse each row 
	for(int i=0; i<n;i++){
		reverse(a[i],a[i]+n);
	}
	// transpose the array
	for(int i=0;i<n; i++){
		for(int j=0;j<n;j++){
			if(i<j){
				swap(a[i][j],a[j][i]);	
			}
			
		}
	}
	cout<<"the rotated matrix"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<",";
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
	//rotateExtraspace1(a,m,n);
	//inplacerotate() reverse of each row and transpose the complete array 	
	//inplaceRotate(a,m);
	inplaceRotateSTL(a,m);
	return 0;
}