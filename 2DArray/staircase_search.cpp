#include<iostream>
using namespace std;
# include<algorithm>
bool staircase_search(int a[][100],int m, int n, int s){
	int p = n-1;
	int i=0;
	while(i<m && p>=0){
		if(int(a[i][p])==s){
			cout<<"Found It!! On index "<<i<<","<<p<<endl;
			return 1;
		}
		else if(int(a[i][p])<s){
			//cout<< "int(a[i]+p)"<<int(a[i][p])<<"s"<<s<<endl;
			//cout<<"i="<<i+1<<endl;
			i++;
		}
		else{
			//cout<< "int(a[i][p])"<<int(a[i][p])<<"s"<<s<<endl;
			//cout<<"p ="<<p+1<<endl;
			p--;
		}
		
	}
	cout<<"Not found Bc"<<endl;
		return 0;
}

int main(){
	int m,n;
	cout<<"enter two number for rows and columns respectively"<<endl;
	cin>>m>>n;
		
	int a[100][100];
	
	// intialize the array in the order
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	cout<<"enter the search number"<<endl;
	int s;
	cin>>s;
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
	staircase_search(a,m,n,s);
	return 0;
}