#include<iostream>
using namespace std;
int spiral_print(int a[][1000], int m, int n){
	int startrow = 0; 
	int startcol = 0;
	int endrow = m-1;
	int endcol = n-1;
	//printing the 
	
	while(startrow<=endrow and startcol<=endcol){
		for(int i=startcol; i <=endcol; i++){
			cout<<a[startrow][i]<<", ";
		}
		startrow++;
		for(int i= startrow; i<=endrow; i++){
			cout<<a[i][endcol]<<", ";
		}
		endcol--;
		for(int i=endcol; i>=startcol; i--){
			cout<<a[endrow][i]<<",";
		}
		endrow++;
		for(int i = endrow; i>= startrow; i--){
			cout<<a[i][startcol]<<","; 
		}
		startcol--;
	}




}
int main(){
	int m,n;
	cout<<"Maa chudwa";
	cout<<"Enter two number for rows and columns respectively"<<endl;
	cin>>m;
	cin>>n;
	int a[1000][1000];
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
	
	spiral_print(a,m,n);

	return 0;
}