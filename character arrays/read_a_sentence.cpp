#include<iostream>
using namespace std;
// c++ has an stl function called as cin.getline(_,_,_);
void readline(char a[], int maxLen, char delim='\n' ){
	int i=0;
	char ch= cin.get();
	while(ch!=delim){		
		a[i]=ch;
		i++;
		if(maxLen-1==i){
			break;
		}
		ch=cin.get();
	}
	a[i]='\0';
}

int main(){
	//read a sentence or a paragraph and store it in a character array
	char a[1000];
	char b[1000];
	//cin>>a;
	readline(a,1000);
	cout<<a<<endl;

	readline(b,1000,'$');
	cout<<b<<endl;
//cin.get() reads a single character 
	//put  a loop to read character till you get a new line "\n"

	return 0;
}