#include <iostream>
#include <string>
using namespace std;
int main(){
	string x,y;
	char temp;
	cout<<"Enter two words";
	cin>>x>>y;
	if(x==y){
		for(int i = 0,j = x.length()-1;i<=j;i++,j-- ){
			temp = x[i];
			x[i]=x[j];
			x[j] = temp;
		}
		cout<<x;
	}
	else{
		
	cout<<"The words are not the same";

	}
	
	
}
