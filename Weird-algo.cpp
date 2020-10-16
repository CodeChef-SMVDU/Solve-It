/** Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and 
    if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one. For example,
    the sequence for n=3 is as follows: 3→10→5→16→8→4→2→1**/
#include <iostream>
using namespace std;

int main() {
	int num , updated;
	cin>> num;
	cout<< num;
	while (num != 1)
	{
	    updated = (num%2==0)?num/2:(num*3 + 1);
	    cout<<" " <<updated;
		num = updated ;
	}
	return 0;
}
