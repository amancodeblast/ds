#include<iostream>
using namespace std;
int main(){
	int a[5][3]={0};

	//Iterate or print over the array
	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
			cout<<a[i][j]<<",";
		}
		cout<<endl;
	}



	return 0;
}