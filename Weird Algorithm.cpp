/*Consider an algorithm that takes as input a positive integer n.
If n is even, the algorithm divides it by two, and if n is odd,
the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one.*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; //Input

	cin >> n;

	/* First we print initial value of n and then change it. 
	If the changed value of n is one, the loop will break and 1 will get printed at the end*/ 

	while(n!=1){
		cout << n << " ";
		if(n%2==0){
			n/=2;
		}else{
			n=n*3+1;
		}
	}

	cout << "1 " << endl;

	return 0;
}