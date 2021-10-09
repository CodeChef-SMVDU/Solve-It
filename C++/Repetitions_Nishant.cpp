#include <iostream>
#include <string>

using namespace std;

int main(void){

	string dna;
	getline(cin, dna);
	
	int rep = 0;
	int count = 1;
	
	
	for(int i=1; i<dna.length(); i++){
		if(rep < count)
			rep = count;
		if(dna[i] == dna[i-1])
			count = count + 1;
		else
			count = 1;
	}
	
	cout<<rep<<endl;
}