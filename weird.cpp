#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;

	while(n != 1){
		cout<<n<<" ";
		if(n & 1)
		     n = 3*n + 1; // if n is odd
		else
		     n = n / 2; // if n is even
	}
	cout<<n;
}

