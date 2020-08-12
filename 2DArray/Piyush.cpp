#include<iostream>
using namespace std;
bool magical_park(char a[][100],int m, int n, int k, int s){
	bool success= true;
	for(int i=0;i<m;i++){
		for(int j=0;j<n; j++){
			char ch =a[i][j];
			if(s<k){
				success=false;
				break;
			}
			if(j==n-1) continue;
			s--;
			if(ch=='.'){
				s=s-2;
			}
			else if(ch=='*'){
				s=s+5;
			}
			else{
				break;
			}
			
		}
	}
	if(success==1){
		cout<<"Yes"<<endl;
		cout<<s;
	}
	else{
		cout<<"No"<<endl;
	}
}
int main(){
	int m,n,k,s;
	cout<<"enter two number for rows and columns respectively"<<endl;
	cin>>m>>n>>k>>s;
		
	char park[100][100];
	int c=0;
	// intialize the array in the order
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>park[i][j];
		}

	}
	magical_park(park,m,n,k,s);

	return 0;
}