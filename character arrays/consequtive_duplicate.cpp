#include<iostream>
using namespace std;
// c++ has an stl function called as cin.getline(_,_,_);
void removeduplicated(char a[]){
	int l =strlen(a);
	if(l==1 or l==0){
		cout<<a;
		return;
	}
	int j =0;
	for(int i=1;i<l;i++){
		if(a[j]==a[i]); 
		else{
			j++;
			a[j]= a[i];
			
		}
	}
	a[j+1]='\0';
	cout<<a<<endl;
/*

	int l =strlen(a);
	if(l==1 or l==0){
		cout<<a;
		return;
	}
	int prev =0;
	for (int i= 1;i<l; i++){
		if(a[i]!=a[prev]){
			prev++;
			a[prev] = a[i];
		}
	}
	a[prev+1]='\0';
	cout<<a;
*/
}

int main(){
	//taking input uing the getinline function
	char ch[1000];
	cin.getline(ch,1000);
	removeduplicated(ch);
	return 0;
}