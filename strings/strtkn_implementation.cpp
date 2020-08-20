#include<iostream>
using namespace std;
#include<cstring>
//# include<algorithm>
//help 
//you need a dynamic array (not a static one )that stores the array for the next call to remember it
//you also need a static variable to maintain how many tokens are returned

char* mystrtok(char *s, char delim){
	static char* input =NULL;//state of the static variable is init only once in the function call and in every subsequent call it has the state as of the previosus call.
	//we are making the first call  
	if(input ==NULL){
		input = s; 
	}	

	//check here - base case after the last token is returned
	if(input==NULL){
		return NULL;
	}
	//start extracting token and store in a different array
	char * output = new char[strlen(input)+1];
	int i =0;
	for(;input[i]!=NULL;i++){
		if(input[i]!= delim){
			output[i] = input[i];
		}
		else{
			output[i] = '\0';
			input = input+i+1;
			return output;
		}

	}
//corner case of the last token not getting a space 
output[i]="\0";
input = NULL;
return output;
}




int main(){
	char s[1000]= "today is a rainy day";
	char *ptr = strtok(s," "); // the first time it should be a character arrray and rest should be null until the ptr retruns a NULL itself 
	//i.e when there is nothing left in the character array

	cout<<ptr<<endl;

	while(ptr!=NULL){
		ptr = mystrtok(NULL," "); // the second token is the delimeter
		cout<<ptr<<endl;
	}
	




	return 0;

}