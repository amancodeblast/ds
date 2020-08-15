#include<iostream>
#include<cstring>
using namespace std;
// Read followed by n Strings and print largest strings and its length


int main(){
	int n;
	cout<<"Enter the no. of string"<<endl;	
	cin>>n;
	cin.get();//to consume the previous enter that was used in the entering of the number
	char ch[1000];
	int l,largest;
	largest=0;
	l=0;
	char ch1[1000];
	for(int i =0;i < n;i++){

		cin.getline(ch,1000);
		l= strlen(ch);

		if(l>largest){
			largest = l;
			strcpy(ch1,ch);
		}
	}
cout<<"largest array is : "<<ch1<<" and the length is "<<largest<<endl;
	return 0;
}