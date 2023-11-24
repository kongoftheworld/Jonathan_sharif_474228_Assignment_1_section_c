#include<iostream>
using namespace std;
int main(){
	char str[100]; 
cout << "Enter a string = "; cin >> str; 
 
int l = 0; 
 
while (str[l] != '\0') { l++; 
} 
 
for (int i = 0; i < l; i++) { for (int j = i + 1; j < l;) { if (str[i] == str[j]) { 
 
for (int k = j; k < l - 1; k++) { str[k] = str[k + 1]; 
} str[l - 1] = '\0'; l--; } else 
{ 
j++; 
} 
} 
} 
 
cout << "Resultant string is " << str << endl; 
 
return 0; 
} 

	
	
	

 
