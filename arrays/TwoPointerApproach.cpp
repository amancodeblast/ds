//khadane's solution in O(n)
#include<iostream>
using namespace std;



int main(){

int a[]= {1,3,5,7,10,11,12,13};
int s =16;
int i=0; 
int j=sizeof(a)/sizeof(int)-1;
while(i<j){
	if(s>(a[i]+a[j])){
		i++;
	}
	else if (s<(a[i]+a[j])){
		j--;
	}
	else{
		cout<<"("<<a[i]<<","<<a[j]<<")";
		i++;j--;
	}
}


return 0;
}