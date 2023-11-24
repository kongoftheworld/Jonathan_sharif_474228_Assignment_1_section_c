#include <iostream>
using namespace std;
int main(){
	int x,y=2,z,p,prime = 1;
	cout<<"Enter a number";
	cin>>x;
	while(y<=x){
		z=2;
		while( z<y && prime ==1 ){
			if(y%z == 0){
				prime = 0;
				
			}
			z++;
			
			
		}
		
		if(prime ==1){
			p= y;
		}
		
		y++;
		prime =1;
	}
	
	cout<<p;
	
}
