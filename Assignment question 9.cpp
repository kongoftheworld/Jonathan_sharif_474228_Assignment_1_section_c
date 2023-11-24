#include <iostream> 
using namespace std; 
 
int main() 
{ 
 
int ele[5]; int num = 0; bool flag = false; 
 
cout << "Enter a number"<< endl; 
cin >> num; 
 
cout << endl; 
 
cout << "Enter the numbers of the array" <<endl; 
 
for (int i = 0; i < 5; i++) { 
 
cin >> ele[i]; 
} 
 
for (int i = 0; i < 5; i++) 
{ 
for (int j = 0; j < 5; j++) 
{ 
for (int k = 0; k < 5; k++) 
{ 
if (ele[i]+ele[j]+ele
[k]==num) 
{ flag = true; 
} 
} 
} } if (!flag) 
{ 
cout << "Triplet not found" << endl; 
} else { 
cout << "Triplet found" << endl; 
} 
return 0; 
}

