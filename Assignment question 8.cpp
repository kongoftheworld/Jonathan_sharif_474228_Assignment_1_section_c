#include <iostream> 
using namespace std; 
 
int main() 
{
	int n,x;
cout<<"Enter the elements you want to add";
 cin>>n;
 
int arr[n] = { 1,2,3,4,5 }; 
 
for (int i = 1; i <= n; i++) { cin >> arr[i]; 
} 
 
for (int i = 1; i <= n
; i++) { cout<< " Answer is "; cout << arr[i]<<endl; 
 } 
return 0; 
} 

